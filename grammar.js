/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

// This grammar is based on the following grammars:
// 1. https://github.com/aclements/biblib
// 2. https://github.com/Aerijo/tree-sitter-bibtex/

const rules = require('./rules');

module.exports = grammar({
  name: 'bibtex',
  supertypes: $ => [$._object],
  rules: {
    source_file: $ => repeat(choice($.junk, $._object)),

    ...rules,

    _object: $ => choice($.preamble, $.string, $.comment, $.entry),

    identifier: $ => /[^\s\{\}\(\),#"=\\]+/,

    junk: $ => /[^\s@]+/,
  },
});
