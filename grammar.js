/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

// This is a modified version of the following grammar:
// https://github.com/Aerijo/tree-sitter-bibtex/blob/master/grammar.js

function ignoreCase(str) {
  return new RegExp(
    str
      .split('')
      .map(c =>
        /[a-zA-Z]/.test(c) ? `[${c.toLowerCase()}${c.toUpperCase()}]` : c
      )
      .join('')
  );
}

/*
  Adapted from the PEG grammar given here https://github.com/aclements/biblib
  whitespace is ignored by default (tree-sitter-cli)
    - it will be recognised if the `extras` property is added though
*/

module.exports = grammar({
  name: 'bibtex',
  rules: {
    document: $ => repeat(choice($._command_or_entry, $.junk)),

    junk: $ => /[^@\r\n\s\t][^@]*/,

    _command_or_entry: $ => choice($.comment, $.preamble, $.string, $.entry),

    comment: $ => seq('@', ignoreCase('comment')),

    string: $ =>
      seq(
        '@',
        field('ty', ignoreCase('string')),
        choice(
          seq(
            '{',
            field('name', $.identifier),
            '=',
            field('value', $.value),
            '}'
          ),
          seq(
            '(',
            field('name', $.identifier),
            '=',
            field('value', $.value),
            ')'
          )
        )
      ),

    preamble: $ =>
      seq(
        '@',
        field('ty', ignoreCase('preamble')),
        choice(
          seq('{', field('value', $.value), '}'),
          seq('(', field('value', $.value), ')')
        )
      ),

    entry: $ =>
      seq(
        '@',
        field('ty', $.identifier),
        choice(
          seq(
            '{',
            field('key', $.key_brace),
            repeat(seq(',', field('field', $.field))),
            optional(','),
            '}'
          ),
          seq(
            '(',
            field('key', $.key_paren),
            repeat(seq(',', field('field', $.field))),
            optional(','),
            ')'
          )
        )
      ),

    key_brace: $ => /[^,\s\t\n\}]*/, // "braces key" / can be empty (will not throw error) but cannot be referenced this way

    key_paren: $ => /[^,\s\t\n]*/, // "parentheses key" // the ) is actually allowed

    field: $ => seq(field('name', $.identifier), '=', field('value', $.value)),

    identifier: $ => {
      // `scan_identifier` [2210] // tests indicate unicode works too (with xelatex)
      const first = /[\!\$\&\*\+\-\.\/:;<>\?@\[\]\\\^_`\|\~a-zA-Z]/; // https://regex101.com/r/fAkBEf/1
      const later = /[\!\$\&\*\+\-\.\/:;<>\?@\[\]\\\^_`\|\~a-zA-Z0-9]/; // basically all visible ASCII except: "#%'(),={}
      return token(seq(first, repeat(later)));
    },

    value: $ => seq($.token, repeat(seq('#', $.token))),

    token: $ =>
      choice(
        seq('{', repeat($._brace_balanced), '}'),
        seq('"', repeat($._quote_balanced), '"'),
        $.number,
        $.identifier
      ),

    number: $ => /[0-9]+/,

    _brace_balanced: $ =>
      prec.right(
        choice(
          seq('{', repeat($._brace_balanced), '}'),
          repeat1(choice($.brace_word, $.command))
        )
      ),

    _quote_balanced: $ =>
      prec.right(
        choice(
          seq('{', repeat($._brace_balanced), '}'),
          repeat1(choice($.quote_word, $.command))
        )
      ),

    brace_word: $ => /[^\{\}\\\s]+/,

    quote_word: $ => /[^\"\{\}\\\s]+/,

    command: $ => /\\([^\r\n]|[@a-zA-Z]+\*?)?/,
  },
});
