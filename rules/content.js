/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const { sepBy1 } = require('../util');

module.exports = {
  value: $ =>
    sepBy1(
      choice(
        $.integer,
        $.curly_group,
        $.quote_group,
        alias($._quote_word, $.identifier),
      ),
      '#',
    ),

  integer: $ => /[0-9]+/,

  curly_group: $ => seq('{', repeat($._curly_content), '}'),

  quote_group: $ => seq('"', repeat($._quote_content), '"'),

  mixed_group: $ =>
    seq(choice('[', '('), repeat($._curly_content), choice(']', ')')),

  command: $ =>
    prec.right(
      seq(
        field('command_name', $.command_name),
        repeat(choice($.curly_group, $.mixed_group)),
      ),
    ),

  command_name: $ => /\\([^\r\n]|[@a-zA-Z:_]+\*?)?/,

  _curly_content: $ =>
    choice(
      $.curly_group,
      alias($._curly_word, $.word),
      $.inline_formula,
      $.displayed_equation,
      $.command,
    ),

  _quote_content: $ =>
    choice(
      $.curly_group,
      alias($._quote_word, $.word),
      $.inline_formula,
      $.displayed_equation,
      $.command,
    ),

  _curly_word: $ => /[^\s\{\}\$]+/,

  _quote_word: $ => /[^\s\{\}\$\"]+/,

  inline_formula: $ =>
    prec.left(
      seq(
        choice('$', alias('\\(', $.command_name)),
        repeat($._curly_content),
        choice('$', alias('\\)', $.command_name)),
      ),
    ),

  displayed_equation: $ =>
    prec.left(
      seq(
        choice('$$', alias('\\[', $.command_name)),
        repeat($._curly_content),
        choice('$$', alias('\\]', $.command_name)),
      ),
    ),
};
