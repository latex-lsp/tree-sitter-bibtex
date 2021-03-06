#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 67
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 6

enum {
  sym_junk = 1,
  sym_comment = 2,
  sym_string_type = 3,
  anon_sym_LBRACE = 4,
  anon_sym_EQ = 5,
  anon_sym_RBRACE = 6,
  anon_sym_LPAREN = 7,
  anon_sym_RPAREN = 8,
  sym_preamble_type = 9,
  sym_entry_type = 10,
  anon_sym_COMMA = 11,
  sym_key_brace = 12,
  sym_key_paren = 13,
  sym_identifier = 14,
  anon_sym_POUND = 15,
  anon_sym_DQUOTE = 16,
  sym_number = 17,
  sym_brace_word = 18,
  sym_quote_word = 19,
  sym_command = 20,
  sym_document = 21,
  sym__command_or_entry = 22,
  sym_string = 23,
  sym_preamble = 24,
  sym_entry = 25,
  sym_field = 26,
  sym_value = 27,
  sym_token = 28,
  sym__brace_balanced = 29,
  sym__quote_balanced = 30,
  aux_sym_document_repeat1 = 31,
  aux_sym_entry_repeat1 = 32,
  aux_sym_value_repeat1 = 33,
  aux_sym_token_repeat1 = 34,
  aux_sym_token_repeat2 = 35,
  aux_sym__brace_balanced_repeat1 = 36,
  aux_sym__quote_balanced_repeat1 = 37,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_junk] = "junk",
  [sym_comment] = "comment",
  [sym_string_type] = "string_type",
  [anon_sym_LBRACE] = "{",
  [anon_sym_EQ] = "=",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_preamble_type] = "preamble_type",
  [sym_entry_type] = "entry_type",
  [anon_sym_COMMA] = ",",
  [sym_key_brace] = "key_brace",
  [sym_key_paren] = "key_paren",
  [sym_identifier] = "identifier",
  [anon_sym_POUND] = "#",
  [anon_sym_DQUOTE] = "\"",
  [sym_number] = "number",
  [sym_brace_word] = "brace_word",
  [sym_quote_word] = "quote_word",
  [sym_command] = "command",
  [sym_document] = "document",
  [sym__command_or_entry] = "_command_or_entry",
  [sym_string] = "string",
  [sym_preamble] = "preamble",
  [sym_entry] = "entry",
  [sym_field] = "field",
  [sym_value] = "value",
  [sym_token] = "token",
  [sym__brace_balanced] = "_brace_balanced",
  [sym__quote_balanced] = "_quote_balanced",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_entry_repeat1] = "entry_repeat1",
  [aux_sym_value_repeat1] = "value_repeat1",
  [aux_sym_token_repeat1] = "token_repeat1",
  [aux_sym_token_repeat2] = "token_repeat2",
  [aux_sym__brace_balanced_repeat1] = "_brace_balanced_repeat1",
  [aux_sym__quote_balanced_repeat1] = "_quote_balanced_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_junk] = sym_junk,
  [sym_comment] = sym_comment,
  [sym_string_type] = sym_string_type,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_preamble_type] = sym_preamble_type,
  [sym_entry_type] = sym_entry_type,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_key_brace] = sym_key_brace,
  [sym_key_paren] = sym_key_paren,
  [sym_identifier] = sym_identifier,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_number] = sym_number,
  [sym_brace_word] = sym_brace_word,
  [sym_quote_word] = sym_quote_word,
  [sym_command] = sym_command,
  [sym_document] = sym_document,
  [sym__command_or_entry] = sym__command_or_entry,
  [sym_string] = sym_string,
  [sym_preamble] = sym_preamble,
  [sym_entry] = sym_entry,
  [sym_field] = sym_field,
  [sym_value] = sym_value,
  [sym_token] = sym_token,
  [sym__brace_balanced] = sym__brace_balanced,
  [sym__quote_balanced] = sym__quote_balanced,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_entry_repeat1] = aux_sym_entry_repeat1,
  [aux_sym_value_repeat1] = aux_sym_value_repeat1,
  [aux_sym_token_repeat1] = aux_sym_token_repeat1,
  [aux_sym_token_repeat2] = aux_sym_token_repeat2,
  [aux_sym__brace_balanced_repeat1] = aux_sym__brace_balanced_repeat1,
  [aux_sym__quote_balanced_repeat1] = aux_sym__quote_balanced_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_junk] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_string_type] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_preamble_type] = {
    .visible = true,
    .named = true,
  },
  [sym_entry_type] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_key_brace] = {
    .visible = true,
    .named = true,
  },
  [sym_key_paren] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_brace_word] = {
    .visible = true,
    .named = true,
  },
  [sym_quote_word] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__command_or_entry] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_preamble] = {
    .visible = true,
    .named = true,
  },
  [sym_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_token] = {
    .visible = true,
    .named = true,
  },
  [sym__brace_balanced] = {
    .visible = false,
    .named = true,
  },
  [sym__quote_balanced] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_entry_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_token_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_token_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__brace_balanced_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__quote_balanced_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_field = 1,
  field_key = 2,
  field_name = 3,
  field_ty = 4,
  field_value = 5,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_field] = "field",
  [field_key] = "key",
  [field_name] = "name",
  [field_ty] = "ty",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[8] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 1},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 3},
  [6] = {.index = 10, .length = 3},
  [7] = {.index = 13, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_ty, 0},
    {field_value, 2},
  [2] =
    {field_key, 2},
    {field_ty, 0},
  [4] =
    {field_field, 1},
  [5] =
    {field_field, 0, .inherited = true},
    {field_field, 1, .inherited = true},
  [7] =
    {field_name, 2},
    {field_ty, 0},
    {field_value, 4},
  [10] =
    {field_field, 3, .inherited = true},
    {field_key, 2},
    {field_ty, 0},
  [13] =
    {field_name, 0},
    {field_value, 2},
};

