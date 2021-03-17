#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 77
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 39
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
  sym_command_name = 20,
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
  sym_command = 31,
  aux_sym_document_repeat1 = 32,
  aux_sym_entry_repeat1 = 33,
  aux_sym_value_repeat1 = 34,
  aux_sym_token_repeat1 = 35,
  aux_sym_token_repeat2 = 36,
  aux_sym__brace_balanced_repeat1 = 37,
  aux_sym__quote_balanced_repeat1 = 38,
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
  [sym_command_name] = "command_name",
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
  [sym_command] = "command",
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
  [sym_command_name] = sym_command_name,
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
  [sym_command] = sym_command,
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
  [sym_command_name] = {
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
  [sym_command] = {
    .visible = true,
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

static const TSFieldMapSlice ts_field_map_slices[9] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 1},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 3},
  [7] = {.index = 11, .length = 3},
  [8] = {.index = 14, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_ty, 0},
    {field_value, 2},
  [3] =
    {field_key, 2},
    {field_ty, 0},
  [5] =
    {field_field, 1},
  [6] =
    {field_field, 0, .inherited = true},
    {field_field, 1, .inherited = true},
  [8] =
    {field_name, 2},
    {field_ty, 0},
    {field_value, 4},
  [11] =
    {field_field, 3, .inherited = true},
    {field_key, 2},
    {field_ty, 0},
  [14] =
    {field_name, 0},
    {field_value, 2},
};

