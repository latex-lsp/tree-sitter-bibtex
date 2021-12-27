/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const { sepBy } = require('../util');

module.exports = {
  _preamble_type: $ => /[Pp][Rr][Ee][Aa][Mm][Bb][Ll][Ee]/,

  preamble: $ =>
    seq(
      field('at', '@'),
      field('entry_type', alias($._preamble_type, $.entry_type)),
      choice(seq('(', $.value, ')'), seq('{', $.value, '}')),
    ),

  _string_type: $ => /[Ss][Tt][Rr][Ii][Nn][Gg]/,

  string: $ =>
    seq(
      field('at', '@'),
      field('entry_type', alias($._string_type, $.entry_type)),
      choice(seq('(', $._assignment, ')'), seq('{', $._assignment, '}')),
    ),

  _comment_type: $ => /[Cc][Oo][Mm][Mm][Ee][Nn][Tt]/,

  comment: $ =>
    seq(
      field('at', '@'),
      field('entry_type', alias($._comment_type, $.entry_type)),
    ),

  entry: $ =>
    seq(
      field('at', '@'),
      field('entry_type', alias($.identifier, $.entry_type)),
      choice(
        seq(
          '(',
          field('key', alias($._key_paren, $.key)),
          ',',
          repeat(field('field', $.field)),
          ')',
        ),
        seq(
          '{',
          field('key', alias($._key_curly, $.key)),
          ',',
          repeat(field('field', $.field)),
          '}',
        ),
      ),
    ),

  _key_curly: $ => /[^,\s\t\n\}]*/,

  _key_paren: $ => /[^,\s\t\n]*/,

  field: $ => seq($._assignment, optional(',')),

  _assignment: $ =>
    seq(field('key', $.identifier), field('eq', '='), field('value', $.value)),
};