static TSSymbol ts_alias_sequences[8][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(6);
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '#') ADVANCE(39);
      if (lookahead == '(') ADVANCE(13);
      if (lookahead == ')') ADVANCE(14);
      if (lookahead == ',') ADVANCE(35);
      if (lookahead == '=') ADVANCE(11);
      if (lookahead == '@') ADVANCE(4);
      if (lookahead == '\\') ADVANCE(46);
      if (lookahead == '{') ADVANCE(10);
      if (lookahead == '}') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == ')') ADVANCE(14);
      if (lookahead == '{') ADVANCE(10);
      if (lookahead == '}') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= '~')) ADVANCE(38);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(46);
      if (lookahead == '{') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(43);
      END_STATE();
    case 3:
      if (lookahead == '\\') ADVANCE(46);
      if (lookahead == '{') ADVANCE(10);
      if (lookahead == '}') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 4:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(29);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(30);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(33);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          (':' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(34);
      END_STATE();
    case 5:
      if (eof) ADVANCE(6);
      if (lookahead == '@') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_junk);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(34);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_string_type);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(34);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_preamble_type);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(34);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_entry_type);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(24);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(34);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_entry_type);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(23);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(34);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_entry_type);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(16);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(34);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_entry_type);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(34);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_entry_type);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(28);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(34);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_entry_type);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(9);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(34);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_entry_type);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(27);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(34);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_entry_type);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(19);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(34);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_entry_type);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(17);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(34);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_entry_type);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(26);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(34);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_entry_type);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(20);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(34);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_entry_type);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(21);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(34);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_entry_type);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(32);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(34);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_entry_type);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(25);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(34);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_entry_type);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(18);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(34);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_entry_type);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(22);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(34);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_entry_type);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(8);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(34);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_entry_type);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(31);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_entry_type);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_key_brace);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '}') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_key_paren);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_quote_word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_command);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_command);
      if (lookahead == '*') ADVANCE(44);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_command);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(44);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 5},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 36},
  [63] = {.lex_state = 37},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_string_type] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_preamble_type] = ACTIONS(1),
    [sym_entry_type] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_command] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(60),
    [sym__command_or_entry] = STATE(2),
    [sym_string] = STATE(2),
    [sym_preamble] = STATE(2),
    [sym_entry] = STATE(2),
    [aux_sym_document_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_junk] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [sym_string_type] = ACTIONS(9),
    [sym_preamble_type] = ACTIONS(11),
    [sym_entry_type] = ACTIONS(13),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(9), 1,
      sym_string_type,
    ACTIONS(11), 1,
      sym_preamble_type,
    ACTIONS(13), 1,
      sym_entry_type,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      sym_junk,
    ACTIONS(19), 1,
      sym_comment,
    STATE(3), 5,
      sym__command_or_entry,
      sym_string,
      sym_preamble,
      sym_entry,
      aux_sym_document_repeat1,
  [26] = 7,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      sym_junk,
    ACTIONS(26), 1,
      sym_comment,
    ACTIONS(29), 1,
      sym_string_type,
    ACTIONS(32), 1,
      sym_preamble_type,
    ACTIONS(35), 1,
      sym_entry_type,
    STATE(3), 5,
      sym__command_or_entry,
      sym_string,
      sym_preamble,
      sym_entry,
      aux_sym_document_repeat1,
  [52] = 5,
    ACTIONS(38), 1,
      anon_sym_LBRACE,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      aux_sym__brace_balanced_repeat1,
    ACTIONS(43), 2,
      sym_brace_word,
      sym_command,
    STATE(4), 2,
      sym__brace_balanced,
      aux_sym_token_repeat1,
  [70] = 5,
    ACTIONS(46), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    STATE(25), 1,
      aux_sym__quote_balanced_repeat1,
    ACTIONS(51), 2,
      sym_quote_word,
      sym_command,
    STATE(5), 2,
      sym__quote_balanced,
      aux_sym_token_repeat2,
  [88] = 5,
    ACTIONS(54), 1,
      anon_sym_LBRACE,
    ACTIONS(56), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      aux_sym__brace_balanced_repeat1,
    ACTIONS(58), 2,
      sym_brace_word,
      sym_command,
    STATE(4), 2,
      sym__brace_balanced,
      aux_sym_token_repeat1,
  [106] = 5,
    ACTIONS(54), 1,
      anon_sym_LBRACE,
    ACTIONS(60), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      aux_sym__brace_balanced_repeat1,
    ACTIONS(58), 2,
      sym_brace_word,
      sym_command,
    STATE(4), 2,
      sym__brace_balanced,
      aux_sym_token_repeat1,
  [124] = 5,
    ACTIONS(54), 1,
      anon_sym_LBRACE,
    ACTIONS(62), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      aux_sym__brace_balanced_repeat1,
    ACTIONS(58), 2,
      sym_brace_word,
      sym_command,
    STATE(12), 2,
      sym__brace_balanced,
      aux_sym_token_repeat1,
  [142] = 5,
    ACTIONS(62), 1,
      anon_sym_DQUOTE,
    ACTIONS(64), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      aux_sym__quote_balanced_repeat1,
    ACTIONS(66), 2,
      sym_quote_word,
      sym_command,
    STATE(13), 2,
      sym__quote_balanced,
      aux_sym_token_repeat2,
  [160] = 5,
    ACTIONS(54), 1,
      anon_sym_LBRACE,
    ACTIONS(68), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      aux_sym__brace_balanced_repeat1,
    ACTIONS(58), 2,
      sym_brace_word,
      sym_command,
    STATE(7), 2,
      sym__brace_balanced,
      aux_sym_token_repeat1,
  [178] = 5,
    ACTIONS(54), 1,
      anon_sym_LBRACE,
    ACTIONS(70), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      aux_sym__brace_balanced_repeat1,
    ACTIONS(58), 2,
      sym_brace_word,
      sym_command,
    STATE(6), 2,
      sym__brace_balanced,
      aux_sym_token_repeat1,
  [196] = 5,
    ACTIONS(54), 1,
      anon_sym_LBRACE,
    ACTIONS(72), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      aux_sym__brace_balanced_repeat1,
    ACTIONS(58), 2,
      sym_brace_word,
      sym_command,
    STATE(4), 2,
      sym__brace_balanced,
      aux_sym_token_repeat1,
  [214] = 5,
    ACTIONS(64), 1,
      anon_sym_LBRACE,
    ACTIONS(72), 1,
      anon_sym_DQUOTE,
    STATE(25), 1,
      aux_sym__quote_balanced_repeat1,
    ACTIONS(66), 2,
      sym_quote_word,
      sym_command,
    STATE(5), 2,
      sym__quote_balanced,
      aux_sym_token_repeat2,
  [232] = 2,
    ACTIONS(74), 2,
      ts_builtin_sym_end,
      sym_junk,
    ACTIONS(76), 4,
      sym_comment,
      sym_string_type,
      sym_preamble_type,
      sym_entry_type,
  [243] = 2,
    ACTIONS(78), 2,
      ts_builtin_sym_end,
      sym_junk,
    ACTIONS(80), 4,
      sym_comment,
      sym_string_type,
      sym_preamble_type,
      sym_entry_type,
  [254] = 5,
    ACTIONS(82), 1,
      anon_sym_LBRACE,
    ACTIONS(86), 1,
      anon_sym_DQUOTE,
    STATE(26), 1,
      sym_token,
    STATE(65), 1,
      sym_value,
    ACTIONS(84), 2,
      sym_identifier,
      sym_number,
  [271] = 5,
    ACTIONS(82), 1,
      anon_sym_LBRACE,
    ACTIONS(86), 1,
      anon_sym_DQUOTE,
    STATE(26), 1,
      sym_token,
    STATE(59), 1,
      sym_value,
    ACTIONS(84), 2,
      sym_identifier,
      sym_number,
  [288] = 2,
    ACTIONS(88), 2,
      ts_builtin_sym_end,
      sym_junk,
    ACTIONS(90), 4,
      sym_comment,
      sym_string_type,
      sym_preamble_type,
      sym_entry_type,
  [299] = 5,
    ACTIONS(82), 1,
      anon_sym_LBRACE,
    ACTIONS(86), 1,
      anon_sym_DQUOTE,
    STATE(26), 1,
      sym_token,
    STATE(55), 1,
      sym_value,
    ACTIONS(84), 2,
      sym_identifier,
      sym_number,
  [316] = 5,
    ACTIONS(82), 1,
      anon_sym_LBRACE,
    ACTIONS(86), 1,
      anon_sym_DQUOTE,
    STATE(26), 1,
      sym_token,
    STATE(42), 1,
      sym_value,
    ACTIONS(84), 2,
      sym_identifier,
      sym_number,
  [333] = 2,
    ACTIONS(92), 2,
      ts_builtin_sym_end,
      sym_junk,
    ACTIONS(94), 4,
      sym_comment,
      sym_string_type,
      sym_preamble_type,
      sym_entry_type,
  [344] = 2,
    ACTIONS(96), 2,
      ts_builtin_sym_end,
      sym_junk,
    ACTIONS(98), 4,
      sym_comment,
      sym_string_type,
      sym_preamble_type,
      sym_entry_type,
  [355] = 5,
    ACTIONS(82), 1,
      anon_sym_LBRACE,
    ACTIONS(86), 1,
      anon_sym_DQUOTE,
    STATE(26), 1,
      sym_token,
    STATE(58), 1,
      sym_value,
    ACTIONS(84), 2,
      sym_identifier,
      sym_number,
  [372] = 3,
    STATE(24), 1,
      aux_sym__brace_balanced_repeat1,
    ACTIONS(100), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(102), 2,
      sym_brace_word,
      sym_command,
  [384] = 3,
    STATE(28), 1,
      aux_sym__quote_balanced_repeat1,
    ACTIONS(105), 2,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
    ACTIONS(107), 2,
      sym_quote_word,
      sym_command,
  [396] = 3,
    ACTIONS(111), 1,
      anon_sym_POUND,
    STATE(29), 1,
      aux_sym_value_repeat1,
    ACTIONS(109), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [408] = 3,
    ACTIONS(115), 1,
      anon_sym_POUND,
    STATE(27), 1,
      aux_sym_value_repeat1,
    ACTIONS(113), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [420] = 3,
    STATE(28), 1,
      aux_sym__quote_balanced_repeat1,
    ACTIONS(118), 2,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
    ACTIONS(120), 2,
      sym_quote_word,
      sym_command,
  [432] = 3,
    ACTIONS(111), 1,
      anon_sym_POUND,
    STATE(27), 1,
      aux_sym_value_repeat1,
    ACTIONS(123), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [444] = 4,
    ACTIONS(82), 1,
      anon_sym_LBRACE,
    ACTIONS(86), 1,
      anon_sym_DQUOTE,
    STATE(35), 1,
      sym_token,
    ACTIONS(84), 2,
      sym_identifier,
      sym_number,
  [458] = 3,
    STATE(24), 1,
      aux_sym__brace_balanced_repeat1,
    ACTIONS(125), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(127), 2,
      sym_brace_word,
      sym_command,
  [470] = 1,
    ACTIONS(129), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_POUND,
  [477] = 1,
    ACTIONS(131), 4,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      sym_quote_word,
      sym_command,
  [484] = 1,
    ACTIONS(133), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_POUND,
  [491] = 1,
    ACTIONS(113), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_POUND,
  [498] = 1,
    ACTIONS(135), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_POUND,
  [505] = 3,
    ACTIONS(139), 1,
      anon_sym_COMMA,
    STATE(37), 1,
      aux_sym_entry_repeat1,
    ACTIONS(137), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [516] = 1,
    ACTIONS(142), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_brace_word,
      sym_command,
  [523] = 1,
    ACTIONS(144), 4,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      sym_quote_word,
      sym_command,
  [530] = 1,
    ACTIONS(146), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_brace_word,
      sym_command,
  [537] = 3,
    ACTIONS(148), 1,
      anon_sym_RPAREN,
    ACTIONS(150), 1,
      anon_sym_COMMA,
    STATE(43), 1,
      aux_sym_entry_repeat1,
  [547] = 1,
    ACTIONS(152), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [553] = 3,
    ACTIONS(154), 1,
      anon_sym_RPAREN,
    ACTIONS(156), 1,
      anon_sym_COMMA,
    STATE(37), 1,
      aux_sym_entry_repeat1,
  [563] = 3,
    ACTIONS(154), 1,
      anon_sym_RPAREN,
    ACTIONS(158), 1,
      sym_identifier,
    STATE(50), 1,
      sym_field,
  [573] = 3,
    ACTIONS(158), 1,
      sym_identifier,
    ACTIONS(160), 1,
      anon_sym_RBRACE,
    STATE(50), 1,
      sym_field,
  [583] = 3,
    ACTIONS(154), 1,
      anon_sym_RBRACE,
    ACTIONS(162), 1,
      anon_sym_COMMA,
    STATE(37), 1,
      aux_sym_entry_repeat1,
  [593] = 3,
    ACTIONS(158), 1,
      sym_identifier,
    ACTIONS(160), 1,
      anon_sym_RPAREN,
    STATE(50), 1,
      sym_field,
  [603] = 3,
    ACTIONS(154), 1,
      anon_sym_RBRACE,
    ACTIONS(158), 1,
      sym_identifier,
    STATE(50), 1,
      sym_field,
  [613] = 3,
    ACTIONS(148), 1,
      anon_sym_RBRACE,
    ACTIONS(164), 1,
      anon_sym_COMMA,
    STATE(46), 1,
      aux_sym_entry_repeat1,
  [623] = 1,
    ACTIONS(166), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [629] = 2,
    ACTIONS(158), 1,
      sym_identifier,
    STATE(50), 1,
      sym_field,
  [636] = 2,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
  [643] = 2,
    ACTIONS(172), 1,
      anon_sym_LBRACE,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
  [650] = 2,
    ACTIONS(176), 1,
      anon_sym_LBRACE,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
  [657] = 1,
    ACTIONS(180), 1,
      anon_sym_RBRACE,
  [661] = 1,
    ACTIONS(182), 1,
      sym_identifier,
  [665] = 1,
    ACTIONS(184), 1,
      anon_sym_EQ,
  [669] = 1,
    ACTIONS(180), 1,
      anon_sym_RPAREN,
  [673] = 1,
    ACTIONS(186), 1,
      anon_sym_RPAREN,
  [677] = 1,
    ACTIONS(188), 1,
      ts_builtin_sym_end,
  [681] = 1,
    ACTIONS(190), 1,
      sym_identifier,
  [685] = 1,
    ACTIONS(192), 1,
      sym_key_brace,
  [689] = 1,
    ACTIONS(194), 1,
      sym_key_paren,
  [693] = 1,
    ACTIONS(196), 1,
      anon_sym_EQ,
  [697] = 1,
    ACTIONS(186), 1,
      anon_sym_RBRACE,
  [701] = 1,
    ACTIONS(198), 1,
      anon_sym_EQ,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 26,
  [SMALL_STATE(4)] = 52,
  [SMALL_STATE(5)] = 70,
  [SMALL_STATE(6)] = 88,
  [SMALL_STATE(7)] = 106,
  [SMALL_STATE(8)] = 124,
  [SMALL_STATE(9)] = 142,
  [SMALL_STATE(10)] = 160,
  [SMALL_STATE(11)] = 178,
  [SMALL_STATE(12)] = 196,
  [SMALL_STATE(13)] = 214,
  [SMALL_STATE(14)] = 232,
  [SMALL_STATE(15)] = 243,
  [SMALL_STATE(16)] = 254,
  [SMALL_STATE(17)] = 271,
  [SMALL_STATE(18)] = 288,
  [SMALL_STATE(19)] = 299,
  [SMALL_STATE(20)] = 316,
  [SMALL_STATE(21)] = 333,
  [SMALL_STATE(22)] = 344,
  [SMALL_STATE(23)] = 355,
  [SMALL_STATE(24)] = 372,
  [SMALL_STATE(25)] = 384,
  [SMALL_STATE(26)] = 396,
  [SMALL_STATE(27)] = 408,
  [SMALL_STATE(28)] = 420,
  [SMALL_STATE(29)] = 432,
  [SMALL_STATE(30)] = 444,
  [SMALL_STATE(31)] = 458,
  [SMALL_STATE(32)] = 470,
  [SMALL_STATE(33)] = 477,
  [SMALL_STATE(34)] = 484,
  [SMALL_STATE(35)] = 491,
  [SMALL_STATE(36)] = 498,
  [SMALL_STATE(37)] = 505,
  [SMALL_STATE(38)] = 516,
  [SMALL_STATE(39)] = 523,
  [SMALL_STATE(40)] = 530,
  [SMALL_STATE(41)] = 537,
  [SMALL_STATE(42)] = 547,
  [SMALL_STATE(43)] = 553,
  [SMALL_STATE(44)] = 563,
  [SMALL_STATE(45)] = 573,
  [SMALL_STATE(46)] = 583,
  [SMALL_STATE(47)] = 593,
  [SMALL_STATE(48)] = 603,
  [SMALL_STATE(49)] = 613,
  [SMALL_STATE(50)] = 623,
  [SMALL_STATE(51)] = 629,
  [SMALL_STATE(52)] = 636,
  [SMALL_STATE(53)] = 643,
  [SMALL_STATE(54)] = 650,
  [SMALL_STATE(55)] = 657,
  [SMALL_STATE(56)] = 661,
  [SMALL_STATE(57)] = 665,
  [SMALL_STATE(58)] = 669,
  [SMALL_STATE(59)] = 673,
  [SMALL_STATE(60)] = 677,
  [SMALL_STATE(61)] = 681,
  [SMALL_STATE(62)] = 685,
  [SMALL_STATE(63)] = 689,
  [SMALL_STATE(64)] = 693,
  [SMALL_STATE(65)] = 697,
  [SMALL_STATE(66)] = 701,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(54),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(52),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(53),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_token_repeat1, 2), SHIFT_REPEAT(10),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_token_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_token_repeat1, 2), SHIFT_REPEAT(31),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_token_repeat2, 2), SHIFT_REPEAT(11),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_token_repeat2, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_token_repeat2, 2), SHIFT_REPEAT(25),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 6, .production_id = 5),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 6, .production_id = 5),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 5, .production_id = 2),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 5, .production_id = 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 6, .production_id = 6),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 6, .production_id = 6),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 4, .production_id = 2),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 4, .production_id = 2),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preamble, 4, .production_id = 1),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preamble, 4, .production_id = 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__brace_balanced_repeat1, 2),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__brace_balanced_repeat1, 2), SHIFT_REPEAT(24),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quote_balanced, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(30),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__quote_balanced_repeat1, 2),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__quote_balanced_repeat1, 2), SHIFT_REPEAT(28),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__brace_balanced, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quote_balanced, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entry_repeat1, 2, .production_id = 4),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entry_repeat1, 2, .production_id = 4), SHIFT_REPEAT(51),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__brace_balanced, 3),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quote_balanced, 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__brace_balanced, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 7),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entry_repeat1, 2, .production_id = 3),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [188] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_bibtex(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const uint16_t *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .field_count = FIELD_COUNT,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .field_names = ts_field_names,
    .large_state_count = LARGE_STATE_COUNT,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .state_count = STATE_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