static TSSymbol ts_alias_sequences[9][MAX_ALIAS_SEQUENCE_LENGTH] = {
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
      if (lookahead == '}') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead != 0) ADVANCE(43);
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
      ACCEPT_TOKEN(sym_command_name);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == '*') ADVANCE(44);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_command_name);
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
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 37},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 36},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
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
    [sym_command_name] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(74),
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
  [52] = 6,
    ACTIONS(38), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      sym_quote_word,
    ACTIONS(46), 1,
      sym_command_name,
    ACTIONS(41), 2,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
    STATE(4), 2,
      sym__quote_balanced,
      aux_sym_token_repeat2,
    STATE(19), 2,
      sym_command,
      aux_sym__quote_balanced_repeat1,
  [74] = 6,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    ACTIONS(53), 1,
      sym_brace_word,
    ACTIONS(55), 1,
      sym_command_name,
    STATE(11), 2,
      sym__brace_balanced,
      aux_sym_token_repeat1,
    STATE(25), 2,
      sym_command,
      aux_sym__brace_balanced_repeat1,
  [95] = 6,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    ACTIONS(61), 1,
      sym_quote_word,
    ACTIONS(63), 1,
      sym_command_name,
    STATE(4), 2,
      sym__quote_balanced,
      aux_sym_token_repeat2,
    STATE(19), 2,
      sym_command,
      aux_sym__quote_balanced_repeat1,
  [116] = 6,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      sym_quote_word,
    ACTIONS(63), 1,
      sym_command_name,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    STATE(6), 2,
      sym__quote_balanced,
      aux_sym_token_repeat2,
    STATE(19), 2,
      sym_command,
      aux_sym__quote_balanced_repeat1,
  [137] = 6,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      sym_brace_word,
    ACTIONS(55), 1,
      sym_command_name,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    STATE(9), 2,
      sym__brace_balanced,
      aux_sym_token_repeat1,
    STATE(25), 2,
      sym_command,
      aux_sym__brace_balanced_repeat1,
  [158] = 6,
    ACTIONS(69), 1,
      anon_sym_LBRACE,
    ACTIONS(72), 1,
      anon_sym_RBRACE,
    ACTIONS(74), 1,
      sym_brace_word,
    ACTIONS(77), 1,
      sym_command_name,
    STATE(9), 2,
      sym__brace_balanced,
      aux_sym_token_repeat1,
    STATE(25), 2,
      sym_command,
      aux_sym__brace_balanced_repeat1,
  [179] = 6,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      sym_quote_word,
    ACTIONS(63), 1,
      sym_command_name,
    ACTIONS(80), 1,
      anon_sym_RBRACE,
    STATE(13), 2,
      sym__quote_balanced,
      aux_sym_token_repeat2,
    STATE(19), 2,
      sym_command,
      aux_sym__quote_balanced_repeat1,
  [200] = 6,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      sym_brace_word,
    ACTIONS(55), 1,
      sym_command_name,
    ACTIONS(82), 1,
      anon_sym_RBRACE,
    STATE(9), 2,
      sym__brace_balanced,
      aux_sym_token_repeat1,
    STATE(25), 2,
      sym_command,
      aux_sym__brace_balanced_repeat1,
  [221] = 6,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      sym_quote_word,
    ACTIONS(63), 1,
      sym_command_name,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    STATE(4), 2,
      sym__quote_balanced,
      aux_sym_token_repeat2,
    STATE(19), 2,
      sym_command,
      aux_sym__quote_balanced_repeat1,
  [242] = 6,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      sym_quote_word,
    ACTIONS(63), 1,
      sym_command_name,
    ACTIONS(86), 1,
      anon_sym_RBRACE,
    STATE(4), 2,
      sym__quote_balanced,
      aux_sym_token_repeat2,
    STATE(19), 2,
      sym_command,
      aux_sym__quote_balanced_repeat1,
  [263] = 6,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      sym_brace_word,
    ACTIONS(55), 1,
      sym_command_name,
    ACTIONS(88), 1,
      anon_sym_RBRACE,
    STATE(17), 2,
      sym__brace_balanced,
      aux_sym_token_repeat1,
    STATE(25), 2,
      sym_command,
      aux_sym__brace_balanced_repeat1,
  [284] = 6,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      sym_brace_word,
    ACTIONS(55), 1,
      sym_command_name,
    ACTIONS(90), 1,
      anon_sym_RBRACE,
    STATE(8), 2,
      sym__brace_balanced,
      aux_sym_token_repeat1,
    STATE(25), 2,
      sym_command,
      aux_sym__brace_balanced_repeat1,
  [305] = 6,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      sym_quote_word,
    ACTIONS(63), 1,
      sym_command_name,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    STATE(12), 2,
      sym__quote_balanced,
      aux_sym_token_repeat2,
    STATE(19), 2,
      sym_command,
      aux_sym__quote_balanced_repeat1,
  [326] = 6,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      sym_brace_word,
    ACTIONS(55), 1,
      sym_command_name,
    ACTIONS(84), 1,
      anon_sym_RBRACE,
    STATE(9), 2,
      sym__brace_balanced,
      aux_sym_token_repeat1,
    STATE(25), 2,
      sym_command,
      aux_sym__brace_balanced_repeat1,
  [347] = 4,
    ACTIONS(94), 1,
      sym_quote_word,
    ACTIONS(97), 1,
      sym_command_name,
    STATE(18), 2,
      sym_command,
      aux_sym__quote_balanced_repeat1,
    ACTIONS(92), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [363] = 4,
    ACTIONS(63), 1,
      sym_command_name,
    ACTIONS(102), 1,
      sym_quote_word,
    STATE(18), 2,
      sym_command,
      aux_sym__quote_balanced_repeat1,
    ACTIONS(100), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [379] = 5,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    STATE(36), 1,
      sym_token,
    STATE(71), 1,
      sym_value,
    ACTIONS(106), 2,
      sym_identifier,
      sym_number,
  [396] = 5,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    STATE(36), 1,
      sym_token,
    STATE(69), 1,
      sym_value,
    ACTIONS(106), 2,
      sym_identifier,
      sym_number,
  [413] = 2,
    ACTIONS(110), 2,
      ts_builtin_sym_end,
      sym_junk,
    ACTIONS(112), 4,
      sym_comment,
      sym_string_type,
      sym_preamble_type,
      sym_entry_type,
  [424] = 5,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    STATE(36), 1,
      sym_token,
    STATE(75), 1,
      sym_value,
    ACTIONS(106), 2,
      sym_identifier,
      sym_number,
  [441] = 2,
    ACTIONS(114), 2,
      ts_builtin_sym_end,
      sym_junk,
    ACTIONS(116), 4,
      sym_comment,
      sym_string_type,
      sym_preamble_type,
      sym_entry_type,
  [452] = 4,
    ACTIONS(55), 1,
      sym_command_name,
    ACTIONS(120), 1,
      sym_brace_word,
    ACTIONS(118), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    STATE(26), 2,
      sym_command,
      aux_sym__brace_balanced_repeat1,
  [467] = 4,
    ACTIONS(124), 1,
      sym_brace_word,
    ACTIONS(127), 1,
      sym_command_name,
    ACTIONS(122), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    STATE(26), 2,
      sym_command,
      aux_sym__brace_balanced_repeat1,
  [482] = 2,
    ACTIONS(130), 2,
      ts_builtin_sym_end,
      sym_junk,
    ACTIONS(132), 4,
      sym_comment,
      sym_string_type,
      sym_preamble_type,
      sym_entry_type,
  [493] = 2,
    ACTIONS(134), 2,
      ts_builtin_sym_end,
      sym_junk,
    ACTIONS(136), 4,
      sym_comment,
      sym_string_type,
      sym_preamble_type,
      sym_entry_type,
  [504] = 5,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    STATE(36), 1,
      sym_token,
    STATE(60), 1,
      sym_value,
    ACTIONS(106), 2,
      sym_identifier,
      sym_number,
  [521] = 2,
    ACTIONS(138), 2,
      ts_builtin_sym_end,
      sym_junk,
    ACTIONS(140), 4,
      sym_comment,
      sym_string_type,
      sym_preamble_type,
      sym_entry_type,
  [532] = 5,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    STATE(36), 1,
      sym_token,
    STATE(65), 1,
      sym_value,
    ACTIONS(106), 2,
      sym_identifier,
      sym_number,
  [549] = 3,
    ACTIONS(144), 1,
      anon_sym_POUND,
    STATE(32), 1,
      aux_sym_value_repeat1,
    ACTIONS(142), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [561] = 1,
    ACTIONS(147), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_quote_word,
      sym_command_name,
  [569] = 1,
    ACTIONS(149), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_quote_word,
      sym_command_name,
  [577] = 2,
    ACTIONS(151), 1,
      anon_sym_LBRACE,
    ACTIONS(153), 4,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_quote_word,
      sym_command_name,
  [587] = 3,
    ACTIONS(157), 1,
      anon_sym_POUND,
    STATE(40), 1,
      aux_sym_value_repeat1,
    ACTIONS(155), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [599] = 1,
    ACTIONS(159), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_quote_word,
      sym_command_name,
  [607] = 1,
    ACTIONS(161), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_quote_word,
      sym_command_name,
  [615] = 4,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    STATE(49), 1,
      sym_token,
    ACTIONS(106), 2,
      sym_identifier,
      sym_number,
  [629] = 3,
    ACTIONS(157), 1,
      anon_sym_POUND,
    STATE(32), 1,
      aux_sym_value_repeat1,
    ACTIONS(163), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [641] = 2,
    ACTIONS(165), 1,
      anon_sym_LBRACE,
    ACTIONS(153), 3,
      anon_sym_RBRACE,
      sym_brace_word,
      sym_command_name,
  [650] = 1,
    ACTIONS(167), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_POUND,
  [657] = 1,
    ACTIONS(169), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_brace_word,
      sym_command_name,
  [664] = 3,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    STATE(44), 1,
      aux_sym_entry_repeat1,
    ACTIONS(171), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [675] = 1,
    ACTIONS(176), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_POUND,
  [682] = 1,
    ACTIONS(147), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_brace_word,
      sym_command_name,
  [689] = 1,
    ACTIONS(149), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_brace_word,
      sym_command_name,
  [696] = 1,
    ACTIONS(178), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_brace_word,
      sym_command_name,
  [703] = 1,
    ACTIONS(142), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_POUND,
  [710] = 1,
    ACTIONS(180), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_POUND,
  [717] = 3,
    ACTIONS(182), 1,
      anon_sym_RBRACE,
    ACTIONS(184), 1,
      sym_identifier,
    STATE(55), 1,
      sym_field,
  [727] = 3,
    ACTIONS(182), 1,
      anon_sym_RBRACE,
    ACTIONS(186), 1,
      anon_sym_COMMA,
    STATE(44), 1,
      aux_sym_entry_repeat1,
  [737] = 3,
    ACTIONS(182), 1,
      anon_sym_RPAREN,
    ACTIONS(184), 1,
      sym_identifier,
    STATE(55), 1,
      sym_field,
  [747] = 3,
    ACTIONS(182), 1,
      anon_sym_RPAREN,
    ACTIONS(188), 1,
      anon_sym_COMMA,
    STATE(44), 1,
      aux_sym_entry_repeat1,
  [757] = 1,
    ACTIONS(190), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [763] = 3,
    ACTIONS(184), 1,
      sym_identifier,
    ACTIONS(192), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      sym_field,
  [773] = 3,
    ACTIONS(184), 1,
      sym_identifier,
    ACTIONS(192), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
      sym_field,
  [783] = 3,
    ACTIONS(194), 1,
      anon_sym_RPAREN,
    ACTIONS(196), 1,
      anon_sym_COMMA,
    STATE(54), 1,
      aux_sym_entry_repeat1,
  [793] = 3,
    ACTIONS(194), 1,
      anon_sym_RBRACE,
    ACTIONS(198), 1,
      anon_sym_COMMA,
    STATE(52), 1,
      aux_sym_entry_repeat1,
  [803] = 1,
    ACTIONS(200), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [809] = 2,
    ACTIONS(184), 1,
      sym_identifier,
    STATE(55), 1,
      sym_field,
  [816] = 2,
    ACTIONS(202), 1,
      anon_sym_LBRACE,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
  [823] = 2,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(208), 1,
      anon_sym_LPAREN,
  [830] = 2,
    ACTIONS(210), 1,
      anon_sym_LBRACE,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
  [837] = 1,
    ACTIONS(214), 1,
      anon_sym_RPAREN,
  [841] = 1,
    ACTIONS(216), 1,
      anon_sym_EQ,
  [845] = 1,
    ACTIONS(218), 1,
      anon_sym_EQ,
  [849] = 1,
    ACTIONS(220), 1,
      sym_key_paren,
  [853] = 1,
    ACTIONS(214), 1,
      anon_sym_RBRACE,
  [857] = 1,
    ACTIONS(222), 1,
      sym_key_brace,
  [861] = 1,
    ACTIONS(224), 1,
      anon_sym_RPAREN,
  [865] = 1,
    ACTIONS(226), 1,
      sym_identifier,
  [869] = 1,
    ACTIONS(228), 1,
      sym_identifier,
  [873] = 1,
    ACTIONS(230), 1,
      ts_builtin_sym_end,
  [877] = 1,
    ACTIONS(224), 1,
      anon_sym_RBRACE,
  [881] = 1,
    ACTIONS(232), 1,
      anon_sym_EQ,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 26,
  [SMALL_STATE(4)] = 52,
  [SMALL_STATE(5)] = 74,
  [SMALL_STATE(6)] = 95,
  [SMALL_STATE(7)] = 116,
  [SMALL_STATE(8)] = 137,
  [SMALL_STATE(9)] = 158,
  [SMALL_STATE(10)] = 179,
  [SMALL_STATE(11)] = 200,
  [SMALL_STATE(12)] = 221,
  [SMALL_STATE(13)] = 242,
  [SMALL_STATE(14)] = 263,
  [SMALL_STATE(15)] = 284,
  [SMALL_STATE(16)] = 305,
  [SMALL_STATE(17)] = 326,
  [SMALL_STATE(18)] = 347,
  [SMALL_STATE(19)] = 363,
  [SMALL_STATE(20)] = 379,
  [SMALL_STATE(21)] = 396,
  [SMALL_STATE(22)] = 413,
  [SMALL_STATE(23)] = 424,
  [SMALL_STATE(24)] = 441,
  [SMALL_STATE(25)] = 452,
  [SMALL_STATE(26)] = 467,
  [SMALL_STATE(27)] = 482,
  [SMALL_STATE(28)] = 493,
  [SMALL_STATE(29)] = 504,
  [SMALL_STATE(30)] = 521,
  [SMALL_STATE(31)] = 532,
  [SMALL_STATE(32)] = 549,
  [SMALL_STATE(33)] = 561,
  [SMALL_STATE(34)] = 569,
  [SMALL_STATE(35)] = 577,
  [SMALL_STATE(36)] = 587,
  [SMALL_STATE(37)] = 599,
  [SMALL_STATE(38)] = 607,
  [SMALL_STATE(39)] = 615,
  [SMALL_STATE(40)] = 629,
  [SMALL_STATE(41)] = 641,
  [SMALL_STATE(42)] = 650,
  [SMALL_STATE(43)] = 657,
  [SMALL_STATE(44)] = 664,
  [SMALL_STATE(45)] = 675,
  [SMALL_STATE(46)] = 682,
  [SMALL_STATE(47)] = 689,
  [SMALL_STATE(48)] = 696,
  [SMALL_STATE(49)] = 703,
  [SMALL_STATE(50)] = 710,
  [SMALL_STATE(51)] = 717,
  [SMALL_STATE(52)] = 727,
  [SMALL_STATE(53)] = 737,
  [SMALL_STATE(54)] = 747,
  [SMALL_STATE(55)] = 757,
  [SMALL_STATE(56)] = 763,
  [SMALL_STATE(57)] = 773,
  [SMALL_STATE(58)] = 783,
  [SMALL_STATE(59)] = 793,
  [SMALL_STATE(60)] = 803,
  [SMALL_STATE(61)] = 809,
  [SMALL_STATE(62)] = 816,
  [SMALL_STATE(63)] = 823,
  [SMALL_STATE(64)] = 830,
  [SMALL_STATE(65)] = 837,
  [SMALL_STATE(66)] = 841,
  [SMALL_STATE(67)] = 845,
  [SMALL_STATE(68)] = 849,
  [SMALL_STATE(69)] = 853,
  [SMALL_STATE(70)] = 857,
  [SMALL_STATE(71)] = 861,
  [SMALL_STATE(72)] = 865,
  [SMALL_STATE(73)] = 869,
  [SMALL_STATE(74)] = 873,
  [SMALL_STATE(75)] = 877,
  [SMALL_STATE(76)] = 881,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(64),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(62),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(63),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_token_repeat2, 2), SHIFT_REPEAT(15),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_token_repeat2, 2),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_token_repeat2, 2), SHIFT_REPEAT(19),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_token_repeat2, 2), SHIFT_REPEAT(35),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_token_repeat1, 2), SHIFT_REPEAT(5),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_token_repeat1, 2),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_token_repeat1, 2), SHIFT_REPEAT(25),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_token_repeat1, 2), SHIFT_REPEAT(41),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__quote_balanced_repeat1, 2),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__quote_balanced_repeat1, 2), SHIFT_REPEAT(18),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__quote_balanced_repeat1, 2), SHIFT_REPEAT(35),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quote_balanced, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 6, .production_id = 6),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 6, .production_id = 6),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 5, .production_id = 3),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 5, .production_id = 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__brace_balanced, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__brace_balanced_repeat1, 2),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__brace_balanced_repeat1, 2), SHIFT_REPEAT(26),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__brace_balanced_repeat1, 2), SHIFT_REPEAT(41),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preamble, 4, .production_id = 2),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preamble, 4, .production_id = 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 4, .production_id = 3),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 4, .production_id = 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 6, .production_id = 7),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 6, .production_id = 7),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(39),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4, .production_id = 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3, .production_id = 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1, .production_id = 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quote_balanced, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quote_balanced, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__brace_balanced, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entry_repeat1, 2, .production_id = 5),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entry_repeat1, 2, .production_id = 5), SHIFT_REPEAT(61),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__brace_balanced, 3),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entry_repeat1, 2, .production_id = 4),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 8),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [230] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
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
