#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 69
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 7

enum {
  sym_junk = 1,
  anon_sym_AT = 2,
  aux_sym_comment_token1 = 3,
  aux_sym_string_token1 = 4,
  anon_sym_LBRACE = 5,
  anon_sym_EQ = 6,
  anon_sym_RBRACE = 7,
  anon_sym_LPAREN = 8,
  anon_sym_RPAREN = 9,
  aux_sym_preamble_token1 = 10,
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
  sym_comment = 23,
  sym_string = 24,
  sym_preamble = 25,
  sym_entry = 26,
  sym_field = 27,
  sym_value = 28,
  sym_token = 29,
  sym__brace_balanced = 30,
  sym__quote_balanced = 31,
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
  [anon_sym_AT] = "@",
  [aux_sym_comment_token1] = "comment_token1",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_LBRACE] = "{",
  [anon_sym_EQ] = "=",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym_preamble_token1] = "preamble_token1",
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
  [sym_comment] = "comment",
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
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_preamble_token1] = aux_sym_preamble_token1,
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
  [sym_comment] = sym_comment,
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
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
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
  [aux_sym_preamble_token1] = {
    .visible = false,
    .named = false,
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
  [sym_comment] = {
    .visible = true,
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
    {field_ty, 1},
    {field_value, 3},
  [2] =
    {field_key, 3},
    {field_ty, 1},
  [4] =
    {field_field, 1},
  [5] =
    {field_field, 0, .inherited = true},
    {field_field, 1, .inherited = true},
  [7] =
    {field_name, 3},
    {field_ty, 1},
    {field_value, 5},
  [10] =
    {field_field, 4, .inherited = true},
    {field_key, 3},
    {field_ty, 1},
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
      if (eof) ADVANCE(24);
      if (lookahead == '"') ADVANCE(61);
      if (lookahead == '#') ADVANCE(60);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == ')') ADVANCE(35);
      if (lookahead == ',') ADVANCE(38);
      if (lookahead == '=') ADVANCE(32);
      if (lookahead == '@') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(67);
      if (lookahead == '{') ADVANCE(31);
      if (lookahead == '}') ADVANCE(33);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(18);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(19);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(61);
      if (lookahead == ')') ADVANCE(35);
      if (lookahead == '{') ADVANCE(31);
      if (lookahead == '}') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= '~')) ADVANCE(59);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(61);
      if (lookahead == '\\') ADVANCE(67);
      if (lookahead == '{') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(64);
      END_STATE();
    case 3:
      if (lookahead == '\\') ADVANCE(67);
      if (lookahead == '{') ADVANCE(31);
      if (lookahead == '}') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 4:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 5:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(12);
      END_STATE();
    case 6:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(54);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(55);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          (':' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(59);
      END_STATE();
    case 7:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(4);
      END_STATE();
    case 8:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 9:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 10:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(29);
      END_STATE();
    case 11:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(16);
      END_STATE();
    case 12:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(8);
      END_STATE();
    case 13:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(5);
      END_STATE();
    case 14:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(9);
      END_STATE();
    case 16:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 17:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 18:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 19:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(7);
      END_STATE();
    case 20:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 21:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(27);
      END_STATE();
    case 22:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(20);
      END_STATE();
    case 23:
      if (eof) ADVANCE(24);
      if (lookahead == '@') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_junk);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(59);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(59);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_preamble_token1);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_preamble_token1);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(59);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_key_brace);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '}') ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_key_paren);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(49);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(59);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(48);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(59);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(41);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(59);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(37);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(59);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(53);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(59);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(30);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(59);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(52);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(59);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(44);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(59);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(42);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(59);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(51);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(59);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(45);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(59);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(46);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(59);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(57);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(59);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(50);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(59);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(43);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(59);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(47);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(59);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(28);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(59);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(56);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_quote_word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_command);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_command);
      if (lookahead == '*') ADVANCE(65);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_command);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(65);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 23},
  [2] = {.lex_state = 23},
  [3] = {.lex_state = 23},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 23},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 23},
  [45] = {.lex_state = 23},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 23},
  [48] = {.lex_state = 23},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 23},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 40},
  [65] = {.lex_state = 39},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(1),
    [aux_sym_string_token1] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_preamble_token1] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_command] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(66),
    [sym__command_or_entry] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_string] = STATE(2),
    [sym_preamble] = STATE(2),
    [sym_entry] = STATE(2),
    [aux_sym_document_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_junk] = ACTIONS(5),
    [anon_sym_AT] = ACTIONS(7),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(7), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      sym_junk,
    STATE(3), 6,
      sym__command_or_entry,
      sym_comment,
      sym_string,
      sym_preamble,
      sym_entry,
      aux_sym_document_repeat1,
  [18] = 4,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      sym_junk,
    ACTIONS(18), 1,
      anon_sym_AT,
    STATE(3), 6,
      sym__command_or_entry,
      sym_comment,
      sym_string,
      sym_preamble,
      sym_entry,
      aux_sym_document_repeat1,
  [36] = 5,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(24), 1,
      anon_sym_DQUOTE,
    STATE(19), 1,
      aux_sym__quote_balanced_repeat1,
    ACTIONS(26), 2,
      sym_quote_word,
      sym_command,
    STATE(4), 2,
      sym__quote_balanced,
      aux_sym_token_repeat2,
  [54] = 5,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    STATE(25), 1,
      aux_sym__brace_balanced_repeat1,
    ACTIONS(33), 2,
      sym_brace_word,
      sym_command,
    STATE(6), 2,
      sym__brace_balanced,
      aux_sym_token_repeat1,
  [72] = 5,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(38), 1,
      anon_sym_RBRACE,
    STATE(25), 1,
      aux_sym__brace_balanced_repeat1,
    ACTIONS(40), 2,
      sym_brace_word,
      sym_command,
    STATE(6), 2,
      sym__brace_balanced,
      aux_sym_token_repeat1,
  [90] = 5,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    STATE(25), 1,
      aux_sym__brace_balanced_repeat1,
    ACTIONS(33), 2,
      sym_brace_word,
      sym_command,
    STATE(6), 2,
      sym__brace_balanced,
      aux_sym_token_repeat1,
  [108] = 5,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(19), 1,
      aux_sym__quote_balanced_repeat1,
    ACTIONS(49), 2,
      sym_quote_word,
      sym_command,
    STATE(12), 2,
      sym__quote_balanced,
      aux_sym_token_repeat2,
  [126] = 5,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    STATE(25), 1,
      aux_sym__brace_balanced_repeat1,
    ACTIONS(33), 2,
      sym_brace_word,
      sym_command,
    STATE(7), 2,
      sym__brace_balanced,
      aux_sym_token_repeat1,
  [144] = 5,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    STATE(25), 1,
      aux_sym__brace_balanced_repeat1,
    ACTIONS(33), 2,
      sym_brace_word,
      sym_command,
    STATE(5), 2,
      sym__brace_balanced,
      aux_sym_token_repeat1,
  [162] = 5,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    STATE(25), 1,
      aux_sym__brace_balanced_repeat1,
    ACTIONS(33), 2,
      sym_brace_word,
      sym_command,
    STATE(6), 2,
      sym__brace_balanced,
      aux_sym_token_repeat1,
  [180] = 5,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    STATE(19), 1,
      aux_sym__quote_balanced_repeat1,
    ACTIONS(49), 2,
      sym_quote_word,
      sym_command,
    STATE(4), 2,
      sym__quote_balanced,
      aux_sym_token_repeat2,
  [198] = 5,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    STATE(25), 1,
      aux_sym__brace_balanced_repeat1,
    ACTIONS(33), 2,
      sym_brace_word,
      sym_command,
    STATE(11), 2,
      sym__brace_balanced,
      aux_sym_token_repeat1,
  [216] = 5,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    STATE(23), 1,
      sym_token,
    STATE(68), 1,
      sym_value,
    ACTIONS(59), 2,
      sym_identifier,
      sym_number,
  [233] = 5,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    STATE(23), 1,
      sym_token,
    STATE(43), 1,
      sym_value,
    ACTIONS(59), 2,
      sym_identifier,
      sym_number,
  [250] = 5,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    STATE(23), 1,
      sym_token,
    STATE(67), 1,
      sym_value,
    ACTIONS(59), 2,
      sym_identifier,
      sym_number,
  [267] = 5,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    STATE(23), 1,
      sym_token,
    STATE(58), 1,
      sym_value,
    ACTIONS(59), 2,
      sym_identifier,
      sym_number,
  [284] = 5,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    STATE(23), 1,
      sym_token,
    STATE(57), 1,
      sym_value,
    ACTIONS(59), 2,
      sym_identifier,
      sym_number,
  [301] = 3,
    STATE(22), 1,
      aux_sym__quote_balanced_repeat1,
    ACTIONS(63), 2,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
    ACTIONS(65), 2,
      sym_quote_word,
      sym_command,
  [313] = 3,
    ACTIONS(69), 1,
      anon_sym_POUND,
    STATE(21), 1,
      aux_sym_value_repeat1,
    ACTIONS(67), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [325] = 3,
    ACTIONS(73), 1,
      anon_sym_POUND,
    STATE(21), 1,
      aux_sym_value_repeat1,
    ACTIONS(71), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [337] = 3,
    STATE(22), 1,
      aux_sym__quote_balanced_repeat1,
    ACTIONS(76), 2,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
    ACTIONS(78), 2,
      sym_quote_word,
      sym_command,
  [349] = 3,
    ACTIONS(69), 1,
      anon_sym_POUND,
    STATE(20), 1,
      aux_sym_value_repeat1,
    ACTIONS(81), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [361] = 3,
    STATE(24), 1,
      aux_sym__brace_balanced_repeat1,
    ACTIONS(83), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(85), 2,
      sym_brace_word,
      sym_command,
  [373] = 3,
    STATE(24), 1,
      aux_sym__brace_balanced_repeat1,
    ACTIONS(88), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(90), 2,
      sym_brace_word,
      sym_command,
  [385] = 4,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    STATE(30), 1,
      sym_token,
    ACTIONS(59), 2,
      sym_identifier,
      sym_number,
  [399] = 1,
    ACTIONS(92), 4,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      sym_quote_word,
      sym_command,
  [406] = 1,
    ACTIONS(94), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_brace_word,
      sym_command,
  [413] = 3,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    STATE(29), 1,
      aux_sym_entry_repeat1,
    ACTIONS(96), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [424] = 1,
    ACTIONS(71), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_POUND,
  [431] = 1,
    ACTIONS(101), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_POUND,
  [438] = 1,
    ACTIONS(103), 4,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      sym_quote_word,
      sym_command,
  [445] = 1,
    ACTIONS(105), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_POUND,
  [452] = 1,
    ACTIONS(107), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_POUND,
  [459] = 4,
    ACTIONS(109), 1,
      aux_sym_comment_token1,
    ACTIONS(111), 1,
      aux_sym_string_token1,
    ACTIONS(113), 1,
      aux_sym_preamble_token1,
    ACTIONS(115), 1,
      sym_identifier,
  [472] = 1,
    ACTIONS(117), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_brace_word,
      sym_command,
  [479] = 1,
    ACTIONS(119), 3,
      ts_builtin_sym_end,
      sym_junk,
      anon_sym_AT,
  [485] = 3,
    ACTIONS(121), 1,
      anon_sym_RBRACE,
    ACTIONS(123), 1,
      sym_identifier,
    STATE(51), 1,
      sym_field,
  [495] = 3,
    ACTIONS(123), 1,
      sym_identifier,
    ACTIONS(125), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      sym_field,
  [505] = 3,
    ACTIONS(125), 1,
      anon_sym_RBRACE,
    ACTIONS(127), 1,
      anon_sym_COMMA,
    STATE(29), 1,
      aux_sym_entry_repeat1,
  [515] = 3,
    ACTIONS(123), 1,
      sym_identifier,
    ACTIONS(125), 1,
      anon_sym_RPAREN,
    STATE(51), 1,
      sym_field,
  [525] = 3,
    ACTIONS(125), 1,
      anon_sym_RPAREN,
    ACTIONS(129), 1,
      anon_sym_COMMA,
    STATE(29), 1,
      aux_sym_entry_repeat1,
  [535] = 1,
    ACTIONS(131), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [541] = 1,
    ACTIONS(133), 3,
      ts_builtin_sym_end,
      sym_junk,
      anon_sym_AT,
  [547] = 1,
    ACTIONS(135), 3,
      ts_builtin_sym_end,
      sym_junk,
      anon_sym_AT,
  [553] = 3,
    ACTIONS(121), 1,
      anon_sym_RPAREN,
    ACTIONS(123), 1,
      sym_identifier,
    STATE(51), 1,
      sym_field,
  [563] = 1,
    ACTIONS(137), 3,
      ts_builtin_sym_end,
      sym_junk,
      anon_sym_AT,
  [569] = 1,
    ACTIONS(139), 3,
      ts_builtin_sym_end,
      sym_junk,
      anon_sym_AT,
  [575] = 3,
    ACTIONS(141), 1,
      anon_sym_RPAREN,
    ACTIONS(143), 1,
      anon_sym_COMMA,
    STATE(42), 1,
      aux_sym_entry_repeat1,
  [585] = 3,
    ACTIONS(141), 1,
      anon_sym_RBRACE,
    ACTIONS(145), 1,
      anon_sym_COMMA,
    STATE(40), 1,
      aux_sym_entry_repeat1,
  [595] = 1,
    ACTIONS(147), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [601] = 1,
    ACTIONS(149), 3,
      ts_builtin_sym_end,
      sym_junk,
      anon_sym_AT,
  [607] = 2,
    ACTIONS(151), 1,
      anon_sym_LBRACE,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
  [614] = 2,
    ACTIONS(155), 1,
      anon_sym_LBRACE,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
  [621] = 2,
    ACTIONS(159), 1,
      anon_sym_LBRACE,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
  [628] = 2,
    ACTIONS(123), 1,
      sym_identifier,
    STATE(51), 1,
      sym_field,
  [635] = 1,
    ACTIONS(163), 1,
      anon_sym_RPAREN,
  [639] = 1,
    ACTIONS(163), 1,
      anon_sym_RBRACE,
  [643] = 1,
    ACTIONS(165), 1,
      anon_sym_EQ,
  [647] = 1,
    ACTIONS(167), 1,
      sym_identifier,
  [651] = 1,
    ACTIONS(169), 1,
      anon_sym_EQ,
  [655] = 1,
    ACTIONS(171), 1,
      anon_sym_EQ,
  [659] = 1,
    ACTIONS(173), 1,
      sym_identifier,
  [663] = 1,
    ACTIONS(175), 1,
      sym_key_paren,
  [667] = 1,
    ACTIONS(177), 1,
      sym_key_brace,
  [671] = 1,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
  [675] = 1,
    ACTIONS(181), 1,
      anon_sym_RPAREN,
  [679] = 1,
    ACTIONS(181), 1,
      anon_sym_RBRACE,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 18,
  [SMALL_STATE(4)] = 36,
  [SMALL_STATE(5)] = 54,
  [SMALL_STATE(6)] = 72,
  [SMALL_STATE(7)] = 90,
  [SMALL_STATE(8)] = 108,
  [SMALL_STATE(9)] = 126,
  [SMALL_STATE(10)] = 144,
  [SMALL_STATE(11)] = 162,
  [SMALL_STATE(12)] = 180,
  [SMALL_STATE(13)] = 198,
  [SMALL_STATE(14)] = 216,
  [SMALL_STATE(15)] = 233,
  [SMALL_STATE(16)] = 250,
  [SMALL_STATE(17)] = 267,
  [SMALL_STATE(18)] = 284,
  [SMALL_STATE(19)] = 301,
  [SMALL_STATE(20)] = 313,
  [SMALL_STATE(21)] = 325,
  [SMALL_STATE(22)] = 337,
  [SMALL_STATE(23)] = 349,
  [SMALL_STATE(24)] = 361,
  [SMALL_STATE(25)] = 373,
  [SMALL_STATE(26)] = 385,
  [SMALL_STATE(27)] = 399,
  [SMALL_STATE(28)] = 406,
  [SMALL_STATE(29)] = 413,
  [SMALL_STATE(30)] = 424,
  [SMALL_STATE(31)] = 431,
  [SMALL_STATE(32)] = 438,
  [SMALL_STATE(33)] = 445,
  [SMALL_STATE(34)] = 452,
  [SMALL_STATE(35)] = 459,
  [SMALL_STATE(36)] = 472,
  [SMALL_STATE(37)] = 479,
  [SMALL_STATE(38)] = 485,
  [SMALL_STATE(39)] = 495,
  [SMALL_STATE(40)] = 505,
  [SMALL_STATE(41)] = 515,
  [SMALL_STATE(42)] = 525,
  [SMALL_STATE(43)] = 535,
  [SMALL_STATE(44)] = 541,
  [SMALL_STATE(45)] = 547,
  [SMALL_STATE(46)] = 553,
  [SMALL_STATE(47)] = 563,
  [SMALL_STATE(48)] = 569,
  [SMALL_STATE(49)] = 575,
  [SMALL_STATE(50)] = 585,
  [SMALL_STATE(51)] = 595,
  [SMALL_STATE(52)] = 601,
  [SMALL_STATE(53)] = 607,
  [SMALL_STATE(54)] = 614,
  [SMALL_STATE(55)] = 621,
  [SMALL_STATE(56)] = 628,
  [SMALL_STATE(57)] = 635,
  [SMALL_STATE(58)] = 639,
  [SMALL_STATE(59)] = 643,
  [SMALL_STATE(60)] = 647,
  [SMALL_STATE(61)] = 651,
  [SMALL_STATE(62)] = 655,
  [SMALL_STATE(63)] = 659,
  [SMALL_STATE(64)] = 663,
  [SMALL_STATE(65)] = 667,
  [SMALL_STATE(66)] = 671,
  [SMALL_STATE(67)] = 675,
  [SMALL_STATE(68)] = 679,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(35),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_token_repeat2, 2), SHIFT_REPEAT(10),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_token_repeat2, 2),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_token_repeat2, 2), SHIFT_REPEAT(19),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_token_repeat1, 2), SHIFT_REPEAT(9),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_token_repeat1, 2),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_token_repeat1, 2), SHIFT_REPEAT(25),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quote_balanced, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(26),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__quote_balanced_repeat1, 2),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__quote_balanced_repeat1, 2), SHIFT_REPEAT(22),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__brace_balanced_repeat1, 2),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__brace_balanced_repeat1, 2), SHIFT_REPEAT(24),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__brace_balanced, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quote_balanced, 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__brace_balanced, 3),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entry_repeat1, 2, .production_id = 4),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entry_repeat1, 2, .production_id = 4), SHIFT_REPEAT(56),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quote_balanced, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token, 2),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__brace_balanced, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 6, .production_id = 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 7),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 7, .production_id = 6),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 7, .production_id = 5),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preamble, 5, .production_id = 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 5, .production_id = 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entry_repeat1, 2, .production_id = 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [179] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
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
