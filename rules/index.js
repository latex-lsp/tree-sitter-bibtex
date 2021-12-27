/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const content = require('./content');
const entry = require('./entry');

module.exports = {
  ...content,
  ...entry,
};
