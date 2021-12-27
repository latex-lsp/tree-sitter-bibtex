#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 194
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 52
#define ALIAS_COUNT 0
#define TOKEN_COUNT 29
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 11

enum {
  anon_sym_POUND = 1,
  sym_integer = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  anon_sym_DQUOTE = 5,
  anon_sym_LBRACK = 6,
  anon_sym_LPAREN = 7,
  anon_sym_RBRACK = 8,
  anon_sym_RPAREN = 9,
  sym_command_name = 10,
  sym__curly_word = 11,
  sym__quote_word = 12,
  anon_sym_DOLLAR = 13,
  anon_sym_BSLASH_LPAREN = 14,
  anon_sym_BSLASH_RPAREN = 15,
  anon_sym_DOLLAR_DOLLAR = 16,
  anon_sym_BSLASH_LBRACK = 17,
  anon_sym_BSLASH_RBRACK = 18,
  sym__preamble_type = 19,
  anon_sym_AT = 20,
  sym__string_type = 21,
  sym__comment_type = 22,
  anon_sym_COMMA = 23,
  sym__key_curly = 24,
  sym__key_paren = 25,
  anon_sym_EQ = 26,
  sym_identifier = 27,
  sym_junk = 28,
  sym_source_file = 29,
  sym_value = 30,
  sym_curly_group = 31,
  sym_quote_group = 32,
  sym_mixed_group = 33,
  sym_command = 34,
  sym__curly_content = 35,
  sym__quote_content = 36,
  sym_inline_formula = 37,
  sym_displayed_equation = 38,
  sym_preamble = 39,
  sym_string = 40,
  sym_comment = 41,
  sym_entry = 42,
  sym_field = 43,
  sym__assignment = 44,
  sym__object = 45,
  aux_sym_source_file_repeat1 = 46,
  aux_sym_value_repeat1 = 47,
  aux_sym_curly_group_repeat1 = 48,
  aux_sym_quote_group_repeat1 = 49,
  aux_sym_command_repeat1 = 50,
  aux_sym_entry_repeat1 = 51,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_POUND] = "#",
  [sym_integer] = "integer",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_LBRACK] = "[",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RBRACK] = "]",
  [anon_sym_RPAREN] = ")",
  [sym_command_name] = "command_name",
  [sym__curly_word] = "word",
  [sym__quote_word] = "identifier",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_BSLASH_LPAREN] = "command_name",
  [anon_sym_BSLASH_RPAREN] = "command_name",
  [anon_sym_DOLLAR_DOLLAR] = "$$",
  [anon_sym_BSLASH_LBRACK] = "command_name",
  [anon_sym_BSLASH_RBRACK] = "command_name",
  [sym__preamble_type] = "entry_type",
  [anon_sym_AT] = "@",
  [sym__string_type] = "entry_type",
  [sym__comment_type] = "entry_type",
  [anon_sym_COMMA] = ",",
  [sym__key_curly] = "key",
  [sym__key_paren] = "key",
  [anon_sym_EQ] = "=",
  [sym_identifier] = "identifier",
  [sym_junk] = "junk",
  [sym_source_file] = "source_file",
  [sym_value] = "value",
  [sym_curly_group] = "curly_group",
  [sym_quote_group] = "quote_group",
  [sym_mixed_group] = "mixed_group",
  [sym_command] = "command",
  [sym__curly_content] = "_curly_content",
  [sym__quote_content] = "_quote_content",
  [sym_inline_formula] = "inline_formula",
  [sym_displayed_equation] = "displayed_equation",
  [sym_preamble] = "preamble",
  [sym_string] = "string",
  [sym_comment] = "comment",
  [sym_entry] = "entry",
  [sym_field] = "field",
  [sym__assignment] = "_assignment",
  [sym__object] = "_object",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_value_repeat1] = "value_repeat1",
  [aux_sym_curly_group_repeat1] = "curly_group_repeat1",
  [aux_sym_quote_group_repeat1] = "quote_group_repeat1",
  [aux_sym_command_repeat1] = "command_repeat1",
  [aux_sym_entry_repeat1] = "entry_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_POUND] = anon_sym_POUND,
  [sym_integer] = sym_integer,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_command_name] = sym_command_name,
  [sym__curly_word] = sym__curly_word,
  [sym__quote_word] = sym_identifier,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_BSLASH_LPAREN] = sym_command_name,
  [anon_sym_BSLASH_RPAREN] = sym_command_name,
  [anon_sym_DOLLAR_DOLLAR] = anon_sym_DOLLAR_DOLLAR,
  [anon_sym_BSLASH_LBRACK] = sym_command_name,
  [anon_sym_BSLASH_RBRACK] = sym_command_name,
  [sym__preamble_type] = sym__preamble_type,
  [anon_sym_AT] = anon_sym_AT,
  [sym__string_type] = sym__preamble_type,
  [sym__comment_type] = sym__preamble_type,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym__key_curly] = sym__key_curly,
  [sym__key_paren] = sym__key_curly,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_identifier] = sym_identifier,
  [sym_junk] = sym_junk,
  [sym_source_file] = sym_source_file,
  [sym_value] = sym_value,
  [sym_curly_group] = sym_curly_group,
  [sym_quote_group] = sym_quote_group,
  [sym_mixed_group] = sym_mixed_group,
  [sym_command] = sym_command,
  [sym__curly_content] = sym__curly_content,
  [sym__quote_content] = sym__quote_content,
  [sym_inline_formula] = sym_inline_formula,
  [sym_displayed_equation] = sym_displayed_equation,
  [sym_preamble] = sym_preamble,
  [sym_string] = sym_string,
  [sym_comment] = sym_comment,
  [sym_entry] = sym_entry,
  [sym_field] = sym_field,
  [sym__assignment] = sym__assignment,
  [sym__object] = sym__object,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_value_repeat1] = aux_sym_value_repeat1,
  [aux_sym_curly_group_repeat1] = aux_sym_curly_group_repeat1,
  [aux_sym_quote_group_repeat1] = aux_sym_quote_group_repeat1,
  [aux_sym_command_repeat1] = aux_sym_command_repeat1,
  [aux_sym_entry_repeat1] = aux_sym_entry_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_command_name] = {
    .visible = true,
    .named = true,
  },
  [sym__curly_word] = {
    .visible = true,
    .named = true,
  },
  [sym__quote_word] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_LPAREN] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_RPAREN] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_LBRACK] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_RBRACK] = {
    .visible = true,
    .named = true,
  },
  [sym__preamble_type] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [sym__string_type] = {
    .visible = true,
    .named = true,
  },
  [sym__comment_type] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym__key_curly] = {
    .visible = true,
    .named = true,
  },
  [sym__key_paren] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_junk] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_curly_group] = {
    .visible = true,
    .named = true,
  },
  [sym_quote_group] = {
    .visible = true,
    .named = true,
  },
  [sym_mixed_group] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym__curly_content] = {
    .visible = false,
    .named = true,
  },
  [sym__quote_content] = {
    .visible = false,
    .named = true,
  },
  [sym_inline_formula] = {
    .visible = true,
    .named = true,
  },
  [sym_displayed_equation] = {
    .visible = true,
    .named = true,
  },
  [sym_preamble] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
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
  [sym__assignment] = {
    .visible = false,
    .named = true,
  },
  [sym__object] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_curly_group_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quote_group_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_entry_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_at = 1,
  field_command_name = 2,
  field_entry_type = 3,
  field_eq = 4,
  field_field = 5,
  field_key = 6,
  field_value = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_at] = "at",
  [field_command_name] = "command_name",
  [field_entry_type] = "entry_type",
  [field_eq] = "eq",
  [field_field] = "field",
  [field_key] = "key",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 5},
  [5] = {.index = 8, .length = 3},
  [6] = {.index = 11, .length = 3},
  [7] = {.index = 14, .length = 1},
  [8] = {.index = 15, .length = 3},
  [9] = {.index = 18, .length = 4},
  [10] = {.index = 22, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_at, 0},
    {field_entry_type, 1},
  [2] =
    {field_command_name, 0},
  [3] =
    {field_at, 0},
    {field_entry_type, 1},
    {field_eq, 3, .inherited = true},
    {field_key, 3, .inherited = true},
    {field_value, 3, .inherited = true},
  [8] =
    {field_eq, 1},
    {field_key, 0},
    {field_value, 2},
  [11] =
    {field_at, 0},
    {field_entry_type, 1},
    {field_key, 3},
  [14] =
    {field_field, 0},
  [15] =
    {field_eq, 0, .inherited = true},
    {field_key, 0, .inherited = true},
    {field_value, 0, .inherited = true},
  [18] =
    {field_at, 0},
    {field_entry_type, 1},
    {field_field, 5, .inherited = true},
    {field_key, 3},
  [22] =
    {field_field, 0, .inherited = true},
    {field_field, 1, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [3] = {
    [0] = sym__curly_word,
  },
  [6] = {
    [1] = sym__preamble_type,
  },
  [9] = {
    [1] = sym__preamble_type,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < '('
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '"'
        ? c == ' '
        : c <= '#')))
    : (c <= ')' || (c < '\\'
      ? (c < '='
        ? c == ','
        : c <= '=')
      : (c <= '\\' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(38);
      if (lookahead == '"') ADVANCE(44);
      if (lookahead == '#') ADVANCE(39);
      if (lookahead == '$') ADVANCE(75);
      if (lookahead == '(') ADVANCE(49);
      if (lookahead == ')') ADVANCE(54);
      if (lookahead == ',') ADVANCE(98);
      if (lookahead == '=') ADVANCE(101);
      if (lookahead == '@') ADVANCE(93);
      if (lookahead == '[') ADVANCE(46);
      if (lookahead == '\\') ADVANCE(61);
      if (lookahead == ']') ADVANCE(52);
      if (lookahead == '{') ADVANCE(42);
      if (lookahead == '}') ADVANCE(43);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(32);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(33);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(44);
      if (lookahead == '$') ADVANCE(75);
      if (lookahead == '(') ADVANCE(50);
      if (lookahead == '[') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(66);
      if (lookahead == '{') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(74);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(44);
      if (lookahead == '$') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(66);
      if (lookahead == '{') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(74);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(44);
      if (lookahead == '{') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '}') ADVANCE(74);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(45);
      if (lookahead == '$') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead == '{') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(72);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(45);
      if (lookahead == '$') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(60);
      if (lookahead == '{') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(72);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(39);
      if (lookahead == ')') ADVANCE(54);
      if (lookahead == ',') ADVANCE(98);
      if (lookahead == '}') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(120);
      END_STATE();
    case 7:
      if (lookahead == '$') ADVANCE(75);
      if (lookahead == '(') ADVANCE(51);
      if (lookahead == ')') ADVANCE(55);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == '\\') ADVANCE(65);
      if (lookahead == ']') ADVANCE(53);
      if (lookahead == '{') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(73);
      END_STATE();
    case 8:
      if (lookahead == '$') ADVANCE(75);
      if (lookahead == '(') ADVANCE(51);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == '\\') ADVANCE(64);
      if (lookahead == '{') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(73);
      END_STATE();
    case 9:
      if (lookahead == '$') ADVANCE(75);
      if (lookahead == '(') ADVANCE(51);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == '\\') ADVANCE(63);
      if (lookahead == '{') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(73);
      END_STATE();
    case 10:
      if (lookahead == '$') ADVANCE(75);
      if (lookahead == '(') ADVANCE(51);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == '\\') ADVANCE(65);
      if (lookahead == '{') ADVANCE(42);
      if (lookahead == '}') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 11:
      if (lookahead == '$') ADVANCE(75);
      if (lookahead == ')') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(64);
      if (lookahead == ']') ADVANCE(53);
      if (lookahead == '{') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(73);
      END_STATE();
    case 12:
      if (lookahead == '$') ADVANCE(75);
      if (lookahead == ')') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(63);
      if (lookahead == ']') ADVANCE(53);
      if (lookahead == '{') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(73);
      END_STATE();
    case 13:
      if (lookahead == '$') ADVANCE(75);
      if (lookahead == ')') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(65);
      if (lookahead == ']') ADVANCE(53);
      if (lookahead == '{') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(73);
      END_STATE();
    case 14:
      if (lookahead == '$') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(64);
      if (lookahead == '{') ADVANCE(42);
      if (lookahead == '}') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 15:
      if (lookahead == '$') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(63);
      if (lookahead == '{') ADVANCE(42);
      if (lookahead == '}') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 16:
      if (lookahead == '$') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(65);
      if (lookahead == '{') ADVANCE(42);
      if (lookahead == '}') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 17:
      if (lookahead == '$') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(62);
      if (lookahead == '{') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(73);
      END_STATE();
    case 18:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 19:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(26);
      END_STATE();
    case 20:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(115);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(116);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(120);
      END_STATE();
    case 21:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 22:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 23:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 24:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(94);
      END_STATE();
    case 25:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 26:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 27:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(19);
      END_STATE();
    case 28:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(23);
      END_STATE();
    case 30:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 31:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 32:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 33:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 34:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 35:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(96);
      END_STATE();
    case 36:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(34);
      END_STATE();
    case 37:
      if (eof) ADVANCE(38);
      if (lookahead == '@') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (lookahead != 0) ADVANCE(121);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(74);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(73);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(74);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(73);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(74);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(73);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(73);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(73);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_command_name);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == '"') ADVANCE(73);
      if (lookahead == '*') ADVANCE(58);
      if (lookahead == ':' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(72);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == '"') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(72);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == '"') ADVANCE(71);
      if (lookahead == '(') ADVANCE(77);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == '[') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(56);
      if (lookahead == ':' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(58);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == '"') ADVANCE(71);
      if (lookahead == '(') ADVANCE(77);
      if (lookahead == '[') ADVANCE(85);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(56);
      if (lookahead == ':' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(58);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == '(') ADVANCE(76);
      if (lookahead == ')') ADVANCE(80);
      if (lookahead == '[') ADVANCE(84);
      if (lookahead == ']') ADVANCE(88);
      if (lookahead == ':' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(56);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == '(') ADVANCE(79);
      if (lookahead == ')') ADVANCE(82);
      if (lookahead == '[') ADVANCE(87);
      if (lookahead == ']') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(56);
      if (lookahead == ':' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(71);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == '(') ADVANCE(79);
      if (lookahead == ')') ADVANCE(82);
      if (lookahead == '[') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(56);
      if (lookahead == ':' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(71);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == '(') ADVANCE(79);
      if (lookahead == '[') ADVANCE(87);
      if (lookahead == ']') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(56);
      if (lookahead == ':' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(71);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == '(') ADVANCE(79);
      if (lookahead == '[') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(56);
      if (lookahead == ':' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(71);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == '(') ADVANCE(78);
      if (lookahead == '[') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(56);
      if (lookahead == ':' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(70);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == '*') ADVANCE(56);
      if (lookahead == ':' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == '*') ADVANCE(71);
      if (lookahead == ':' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(73);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == '*') ADVANCE(70);
      if (lookahead == ':' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(74);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(74);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(73);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__curly_word);
      if (lookahead == '"') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__curly_word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__quote_word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '$') ADVANCE(83);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_BSLASH_LPAREN);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_BSLASH_LPAREN);
      if (lookahead == '"') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(72);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_BSLASH_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(74);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_BSLASH_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(73);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_BSLASH_RPAREN);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_BSLASH_RPAREN);
      if (lookahead == '"') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(72);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_BSLASH_RPAREN);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(73);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_BSLASH_LBRACK);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_BSLASH_LBRACK);
      if (lookahead == '"') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(72);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_BSLASH_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(74);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_BSLASH_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(73);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_BSLASH_RBRACK);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_BSLASH_RBRACK);
      if (lookahead == '"') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(72);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_BSLASH_RBRACK);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(73);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__preamble_type);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__preamble_type);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(120);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__string_type);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__string_type);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(120);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__comment_type);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__comment_type);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(120);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__key_curly);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '}') ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__key_paren);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',') ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(110);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(120);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(109);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(120);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(102);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(120);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(92);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(120);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(114);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(120);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(95);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(120);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(113);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(120);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(105);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(120);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(103);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(120);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(112);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(120);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(106);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(120);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(107);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(120);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(118);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(120);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(111);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(120);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(104);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(120);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(108);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(120);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(97);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(120);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(117);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(120);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_junk);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '@') ADVANCE(121);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 37},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 11},
  [4] = {.lex_state = 12},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 11},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 12},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 13},
  [11] = {.lex_state = 17},
  [12] = {.lex_state = 17},
  [13] = {.lex_state = 13},
  [14] = {.lex_state = 13},
  [15] = {.lex_state = 17},
  [16] = {.lex_state = 14},
  [17] = {.lex_state = 13},
  [18] = {.lex_state = 15},
  [19] = {.lex_state = 13},
  [20] = {.lex_state = 17},
  [21] = {.lex_state = 13},
  [22] = {.lex_state = 14},
  [23] = {.lex_state = 13},
  [24] = {.lex_state = 13},
  [25] = {.lex_state = 15},
  [26] = {.lex_state = 13},
  [27] = {.lex_state = 13},
  [28] = {.lex_state = 13},
  [29] = {.lex_state = 15},
  [30] = {.lex_state = 16},
  [31] = {.lex_state = 14},
  [32] = {.lex_state = 15},
  [33] = {.lex_state = 16},
  [34] = {.lex_state = 14},
  [35] = {.lex_state = 14},
  [36] = {.lex_state = 15},
  [37] = {.lex_state = 14},
  [38] = {.lex_state = 16},
  [39] = {.lex_state = 15},
  [40] = {.lex_state = 16},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 14},
  [43] = {.lex_state = 15},
  [44] = {.lex_state = 16},
  [45] = {.lex_state = 14},
  [46] = {.lex_state = 15},
  [47] = {.lex_state = 16},
  [48] = {.lex_state = 16},
  [49] = {.lex_state = 15},
  [50] = {.lex_state = 16},
  [51] = {.lex_state = 14},
  [52] = {.lex_state = 14},
  [53] = {.lex_state = 15},
  [54] = {.lex_state = 16},
  [55] = {.lex_state = 15},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 16},
  [58] = {.lex_state = 14},
  [59] = {.lex_state = 15},
  [60] = {.lex_state = 16},
  [61] = {.lex_state = 16},
  [62] = {.lex_state = 15},
  [63] = {.lex_state = 14},
  [64] = {.lex_state = 16},
  [65] = {.lex_state = 16},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 14},
  [68] = {.lex_state = 16},
  [69] = {.lex_state = 15},
  [70] = {.lex_state = 14},
  [71] = {.lex_state = 7},
  [72] = {.lex_state = 16},
  [73] = {.lex_state = 16},
  [74] = {.lex_state = 16},
  [75] = {.lex_state = 7},
  [76] = {.lex_state = 16},
  [77] = {.lex_state = 16},
  [78] = {.lex_state = 16},
  [79] = {.lex_state = 7},
  [80] = {.lex_state = 16},
  [81] = {.lex_state = 14},
  [82] = {.lex_state = 16},
  [83] = {.lex_state = 15},
  [84] = {.lex_state = 8},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 10},
  [89] = {.lex_state = 8},
  [90] = {.lex_state = 9},
  [91] = {.lex_state = 9},
  [92] = {.lex_state = 8},
  [93] = {.lex_state = 10},
  [94] = {.lex_state = 10},
  [95] = {.lex_state = 9},
  [96] = {.lex_state = 7},
  [97] = {.lex_state = 7},
  [98] = {.lex_state = 7},
  [99] = {.lex_state = 7},
  [100] = {.lex_state = 9},
  [101] = {.lex_state = 8},
  [102] = {.lex_state = 9},
  [103] = {.lex_state = 8},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 10},
  [106] = {.lex_state = 9},
  [107] = {.lex_state = 10},
  [108] = {.lex_state = 8},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 8},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 10},
  [114] = {.lex_state = 10},
  [115] = {.lex_state = 9},
  [116] = {.lex_state = 13},
  [117] = {.lex_state = 13},
  [118] = {.lex_state = 13},
  [119] = {.lex_state = 13},
  [120] = {.lex_state = 13},
  [121] = {.lex_state = 37},
  [122] = {.lex_state = 37},
  [123] = {.lex_state = 13},
  [124] = {.lex_state = 2},
  [125] = {.lex_state = 15},
  [126] = {.lex_state = 2},
  [127] = {.lex_state = 14},
  [128] = {.lex_state = 14},
  [129] = {.lex_state = 2},
  [130] = {.lex_state = 2},
  [131] = {.lex_state = 14},
  [132] = {.lex_state = 16},
  [133] = {.lex_state = 14},
  [134] = {.lex_state = 15},
  [135] = {.lex_state = 2},
  [136] = {.lex_state = 2},
  [137] = {.lex_state = 16},
  [138] = {.lex_state = 15},
  [139] = {.lex_state = 2},
  [140] = {.lex_state = 16},
  [141] = {.lex_state = 15},
  [142] = {.lex_state = 15},
  [143] = {.lex_state = 16},
  [144] = {.lex_state = 14},
  [145] = {.lex_state = 14},
  [146] = {.lex_state = 16},
  [147] = {.lex_state = 16},
  [148] = {.lex_state = 15},
  [149] = {.lex_state = 3},
  [150] = {.lex_state = 3},
  [151] = {.lex_state = 3},
  [152] = {.lex_state = 6},
  [153] = {.lex_state = 6},
  [154] = {.lex_state = 6},
  [155] = {.lex_state = 6},
  [156] = {.lex_state = 3},
  [157] = {.lex_state = 6},
  [158] = {.lex_state = 6},
  [159] = {.lex_state = 6},
  [160] = {.lex_state = 6},
  [161] = {.lex_state = 6},
  [162] = {.lex_state = 6},
  [163] = {.lex_state = 6},
  [164] = {.lex_state = 6},
  [165] = {.lex_state = 6},
  [166] = {.lex_state = 6},
  [167] = {.lex_state = 6},
  [168] = {.lex_state = 20},
  [169] = {.lex_state = 37},
  [170] = {.lex_state = 37},
  [171] = {.lex_state = 37},
  [172] = {.lex_state = 37},
  [173] = {.lex_state = 6},
  [174] = {.lex_state = 37},
  [175] = {.lex_state = 6},
  [176] = {.lex_state = 37},
  [177] = {.lex_state = 37},
  [178] = {.lex_state = 37},
  [179] = {.lex_state = 6},
  [180] = {.lex_state = 6},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 100},
  [185] = {.lex_state = 99},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_command_name] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_BSLASH_LPAREN] = ACTIONS(1),
    [anon_sym_BSLASH_RPAREN] = ACTIONS(1),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(1),
    [anon_sym_BSLASH_LBRACK] = ACTIONS(1),
    [anon_sym_BSLASH_RBRACK] = ACTIONS(1),
    [sym__preamble_type] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [sym__string_type] = ACTIONS(1),
    [sym__comment_type] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(193),
    [sym_preamble] = STATE(172),
    [sym_string] = STATE(172),
    [sym_comment] = STATE(172),
    [sym_entry] = STATE(172),
    [sym__object] = STATE(122),
    [aux_sym_source_file_repeat1] = STATE(122),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_AT] = ACTIONS(5),
    [sym_junk] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(13), 1,
      sym__curly_word,
    ACTIONS(15), 1,
      anon_sym_BSLASH_RPAREN,
    ACTIONS(9), 2,
      anon_sym_LBRACE,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(11), 6,
      anon_sym_DQUOTE,
      sym_command_name,
      sym__quote_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_LBRACK,
    STATE(43), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
  [27] = 4,
    ACTIONS(21), 1,
      anon_sym_BSLASH_RBRACK,
    ACTIONS(17), 2,
      anon_sym_LBRACE,
      anon_sym_DOLLAR_DOLLAR,
    STATE(31), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
    ACTIONS(19), 7,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_command_name,
      sym__curly_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_LBRACK,
  [52] = 4,
    ACTIONS(15), 1,
      anon_sym_BSLASH_RPAREN,
    ACTIONS(23), 2,
      anon_sym_LBRACE,
      anon_sym_DOLLAR_DOLLAR,
    STATE(43), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
    ACTIONS(25), 7,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_command_name,
      sym__curly_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_LBRACK,
  [77] = 5,
    ACTIONS(21), 1,
      anon_sym_BSLASH_RBRACK,
    ACTIONS(27), 1,
      sym__curly_word,
    ACTIONS(17), 2,
      anon_sym_LBRACE,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(19), 6,
      anon_sym_DQUOTE,
      sym_command_name,
      sym__quote_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_LBRACK,
    STATE(31), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
  [104] = 4,
    ACTIONS(21), 1,
      anon_sym_BSLASH_RBRACK,
    ACTIONS(29), 2,
      anon_sym_LBRACE,
      anon_sym_DOLLAR_DOLLAR,
    STATE(31), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
    ACTIONS(31), 7,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_command_name,
      sym__curly_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_LBRACK,
  [129] = 5,
    ACTIONS(13), 1,
      sym__curly_word,
    ACTIONS(15), 1,
      anon_sym_BSLASH_RPAREN,
    ACTIONS(23), 2,
      anon_sym_LBRACE,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(25), 6,
      anon_sym_DQUOTE,
      sym_command_name,
      sym__quote_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_LBRACK,
    STATE(43), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
  [156] = 4,
    ACTIONS(15), 1,
      anon_sym_BSLASH_RPAREN,
    ACTIONS(9), 2,
      anon_sym_LBRACE,
      anon_sym_DOLLAR_DOLLAR,
    STATE(43), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
    ACTIONS(11), 7,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_command_name,
      sym__curly_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_LBRACK,
  [181] = 5,
    ACTIONS(21), 1,
      anon_sym_BSLASH_RBRACK,
    ACTIONS(27), 1,
      sym__curly_word,
    ACTIONS(29), 2,
      anon_sym_LBRACE,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(31), 6,
      anon_sym_DQUOTE,
      sym_command_name,
      sym__quote_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_LBRACK,
    STATE(31), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
  [208] = 8,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      sym_command_name,
    ACTIONS(39), 1,
      sym__curly_word,
    ACTIONS(43), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(45), 1,
      anon_sym_BSLASH_LBRACK,
    ACTIONS(35), 2,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
    ACTIONS(41), 2,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
    STATE(13), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
  [240] = 4,
    ACTIONS(21), 1,
      anon_sym_BSLASH_RBRACK,
    ACTIONS(17), 2,
      anon_sym_LBRACE,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(19), 6,
      sym_command_name,
      sym__curly_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_BSLASH_LBRACK,
    STATE(31), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
  [264] = 4,
    ACTIONS(15), 1,
      anon_sym_BSLASH_RPAREN,
    ACTIONS(23), 2,
      anon_sym_LBRACE,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(25), 6,
      sym_command_name,
      sym__curly_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
    STATE(43), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
  [288] = 8,
    ACTIONS(47), 1,
      anon_sym_LBRACE,
    ACTIONS(52), 1,
      sym_command_name,
    ACTIONS(55), 1,
      sym__curly_word,
    ACTIONS(61), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(64), 1,
      anon_sym_BSLASH_LBRACK,
    ACTIONS(50), 2,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
    ACTIONS(58), 2,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
    STATE(13), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
  [320] = 8,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      sym_command_name,
    ACTIONS(39), 1,
      sym__curly_word,
    ACTIONS(43), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(45), 1,
      anon_sym_BSLASH_LBRACK,
    ACTIONS(41), 2,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(67), 2,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
    STATE(13), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
  [352] = 4,
    ACTIONS(15), 1,
      anon_sym_BSLASH_RPAREN,
    ACTIONS(9), 2,
      anon_sym_LBRACE,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(11), 6,
      sym_command_name,
      sym__curly_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
    STATE(43), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
  [376] = 4,
    ACTIONS(21), 1,
      anon_sym_BSLASH_RBRACK,
    ACTIONS(17), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(19), 5,
      sym_command_name,
      sym__curly_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_LBRACK,
    STATE(31), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
  [400] = 8,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      sym_command_name,
    ACTIONS(43), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(45), 1,
      anon_sym_BSLASH_LBRACK,
    ACTIONS(71), 1,
      sym__curly_word,
    ACTIONS(41), 2,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(69), 2,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
    STATE(10), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
  [432] = 4,
    ACTIONS(15), 1,
      anon_sym_BSLASH_RPAREN,
    ACTIONS(23), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(25), 5,
      sym_command_name,
      sym__curly_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_LBRACK,
    STATE(43), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
  [456] = 8,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      sym_command_name,
    ACTIONS(39), 1,
      sym__curly_word,
    ACTIONS(43), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(45), 1,
      anon_sym_BSLASH_LBRACK,
    ACTIONS(41), 2,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(73), 2,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
    STATE(13), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
  [488] = 4,
    ACTIONS(21), 1,
      anon_sym_BSLASH_RBRACK,
    ACTIONS(29), 2,
      anon_sym_LBRACE,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(31), 6,
      sym_command_name,
      sym__curly_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_BSLASH_LBRACK,
    STATE(31), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
  [512] = 8,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      sym_command_name,
    ACTIONS(43), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(45), 1,
      anon_sym_BSLASH_LBRACK,
    ACTIONS(77), 1,
      sym__curly_word,
    ACTIONS(41), 2,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(75), 2,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
    STATE(14), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
  [544] = 4,
    ACTIONS(21), 1,
      anon_sym_BSLASH_RBRACK,
    ACTIONS(29), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(31), 5,
      sym_command_name,
      sym__curly_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_LBRACK,
    STATE(31), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
  [568] = 8,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      sym_command_name,
    ACTIONS(43), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(45), 1,
      anon_sym_BSLASH_LBRACK,
    ACTIONS(81), 1,
      sym__curly_word,
    ACTIONS(41), 2,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(79), 2,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
    STATE(26), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
  [600] = 8,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      sym_command_name,
    ACTIONS(39), 1,
      sym__curly_word,
    ACTIONS(43), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(45), 1,
      anon_sym_BSLASH_LBRACK,
    ACTIONS(41), 2,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(83), 2,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
    STATE(13), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
  [632] = 4,
    ACTIONS(15), 1,
      anon_sym_BSLASH_RPAREN,
    ACTIONS(9), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(11), 5,
      sym_command_name,
      sym__curly_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_LBRACK,
    STATE(43), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
  [656] = 8,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      sym_command_name,
    ACTIONS(39), 1,
      sym__curly_word,
    ACTIONS(43), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(45), 1,
      anon_sym_BSLASH_LBRACK,
    ACTIONS(41), 2,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(85), 2,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
    STATE(13), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
  [688] = 8,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      sym_command_name,
    ACTIONS(43), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(45), 1,
      anon_sym_BSLASH_LBRACK,
    ACTIONS(89), 1,
      sym__curly_word,
    ACTIONS(41), 2,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(87), 2,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
    STATE(24), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
  [720] = 8,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      sym_command_name,
    ACTIONS(43), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(45), 1,
      anon_sym_BSLASH_LBRACK,
    ACTIONS(93), 1,
      sym__curly_word,
    ACTIONS(41), 2,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(91), 2,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
    STATE(19), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
  [752] = 9,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(97), 1,
      sym_command_name,
    ACTIONS(99), 1,
      sym__curly_word,
    ACTIONS(101), 1,
      anon_sym_DOLLAR,
    ACTIONS(103), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(105), 1,
      anon_sym_BSLASH_RPAREN,
    ACTIONS(107), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(109), 1,
      anon_sym_BSLASH_LBRACK,
    STATE(83), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
  [785] = 8,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
    ACTIONS(113), 1,
      anon_sym_RBRACE,
    ACTIONS(115), 1,
      sym_command_name,
    ACTIONS(117), 1,
      sym__curly_word,
    ACTIONS(121), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LBRACK,
    ACTIONS(119), 2,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
    STATE(54), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
  [816] = 8,
    ACTIONS(125), 1,
      anon_sym_LBRACE,
    ACTIONS(127), 1,
      sym_command_name,
    ACTIONS(129), 1,
      sym__curly_word,
    ACTIONS(133), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LBRACK,
    ACTIONS(137), 1,
      anon_sym_BSLASH_RBRACK,
    ACTIONS(131), 2,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
    STATE(35), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
  [847] = 9,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(97), 1,
      sym_command_name,
    ACTIONS(99), 1,
      sym__curly_word,
    ACTIONS(103), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(107), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(109), 1,
      anon_sym_BSLASH_LBRACK,
    ACTIONS(139), 1,
      anon_sym_DOLLAR,
    ACTIONS(141), 1,
      anon_sym_BSLASH_RPAREN,
    STATE(83), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
  [880] = 8,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
    ACTIONS(115), 1,
      sym_command_name,
    ACTIONS(117), 1,
      sym__curly_word,
    ACTIONS(121), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LBRACK,
    ACTIONS(143), 1,
      anon_sym_RBRACE,
    ACTIONS(119), 2,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
    STATE(54), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
  [911] = 8,
    ACTIONS(21), 1,
      anon_sym_BSLASH_RBRACK,
    ACTIONS(27), 1,
      sym__curly_word,
    ACTIONS(125), 1,
      anon_sym_LBRACE,
    ACTIONS(127), 1,
      sym_command_name,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LBRACK,
    ACTIONS(145), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(131), 2,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
    STATE(31), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
  [942] = 8,
    ACTIONS(50), 1,
      anon_sym_BSLASH_RBRACK,
    ACTIONS(147), 1,
      anon_sym_LBRACE,
    ACTIONS(150), 1,
      sym_command_name,
    ACTIONS(153), 1,
      sym__curly_word,
    ACTIONS(159), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(162), 1,
      anon_sym_BSLASH_LBRACK,
    ACTIONS(156), 2,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
    STATE(35), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
  [973] = 9,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(97), 1,
      sym_command_name,
    ACTIONS(103), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(107), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(109), 1,
      anon_sym_BSLASH_LBRACK,
    ACTIONS(165), 1,
      sym__curly_word,
    ACTIONS(167), 1,
      anon_sym_DOLLAR,
    ACTIONS(169), 1,
      anon_sym_BSLASH_RPAREN,
    STATE(29), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
  [1006] = 8,
    ACTIONS(125), 1,
      anon_sym_LBRACE,
    ACTIONS(127), 1,
      sym_command_name,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LBRACK,
    ACTIONS(171), 1,
      sym__curly_word,
    ACTIONS(173), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(175), 1,
      anon_sym_BSLASH_RBRACK,
    ACTIONS(131), 2,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
    STATE(52), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
  [1037] = 8,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
    ACTIONS(115), 1,
      sym_command_name,
    ACTIONS(117), 1,
      sym__curly_word,
    ACTIONS(121), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LBRACK,
    ACTIONS(177), 1,
      anon_sym_RBRACE,
    ACTIONS(119), 2,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
    STATE(54), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
  [1068] = 9,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(97), 1,
      sym_command_name,
    ACTIONS(103), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(107), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(109), 1,
      anon_sym_BSLASH_LBRACK,
    ACTIONS(179), 1,
      sym__curly_word,
    ACTIONS(181), 1,
      anon_sym_DOLLAR,
    ACTIONS(183), 1,
      anon_sym_BSLASH_RPAREN,
    STATE(32), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
  [1101] = 8,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
    ACTIONS(115), 1,
      sym_command_name,
    ACTIONS(121), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LBRACK,
    ACTIONS(185), 1,
      anon_sym_RBRACE,
    ACTIONS(187), 1,
      sym__curly_word,
    ACTIONS(119), 2,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
    STATE(33), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
  [1132] = 8,
    ACTIONS(189), 1,
      anon_sym_LBRACE,
    ACTIONS(191), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      sym_command_name,
    ACTIONS(195), 1,
      sym__quote_word,
    ACTIONS(199), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(201), 1,
      anon_sym_BSLASH_LBRACK,
    ACTIONS(197), 2,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
    STATE(56), 6,
      sym_curly_group,
      sym_command,
      sym__quote_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_quote_group_repeat1,
  [1163] = 8,
    ACTIONS(125), 1,
      anon_sym_LBRACE,
    ACTIONS(127), 1,
      sym_command_name,
    ACTIONS(129), 1,
      sym__curly_word,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LBRACK,
    ACTIONS(203), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(205), 1,
      anon_sym_BSLASH_RBRACK,
    ACTIONS(131), 2,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
    STATE(35), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
  [1194] = 9,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(97), 1,
      sym_command_name,
    ACTIONS(99), 1,
      sym__curly_word,
    ACTIONS(103), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(107), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(109), 1,
      anon_sym_BSLASH_LBRACK,
    ACTIONS(207), 1,
      anon_sym_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_BSLASH_RPAREN,
    STATE(83), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
  [1227] = 8,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
    ACTIONS(115), 1,
      sym_command_name,
    ACTIONS(117), 1,
      sym__curly_word,
    ACTIONS(121), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LBRACK,
    ACTIONS(211), 1,
      anon_sym_RBRACE,
    ACTIONS(119), 2,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
    STATE(54), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
  [1258] = 8,
    ACTIONS(125), 1,
      anon_sym_LBRACE,
    ACTIONS(127), 1,
      sym_command_name,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LBRACK,
    ACTIONS(213), 1,
      sym__curly_word,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(217), 1,
      anon_sym_BSLASH_RBRACK,
    ACTIONS(131), 2,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
    STATE(42), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
  [1289] = 9,
    ACTIONS(13), 1,
      sym__curly_word,
    ACTIONS(15), 1,
      anon_sym_BSLASH_RPAREN,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(97), 1,
      sym_command_name,
    ACTIONS(103), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(107), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(109), 1,
      anon_sym_BSLASH_LBRACK,
    ACTIONS(219), 1,
      anon_sym_DOLLAR,
    STATE(43), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
  [1322] = 8,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
    ACTIONS(115), 1,
      sym_command_name,
    ACTIONS(121), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LBRACK,
    ACTIONS(221), 1,
      anon_sym_RBRACE,
    ACTIONS(223), 1,
      sym__curly_word,
    ACTIONS(119), 2,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
    STATE(44), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
  [1353] = 8,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
    ACTIONS(115), 1,
      sym_command_name,
    ACTIONS(121), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LBRACK,
    ACTIONS(225), 1,
      anon_sym_RBRACE,
    ACTIONS(227), 1,
      sym__curly_word,
    ACTIONS(119), 2,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
    STATE(50), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
  [1384] = 3,
    ACTIONS(23), 2,
      anon_sym_LBRACE,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(25), 6,
      sym_command_name,
      sym__curly_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_BSLASH_LBRACK,
    STATE(43), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
  [1405] = 8,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
    ACTIONS(115), 1,
      sym_command_name,
    ACTIONS(117), 1,
      sym__curly_word,
    ACTIONS(121), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LBRACK,
    ACTIONS(229), 1,
      anon_sym_RBRACE,
    ACTIONS(119), 2,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
    STATE(54), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
  [1436] = 8,
    ACTIONS(125), 1,
      anon_sym_LBRACE,
    ACTIONS(127), 1,
      sym_command_name,
    ACTIONS(129), 1,
      sym__curly_word,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LBRACK,
    ACTIONS(231), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(233), 1,
      anon_sym_BSLASH_RBRACK,
    ACTIONS(131), 2,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
    STATE(35), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
  [1467] = 8,
    ACTIONS(125), 1,
      anon_sym_LBRACE,
    ACTIONS(127), 1,
      sym_command_name,
    ACTIONS(129), 1,
      sym__curly_word,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LBRACK,
    ACTIONS(235), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(237), 1,
      anon_sym_BSLASH_RBRACK,
    ACTIONS(131), 2,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
    STATE(35), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
  [1498] = 9,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(97), 1,
      sym_command_name,
    ACTIONS(99), 1,
      sym__curly_word,
    ACTIONS(103), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(107), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(109), 1,
      anon_sym_BSLASH_LBRACK,
    ACTIONS(239), 1,
      anon_sym_DOLLAR,
    ACTIONS(241), 1,
      anon_sym_BSLASH_RPAREN,
    STATE(83), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
  [1531] = 8,
    ACTIONS(243), 1,
      anon_sym_LBRACE,
    ACTIONS(246), 1,
      anon_sym_RBRACE,
    ACTIONS(248), 1,
      sym_command_name,
    ACTIONS(251), 1,
      sym__curly_word,
    ACTIONS(257), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(260), 1,
      anon_sym_BSLASH_LBRACK,
    ACTIONS(254), 2,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
    STATE(54), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
  [1562] = 9,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(97), 1,
      sym_command_name,
    ACTIONS(103), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(107), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(109), 1,
      anon_sym_BSLASH_LBRACK,
    ACTIONS(263), 1,
      sym__curly_word,
    ACTIONS(265), 1,
      anon_sym_DOLLAR,
    ACTIONS(267), 1,
      anon_sym_BSLASH_RPAREN,
    STATE(69), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
  [1595] = 8,
    ACTIONS(269), 1,
      anon_sym_LBRACE,
    ACTIONS(272), 1,
      anon_sym_DQUOTE,
    ACTIONS(274), 1,
      sym_command_name,
    ACTIONS(277), 1,
      sym__quote_word,
    ACTIONS(283), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(286), 1,
      anon_sym_BSLASH_LBRACK,
    ACTIONS(280), 2,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
    STATE(56), 6,
      sym_curly_group,
      sym_command,
      sym__quote_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_quote_group_repeat1,
  [1626] = 8,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
    ACTIONS(115), 1,
      sym_command_name,
    ACTIONS(117), 1,
      sym__curly_word,
    ACTIONS(121), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LBRACK,
    ACTIONS(289), 1,
      anon_sym_RBRACE,
    ACTIONS(119), 2,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
    STATE(54), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
  [1657] = 8,
    ACTIONS(125), 1,
      anon_sym_LBRACE,
    ACTIONS(127), 1,
      sym_command_name,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LBRACK,
    ACTIONS(291), 1,
      sym__curly_word,
    ACTIONS(293), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(295), 1,
      anon_sym_BSLASH_RBRACK,
    ACTIONS(131), 2,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
    STATE(51), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
  [1688] = 9,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(97), 1,
      sym_command_name,
    ACTIONS(103), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(107), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(109), 1,
      anon_sym_BSLASH_LBRACK,
    ACTIONS(297), 1,
      sym__curly_word,
    ACTIONS(299), 1,
      anon_sym_DOLLAR,
    ACTIONS(301), 1,
      anon_sym_BSLASH_RPAREN,
    STATE(53), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
  [1721] = 8,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
    ACTIONS(115), 1,
      sym_command_name,
    ACTIONS(121), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LBRACK,
    ACTIONS(303), 1,
      anon_sym_RBRACE,
    ACTIONS(305), 1,
      sym__curly_word,
    ACTIONS(119), 2,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
    STATE(57), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
  [1752] = 8,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
    ACTIONS(115), 1,
      sym_command_name,
    ACTIONS(117), 1,
      sym__curly_word,
    ACTIONS(121), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LBRACK,
    ACTIONS(307), 1,
      anon_sym_RBRACE,
    ACTIONS(119), 2,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
    STATE(54), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
  [1783] = 3,
    ACTIONS(9), 2,
      anon_sym_LBRACE,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(11), 6,
      sym_command_name,
      sym__curly_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_BSLASH_LBRACK,
    STATE(43), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
  [1804] = 8,
    ACTIONS(125), 1,
      anon_sym_LBRACE,
    ACTIONS(127), 1,
      sym_command_name,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LBRACK,
    ACTIONS(309), 1,
      sym__curly_word,
    ACTIONS(311), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(313), 1,
      anon_sym_BSLASH_RBRACK,
    ACTIONS(131), 2,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
    STATE(70), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
  [1835] = 8,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
    ACTIONS(115), 1,
      sym_command_name,
    ACTIONS(121), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LBRACK,
    ACTIONS(315), 1,
      anon_sym_RBRACE,
    ACTIONS(317), 1,
      sym__curly_word,
    ACTIONS(119), 2,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
    STATE(30), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
  [1866] = 8,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
    ACTIONS(115), 1,
      sym_command_name,
    ACTIONS(121), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LBRACK,
    ACTIONS(319), 1,
      anon_sym_RBRACE,
    ACTIONS(321), 1,
      sym__curly_word,
    ACTIONS(119), 2,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
    STATE(61), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
  [1897] = 8,
    ACTIONS(189), 1,
      anon_sym_LBRACE,
    ACTIONS(193), 1,
      sym_command_name,
    ACTIONS(195), 1,
      sym__quote_word,
    ACTIONS(199), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(201), 1,
      anon_sym_BSLASH_LBRACK,
    ACTIONS(323), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 2,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
    STATE(41), 6,
      sym_curly_group,
      sym_command,
      sym__quote_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_quote_group_repeat1,
  [1928] = 3,
    ACTIONS(29), 2,
      anon_sym_LBRACE,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(31), 6,
      sym_command_name,
      sym__curly_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
    STATE(31), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
  [1949] = 8,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
    ACTIONS(115), 1,
      sym_command_name,
    ACTIONS(121), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LBRACK,
    ACTIONS(325), 1,
      anon_sym_RBRACE,
    ACTIONS(327), 1,
      sym__curly_word,
    ACTIONS(119), 2,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
    STATE(38), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
  [1980] = 9,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(97), 1,
      sym_command_name,
    ACTIONS(99), 1,
      sym__curly_word,
    ACTIONS(103), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(107), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(109), 1,
      anon_sym_BSLASH_LBRACK,
    ACTIONS(329), 1,
      anon_sym_DOLLAR,
    ACTIONS(331), 1,
      anon_sym_BSLASH_RPAREN,
    STATE(83), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
  [2013] = 8,
    ACTIONS(125), 1,
      anon_sym_LBRACE,
    ACTIONS(127), 1,
      sym_command_name,
    ACTIONS(129), 1,
      sym__curly_word,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LBRACK,
    ACTIONS(333), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(335), 1,
      anon_sym_BSLASH_RBRACK,
    ACTIONS(131), 2,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
    STATE(35), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
  [2044] = 5,
    ACTIONS(337), 1,
      anon_sym_LBRACE,
    ACTIONS(345), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(340), 2,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
    STATE(71), 3,
      sym_curly_group,
      sym_mixed_group,
      aux_sym_command_repeat1,
    ACTIONS(343), 7,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_command_name,
      sym__curly_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_LBRACK,
  [2069] = 8,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
    ACTIONS(115), 1,
      sym_command_name,
    ACTIONS(117), 1,
      sym__curly_word,
    ACTIONS(121), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LBRACK,
    ACTIONS(347), 1,
      anon_sym_RBRACE,
    ACTIONS(119), 2,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
    STATE(54), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
  [2100] = 8,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
    ACTIONS(115), 1,
      sym_command_name,
    ACTIONS(121), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LBRACK,
    ACTIONS(349), 1,
      anon_sym_RBRACE,
    ACTIONS(351), 1,
      sym__curly_word,
    ACTIONS(119), 2,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
    STATE(74), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
  [2131] = 8,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
    ACTIONS(115), 1,
      sym_command_name,
    ACTIONS(117), 1,
      sym__curly_word,
    ACTIONS(121), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LBRACK,
    ACTIONS(353), 1,
      anon_sym_RBRACE,
    ACTIONS(119), 2,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
    STATE(54), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
  [2162] = 5,
    ACTIONS(355), 1,
      anon_sym_LBRACE,
    ACTIONS(361), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(357), 2,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
    STATE(71), 3,
      sym_curly_group,
      sym_mixed_group,
      aux_sym_command_repeat1,
    ACTIONS(359), 7,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_command_name,
      sym__curly_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_LBRACK,
  [2187] = 8,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
    ACTIONS(115), 1,
      sym_command_name,
    ACTIONS(121), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LBRACK,
    ACTIONS(363), 1,
      anon_sym_RBRACE,
    ACTIONS(365), 1,
      sym__curly_word,
    ACTIONS(119), 2,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
    STATE(72), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
  [2218] = 8,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
    ACTIONS(115), 1,
      sym_command_name,
    ACTIONS(117), 1,
      sym__curly_word,
    ACTIONS(121), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LBRACK,
    ACTIONS(367), 1,
      anon_sym_RBRACE,
    ACTIONS(119), 2,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
    STATE(54), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
  [2249] = 8,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
    ACTIONS(115), 1,
      sym_command_name,
    ACTIONS(121), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LBRACK,
    ACTIONS(369), 1,
      anon_sym_RBRACE,
    ACTIONS(371), 1,
      sym__curly_word,
    ACTIONS(119), 2,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
    STATE(80), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
  [2280] = 5,
    ACTIONS(355), 1,
      anon_sym_LBRACE,
    ACTIONS(375), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(357), 2,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
    STATE(75), 3,
      sym_curly_group,
      sym_mixed_group,
      aux_sym_command_repeat1,
    ACTIONS(373), 7,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_command_name,
      sym__curly_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_LBRACK,
  [2305] = 8,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
    ACTIONS(115), 1,
      sym_command_name,
    ACTIONS(117), 1,
      sym__curly_word,
    ACTIONS(121), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LBRACK,
    ACTIONS(377), 1,
      anon_sym_RBRACE,
    ACTIONS(119), 2,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
    STATE(54), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
  [2336] = 3,
    ACTIONS(17), 2,
      anon_sym_LBRACE,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(19), 6,
      sym_command_name,
      sym__curly_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
    STATE(31), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
  [2357] = 8,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
    ACTIONS(115), 1,
      sym_command_name,
    ACTIONS(121), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LBRACK,
    ACTIONS(379), 1,
      anon_sym_RBRACE,
    ACTIONS(381), 1,
      sym__curly_word,
    ACTIONS(119), 2,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
    STATE(77), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
  [2388] = 8,
    ACTIONS(50), 1,
      anon_sym_BSLASH_RPAREN,
    ACTIONS(383), 1,
      anon_sym_LBRACE,
    ACTIONS(386), 1,
      sym_command_name,
    ACTIONS(389), 1,
      sym__curly_word,
    ACTIONS(395), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(398), 1,
      anon_sym_BSLASH_LBRACK,
    ACTIONS(392), 2,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
    STATE(83), 6,
      sym_curly_group,
      sym_command,
      sym__curly_content,
      sym_inline_formula,
      sym_displayed_equation,
      aux_sym_curly_group_repeat1,
  [2419] = 5,
    ACTIONS(345), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(401), 1,
      anon_sym_LBRACE,
    ACTIONS(404), 2,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
    STATE(84), 3,
      sym_curly_group,
      sym_mixed_group,
      aux_sym_command_repeat1,
    ACTIONS(343), 6,
      sym_command_name,
      sym__curly_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
  [2443] = 5,
    ACTIONS(407), 1,
      anon_sym_LBRACE,
    ACTIONS(345), 2,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(410), 2,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
    STATE(85), 3,
      sym_curly_group,
      sym_mixed_group,
      aux_sym_command_repeat1,
    ACTIONS(343), 5,
      sym_command_name,
      sym__quote_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_LBRACK,
  [2467] = 5,
    ACTIONS(413), 1,
      anon_sym_LBRACE,
    ACTIONS(361), 2,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(415), 2,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
    STATE(85), 3,
      sym_curly_group,
      sym_mixed_group,
      aux_sym_command_repeat1,
    ACTIONS(359), 5,
      sym_command_name,
      sym__quote_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_LBRACK,
  [2491] = 5,
    ACTIONS(413), 1,
      anon_sym_LBRACE,
    ACTIONS(375), 2,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(415), 2,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
    STATE(86), 3,
      sym_curly_group,
      sym_mixed_group,
      aux_sym_command_repeat1,
    ACTIONS(373), 5,
      sym_command_name,
      sym__quote_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_LBRACK,
  [2515] = 5,
    ACTIONS(417), 1,
      anon_sym_LBRACE,
    ACTIONS(345), 2,
      anon_sym_RBRACE,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(420), 2,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
    STATE(88), 3,
      sym_curly_group,
      sym_mixed_group,
      aux_sym_command_repeat1,
    ACTIONS(343), 5,
      sym_command_name,
      sym__curly_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_LBRACK,
  [2539] = 5,
    ACTIONS(361), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(423), 1,
      anon_sym_LBRACE,
    ACTIONS(425), 2,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
    STATE(84), 3,
      sym_curly_group,
      sym_mixed_group,
      aux_sym_command_repeat1,
    ACTIONS(359), 6,
      sym_command_name,
      sym__curly_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
  [2563] = 5,
    ACTIONS(375), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(427), 1,
      anon_sym_LBRACE,
    ACTIONS(429), 2,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
    STATE(91), 3,
      sym_curly_group,
      sym_mixed_group,
      aux_sym_command_repeat1,
    ACTIONS(373), 6,
      sym_command_name,
      sym__curly_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_BSLASH_LBRACK,
  [2587] = 5,
    ACTIONS(361), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(427), 1,
      anon_sym_LBRACE,
    ACTIONS(429), 2,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
    STATE(95), 3,
      sym_curly_group,
      sym_mixed_group,
      aux_sym_command_repeat1,
    ACTIONS(359), 6,
      sym_command_name,
      sym__curly_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_BSLASH_LBRACK,
  [2611] = 5,
    ACTIONS(375), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(423), 1,
      anon_sym_LBRACE,
    ACTIONS(425), 2,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
    STATE(89), 3,
      sym_curly_group,
      sym_mixed_group,
      aux_sym_command_repeat1,
    ACTIONS(373), 6,
      sym_command_name,
      sym__curly_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
  [2635] = 5,
    ACTIONS(431), 1,
      anon_sym_LBRACE,
    ACTIONS(361), 2,
      anon_sym_RBRACE,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(433), 2,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
    STATE(88), 3,
      sym_curly_group,
      sym_mixed_group,
      aux_sym_command_repeat1,
    ACTIONS(359), 5,
      sym_command_name,
      sym__curly_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_LBRACK,
  [2659] = 5,
    ACTIONS(431), 1,
      anon_sym_LBRACE,
    ACTIONS(375), 2,
      anon_sym_RBRACE,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(433), 2,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
    STATE(93), 3,
      sym_curly_group,
      sym_mixed_group,
      aux_sym_command_repeat1,
    ACTIONS(373), 5,
      sym_command_name,
      sym__curly_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_LBRACK,
  [2683] = 5,
    ACTIONS(345), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(435), 1,
      anon_sym_LBRACE,
    ACTIONS(438), 2,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
    STATE(95), 3,
      sym_curly_group,
      sym_mixed_group,
      aux_sym_command_repeat1,
    ACTIONS(343), 6,
      sym_command_name,
      sym__curly_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_BSLASH_LBRACK,
  [2707] = 2,
    ACTIONS(441), 2,
      anon_sym_LBRACE,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(443), 9,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_command_name,
      sym__curly_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_LBRACK,
  [2723] = 2,
    ACTIONS(445), 2,
      anon_sym_LBRACE,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(447), 9,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_command_name,
      sym__curly_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_LBRACK,
  [2739] = 2,
    ACTIONS(449), 2,
      anon_sym_LBRACE,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(451), 9,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_command_name,
      sym__curly_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_LBRACK,
  [2755] = 2,
    ACTIONS(453), 2,
      anon_sym_LBRACE,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(455), 9,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_command_name,
      sym__curly_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_LBRACK,
  [2771] = 2,
    ACTIONS(453), 2,
      anon_sym_LBRACE,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(455), 8,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_command_name,
      sym__curly_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_BSLASH_LBRACK,
  [2786] = 2,
    ACTIONS(441), 2,
      anon_sym_LBRACE,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(443), 8,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_command_name,
      sym__curly_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
  [2801] = 2,
    ACTIONS(441), 2,
      anon_sym_LBRACE,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(443), 8,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_command_name,
      sym__curly_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_BSLASH_LBRACK,
  [2816] = 2,
    ACTIONS(445), 2,
      anon_sym_LBRACE,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(447), 8,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_command_name,
      sym__curly_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
  [2831] = 2,
    ACTIONS(453), 3,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(455), 7,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_command_name,
      sym__quote_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_LBRACK,
  [2846] = 2,
    ACTIONS(441), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(443), 7,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_command_name,
      sym__curly_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_LBRACK,
  [2861] = 2,
    ACTIONS(445), 2,
      anon_sym_LBRACE,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(447), 8,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_command_name,
      sym__curly_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_BSLASH_LBRACK,
  [2876] = 2,
    ACTIONS(449), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(451), 7,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_command_name,
      sym__curly_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_LBRACK,
  [2891] = 2,
    ACTIONS(453), 2,
      anon_sym_LBRACE,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(455), 8,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_command_name,
      sym__curly_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
  [2906] = 2,
    ACTIONS(449), 3,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(451), 7,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_command_name,
      sym__quote_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_LBRACK,
  [2921] = 2,
    ACTIONS(449), 2,
      anon_sym_LBRACE,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(451), 8,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_command_name,
      sym__curly_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
  [2936] = 2,
    ACTIONS(441), 3,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(443), 7,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_command_name,
      sym__quote_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_LBRACK,
  [2951] = 2,
    ACTIONS(445), 3,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(447), 7,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_command_name,
      sym__quote_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_LBRACK,
  [2966] = 2,
    ACTIONS(445), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(447), 7,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_command_name,
      sym__curly_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_LBRACK,
  [2981] = 2,
    ACTIONS(453), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(455), 7,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_command_name,
      sym__curly_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_LBRACK,
  [2996] = 2,
    ACTIONS(449), 2,
      anon_sym_LBRACE,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(451), 8,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_command_name,
      sym__curly_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_BSLASH_LBRACK,
  [3011] = 2,
    ACTIONS(449), 2,
      anon_sym_LBRACE,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(451), 7,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_command_name,
      sym__curly_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_LBRACK,
  [3025] = 2,
    ACTIONS(29), 2,
      anon_sym_LBRACE,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(31), 7,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_command_name,
      sym__curly_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_LBRACK,
  [3039] = 2,
    ACTIONS(9), 2,
      anon_sym_LBRACE,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(11), 7,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_command_name,
      sym__curly_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_LBRACK,
  [3053] = 2,
    ACTIONS(453), 2,
      anon_sym_LBRACE,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(455), 7,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_command_name,
      sym__curly_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_LBRACK,
  [3067] = 2,
    ACTIONS(17), 2,
      anon_sym_LBRACE,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(19), 7,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_command_name,
      sym__curly_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_LBRACK,
  [3081] = 5,
    ACTIONS(457), 1,
      ts_builtin_sym_end,
    ACTIONS(459), 1,
      anon_sym_AT,
    ACTIONS(462), 1,
      sym_junk,
    STATE(121), 2,
      sym__object,
      aux_sym_source_file_repeat1,
    STATE(172), 4,
      sym_preamble,
      sym_string,
      sym_comment,
      sym_entry,
  [3101] = 5,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(465), 1,
      ts_builtin_sym_end,
    ACTIONS(467), 1,
      sym_junk,
    STATE(121), 2,
      sym__object,
      aux_sym_source_file_repeat1,
    STATE(172), 4,
      sym_preamble,
      sym_string,
      sym_comment,
      sym_entry,
  [3121] = 2,
    ACTIONS(23), 2,
      anon_sym_LBRACE,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(25), 7,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_command_name,
      sym__curly_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_LBRACK,
  [3135] = 2,
    ACTIONS(29), 3,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(31), 5,
      sym_command_name,
      sym__quote_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_LBRACK,
  [3148] = 2,
    ACTIONS(23), 2,
      anon_sym_LBRACE,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(25), 6,
      sym_command_name,
      sym__curly_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_BSLASH_LBRACK,
  [3161] = 2,
    ACTIONS(449), 3,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(451), 5,
      sym_command_name,
      sym__quote_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_LBRACK,
  [3174] = 2,
    ACTIONS(9), 2,
      anon_sym_LBRACE,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(11), 6,
      sym_command_name,
      sym__curly_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
  [3187] = 2,
    ACTIONS(29), 2,
      anon_sym_LBRACE,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(31), 6,
      sym_command_name,
      sym__curly_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
  [3200] = 2,
    ACTIONS(17), 3,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(19), 5,
      sym_command_name,
      sym__quote_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_LBRACK,
  [3213] = 2,
    ACTIONS(23), 3,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(25), 5,
      sym_command_name,
      sym__quote_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_LBRACK,
  [3226] = 2,
    ACTIONS(23), 2,
      anon_sym_LBRACE,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(25), 6,
      sym_command_name,
      sym__curly_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
  [3239] = 2,
    ACTIONS(453), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(455), 5,
      sym_command_name,
      sym__curly_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_LBRACK,
  [3252] = 2,
    ACTIONS(17), 2,
      anon_sym_LBRACE,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(19), 6,
      sym_command_name,
      sym__curly_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
  [3265] = 2,
    ACTIONS(449), 2,
      anon_sym_LBRACE,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(451), 6,
      sym_command_name,
      sym__curly_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_BSLASH_LBRACK,
  [3278] = 2,
    ACTIONS(453), 3,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(455), 5,
      sym_command_name,
      sym__quote_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_LBRACK,
  [3291] = 2,
    ACTIONS(9), 3,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(11), 5,
      sym_command_name,
      sym__quote_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_LBRACK,
  [3304] = 2,
    ACTIONS(449), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(451), 5,
      sym_command_name,
      sym__curly_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_LBRACK,
  [3317] = 2,
    ACTIONS(453), 2,
      anon_sym_LBRACE,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(455), 6,
      sym_command_name,
      sym__curly_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_BSLASH_LBRACK,
  [3330] = 2,
    ACTIONS(469), 3,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(471), 5,
      sym_command_name,
      sym__quote_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_LBRACK,
  [3343] = 2,
    ACTIONS(9), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(11), 5,
      sym_command_name,
      sym__curly_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_LBRACK,
  [3356] = 2,
    ACTIONS(9), 2,
      anon_sym_LBRACE,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(11), 6,
      sym_command_name,
      sym__curly_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_BSLASH_LBRACK,
  [3369] = 2,
    ACTIONS(17), 2,
      anon_sym_LBRACE,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(19), 6,
      sym_command_name,
      sym__curly_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_BSLASH_LBRACK,
  [3382] = 2,
    ACTIONS(17), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(19), 5,
      sym_command_name,
      sym__curly_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_LBRACK,
  [3395] = 2,
    ACTIONS(449), 2,
      anon_sym_LBRACE,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(451), 6,
      sym_command_name,
      sym__curly_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
  [3408] = 2,
    ACTIONS(453), 2,
      anon_sym_LBRACE,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(455), 6,
      sym_command_name,
      sym__curly_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
  [3421] = 2,
    ACTIONS(23), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(25), 5,
      sym_command_name,
      sym__curly_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_LBRACK,
  [3434] = 2,
    ACTIONS(29), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(31), 5,
      sym_command_name,
      sym__curly_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_LBRACK,
  [3447] = 2,
    ACTIONS(29), 2,
      anon_sym_LBRACE,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(31), 6,
      sym_command_name,
      sym__curly_word,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_BSLASH_LBRACK,
  [3460] = 5,
    ACTIONS(475), 1,
      anon_sym_LBRACE,
    ACTIONS(477), 1,
      anon_sym_DQUOTE,
    STATE(187), 1,
      sym_value,
    ACTIONS(473), 2,
      sym_integer,
      sym__quote_word,
    STATE(155), 2,
      sym_curly_group,
      sym_quote_group,
  [3478] = 5,
    ACTIONS(475), 1,
      anon_sym_LBRACE,
    ACTIONS(477), 1,
      anon_sym_DQUOTE,
    STATE(188), 1,
      sym_value,
    ACTIONS(473), 2,
      sym_integer,
      sym__quote_word,
    STATE(155), 2,
      sym_curly_group,
      sym_quote_group,
  [3496] = 5,
    ACTIONS(475), 1,
      anon_sym_LBRACE,
    ACTIONS(477), 1,
      anon_sym_DQUOTE,
    STATE(167), 1,
      sym_value,
    ACTIONS(473), 2,
      sym_integer,
      sym__quote_word,
    STATE(155), 2,
      sym_curly_group,
      sym_quote_group,
  [3514] = 3,
    ACTIONS(479), 1,
      anon_sym_POUND,
    STATE(154), 1,
      aux_sym_value_repeat1,
    ACTIONS(481), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_identifier,
  [3527] = 5,
    ACTIONS(485), 1,
      sym_identifier,
    STATE(153), 1,
      aux_sym_entry_repeat1,
    STATE(166), 1,
      sym__assignment,
    STATE(175), 1,
      sym_field,
    ACTIONS(483), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [3544] = 3,
    ACTIONS(488), 1,
      anon_sym_POUND,
    STATE(154), 1,
      aux_sym_value_repeat1,
    ACTIONS(491), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_identifier,
  [3557] = 3,
    ACTIONS(479), 1,
      anon_sym_POUND,
    STATE(152), 1,
      aux_sym_value_repeat1,
    ACTIONS(493), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_identifier,
  [3570] = 4,
    ACTIONS(475), 1,
      anon_sym_LBRACE,
    ACTIONS(477), 1,
      anon_sym_DQUOTE,
    ACTIONS(495), 2,
      sym_integer,
      sym__quote_word,
    STATE(161), 2,
      sym_curly_group,
      sym_quote_group,
  [3585] = 5,
    ACTIONS(497), 1,
      anon_sym_RPAREN,
    ACTIONS(499), 1,
      sym_identifier,
    STATE(153), 1,
      aux_sym_entry_repeat1,
    STATE(166), 1,
      sym__assignment,
    STATE(175), 1,
      sym_field,
  [3601] = 5,
    ACTIONS(499), 1,
      sym_identifier,
    ACTIONS(501), 1,
      anon_sym_RBRACE,
    STATE(153), 1,
      aux_sym_entry_repeat1,
    STATE(166), 1,
      sym__assignment,
    STATE(175), 1,
      sym_field,
  [3617] = 1,
    ACTIONS(503), 5,
      anon_sym_POUND,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_identifier,
  [3625] = 1,
    ACTIONS(453), 5,
      anon_sym_POUND,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_identifier,
  [3633] = 1,
    ACTIONS(491), 5,
      anon_sym_POUND,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_identifier,
  [3641] = 5,
    ACTIONS(499), 1,
      sym_identifier,
    ACTIONS(505), 1,
      anon_sym_RPAREN,
    STATE(157), 1,
      aux_sym_entry_repeat1,
    STATE(166), 1,
      sym__assignment,
    STATE(175), 1,
      sym_field,
  [3657] = 5,
    ACTIONS(499), 1,
      sym_identifier,
    ACTIONS(505), 1,
      anon_sym_RBRACE,
    STATE(158), 1,
      aux_sym_entry_repeat1,
    STATE(166), 1,
      sym__assignment,
    STATE(175), 1,
      sym_field,
  [3673] = 1,
    ACTIONS(507), 5,
      anon_sym_POUND,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_identifier,
  [3681] = 1,
    ACTIONS(449), 5,
      anon_sym_POUND,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_identifier,
  [3689] = 2,
    ACTIONS(511), 1,
      anon_sym_COMMA,
    ACTIONS(509), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      sym_identifier,
  [3698] = 1,
    ACTIONS(513), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_identifier,
  [3705] = 4,
    ACTIONS(515), 1,
      sym__preamble_type,
    ACTIONS(517), 1,
      sym__string_type,
    ACTIONS(519), 1,
      sym__comment_type,
    ACTIONS(521), 1,
      sym_identifier,
  [3718] = 1,
    ACTIONS(523), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_junk,
  [3724] = 1,
    ACTIONS(525), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_junk,
  [3730] = 1,
    ACTIONS(523), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_junk,
  [3736] = 1,
    ACTIONS(527), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_junk,
  [3742] = 1,
    ACTIONS(529), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      sym_identifier,
  [3748] = 1,
    ACTIONS(531), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_junk,
  [3754] = 1,
    ACTIONS(533), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      sym_identifier,
  [3760] = 1,
    ACTIONS(535), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_junk,
  [3766] = 1,
    ACTIONS(525), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_junk,
  [3772] = 1,
    ACTIONS(537), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_junk,
  [3778] = 2,
    ACTIONS(499), 1,
      sym_identifier,
    STATE(191), 1,
      sym__assignment,
  [3785] = 2,
    ACTIONS(499), 1,
      sym_identifier,
    STATE(190), 1,
      sym__assignment,
  [3792] = 2,
    ACTIONS(539), 1,
      anon_sym_LBRACE,
    ACTIONS(541), 1,
      anon_sym_LPAREN,
  [3799] = 2,
    ACTIONS(543), 1,
      anon_sym_LBRACE,
    ACTIONS(545), 1,
      anon_sym_LPAREN,
  [3806] = 2,
    ACTIONS(547), 1,
      anon_sym_LBRACE,
    ACTIONS(549), 1,
      anon_sym_LPAREN,
  [3813] = 1,
    ACTIONS(551), 1,
      sym__key_paren,
  [3817] = 1,
    ACTIONS(553), 1,
      sym__key_curly,
  [3821] = 1,
    ACTIONS(555), 1,
      anon_sym_COMMA,
  [3825] = 1,
    ACTIONS(557), 1,
      anon_sym_RBRACE,
  [3829] = 1,
    ACTIONS(557), 1,
      anon_sym_RPAREN,
  [3833] = 1,
    ACTIONS(559), 1,
      anon_sym_EQ,
  [3837] = 1,
    ACTIONS(561), 1,
      anon_sym_RBRACE,
  [3841] = 1,
    ACTIONS(563), 1,
      anon_sym_RPAREN,
  [3845] = 1,
    ACTIONS(565), 1,
      anon_sym_COMMA,
  [3849] = 1,
    ACTIONS(567), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 27,
  [SMALL_STATE(4)] = 52,
  [SMALL_STATE(5)] = 77,
  [SMALL_STATE(6)] = 104,
  [SMALL_STATE(7)] = 129,
  [SMALL_STATE(8)] = 156,
  [SMALL_STATE(9)] = 181,
  [SMALL_STATE(10)] = 208,
  [SMALL_STATE(11)] = 240,
  [SMALL_STATE(12)] = 264,
  [SMALL_STATE(13)] = 288,
  [SMALL_STATE(14)] = 320,
  [SMALL_STATE(15)] = 352,
  [SMALL_STATE(16)] = 376,
  [SMALL_STATE(17)] = 400,
  [SMALL_STATE(18)] = 432,
  [SMALL_STATE(19)] = 456,
  [SMALL_STATE(20)] = 488,
  [SMALL_STATE(21)] = 512,
  [SMALL_STATE(22)] = 544,
  [SMALL_STATE(23)] = 568,
  [SMALL_STATE(24)] = 600,
  [SMALL_STATE(25)] = 632,
  [SMALL_STATE(26)] = 656,
  [SMALL_STATE(27)] = 688,
  [SMALL_STATE(28)] = 720,
  [SMALL_STATE(29)] = 752,
  [SMALL_STATE(30)] = 785,
  [SMALL_STATE(31)] = 816,
  [SMALL_STATE(32)] = 847,
  [SMALL_STATE(33)] = 880,
  [SMALL_STATE(34)] = 911,
  [SMALL_STATE(35)] = 942,
  [SMALL_STATE(36)] = 973,
  [SMALL_STATE(37)] = 1006,
  [SMALL_STATE(38)] = 1037,
  [SMALL_STATE(39)] = 1068,
  [SMALL_STATE(40)] = 1101,
  [SMALL_STATE(41)] = 1132,
  [SMALL_STATE(42)] = 1163,
  [SMALL_STATE(43)] = 1194,
  [SMALL_STATE(44)] = 1227,
  [SMALL_STATE(45)] = 1258,
  [SMALL_STATE(46)] = 1289,
  [SMALL_STATE(47)] = 1322,
  [SMALL_STATE(48)] = 1353,
  [SMALL_STATE(49)] = 1384,
  [SMALL_STATE(50)] = 1405,
  [SMALL_STATE(51)] = 1436,
  [SMALL_STATE(52)] = 1467,
  [SMALL_STATE(53)] = 1498,
  [SMALL_STATE(54)] = 1531,
  [SMALL_STATE(55)] = 1562,
  [SMALL_STATE(56)] = 1595,
  [SMALL_STATE(57)] = 1626,
  [SMALL_STATE(58)] = 1657,
  [SMALL_STATE(59)] = 1688,
  [SMALL_STATE(60)] = 1721,
  [SMALL_STATE(61)] = 1752,
  [SMALL_STATE(62)] = 1783,
  [SMALL_STATE(63)] = 1804,
  [SMALL_STATE(64)] = 1835,
  [SMALL_STATE(65)] = 1866,
  [SMALL_STATE(66)] = 1897,
  [SMALL_STATE(67)] = 1928,
  [SMALL_STATE(68)] = 1949,
  [SMALL_STATE(69)] = 1980,
  [SMALL_STATE(70)] = 2013,
  [SMALL_STATE(71)] = 2044,
  [SMALL_STATE(72)] = 2069,
  [SMALL_STATE(73)] = 2100,
  [SMALL_STATE(74)] = 2131,
  [SMALL_STATE(75)] = 2162,
  [SMALL_STATE(76)] = 2187,
  [SMALL_STATE(77)] = 2218,
  [SMALL_STATE(78)] = 2249,
  [SMALL_STATE(79)] = 2280,
  [SMALL_STATE(80)] = 2305,
  [SMALL_STATE(81)] = 2336,
  [SMALL_STATE(82)] = 2357,
  [SMALL_STATE(83)] = 2388,
  [SMALL_STATE(84)] = 2419,
  [SMALL_STATE(85)] = 2443,
  [SMALL_STATE(86)] = 2467,
  [SMALL_STATE(87)] = 2491,
  [SMALL_STATE(88)] = 2515,
  [SMALL_STATE(89)] = 2539,
  [SMALL_STATE(90)] = 2563,
  [SMALL_STATE(91)] = 2587,
  [SMALL_STATE(92)] = 2611,
  [SMALL_STATE(93)] = 2635,
  [SMALL_STATE(94)] = 2659,
  [SMALL_STATE(95)] = 2683,
  [SMALL_STATE(96)] = 2707,
  [SMALL_STATE(97)] = 2723,
  [SMALL_STATE(98)] = 2739,
  [SMALL_STATE(99)] = 2755,
  [SMALL_STATE(100)] = 2771,
  [SMALL_STATE(101)] = 2786,
  [SMALL_STATE(102)] = 2801,
  [SMALL_STATE(103)] = 2816,
  [SMALL_STATE(104)] = 2831,
  [SMALL_STATE(105)] = 2846,
  [SMALL_STATE(106)] = 2861,
  [SMALL_STATE(107)] = 2876,
  [SMALL_STATE(108)] = 2891,
  [SMALL_STATE(109)] = 2906,
  [SMALL_STATE(110)] = 2921,
  [SMALL_STATE(111)] = 2936,
  [SMALL_STATE(112)] = 2951,
  [SMALL_STATE(113)] = 2966,
  [SMALL_STATE(114)] = 2981,
  [SMALL_STATE(115)] = 2996,
  [SMALL_STATE(116)] = 3011,
  [SMALL_STATE(117)] = 3025,
  [SMALL_STATE(118)] = 3039,
  [SMALL_STATE(119)] = 3053,
  [SMALL_STATE(120)] = 3067,
  [SMALL_STATE(121)] = 3081,
  [SMALL_STATE(122)] = 3101,
  [SMALL_STATE(123)] = 3121,
  [SMALL_STATE(124)] = 3135,
  [SMALL_STATE(125)] = 3148,
  [SMALL_STATE(126)] = 3161,
  [SMALL_STATE(127)] = 3174,
  [SMALL_STATE(128)] = 3187,
  [SMALL_STATE(129)] = 3200,
  [SMALL_STATE(130)] = 3213,
  [SMALL_STATE(131)] = 3226,
  [SMALL_STATE(132)] = 3239,
  [SMALL_STATE(133)] = 3252,
  [SMALL_STATE(134)] = 3265,
  [SMALL_STATE(135)] = 3278,
  [SMALL_STATE(136)] = 3291,
  [SMALL_STATE(137)] = 3304,
  [SMALL_STATE(138)] = 3317,
  [SMALL_STATE(139)] = 3330,
  [SMALL_STATE(140)] = 3343,
  [SMALL_STATE(141)] = 3356,
  [SMALL_STATE(142)] = 3369,
  [SMALL_STATE(143)] = 3382,
  [SMALL_STATE(144)] = 3395,
  [SMALL_STATE(145)] = 3408,
  [SMALL_STATE(146)] = 3421,
  [SMALL_STATE(147)] = 3434,
  [SMALL_STATE(148)] = 3447,
  [SMALL_STATE(149)] = 3460,
  [SMALL_STATE(150)] = 3478,
  [SMALL_STATE(151)] = 3496,
  [SMALL_STATE(152)] = 3514,
  [SMALL_STATE(153)] = 3527,
  [SMALL_STATE(154)] = 3544,
  [SMALL_STATE(155)] = 3557,
  [SMALL_STATE(156)] = 3570,
  [SMALL_STATE(157)] = 3585,
  [SMALL_STATE(158)] = 3601,
  [SMALL_STATE(159)] = 3617,
  [SMALL_STATE(160)] = 3625,
  [SMALL_STATE(161)] = 3633,
  [SMALL_STATE(162)] = 3641,
  [SMALL_STATE(163)] = 3657,
  [SMALL_STATE(164)] = 3673,
  [SMALL_STATE(165)] = 3681,
  [SMALL_STATE(166)] = 3689,
  [SMALL_STATE(167)] = 3698,
  [SMALL_STATE(168)] = 3705,
  [SMALL_STATE(169)] = 3718,
  [SMALL_STATE(170)] = 3724,
  [SMALL_STATE(171)] = 3730,
  [SMALL_STATE(172)] = 3736,
  [SMALL_STATE(173)] = 3742,
  [SMALL_STATE(174)] = 3748,
  [SMALL_STATE(175)] = 3754,
  [SMALL_STATE(176)] = 3760,
  [SMALL_STATE(177)] = 3766,
  [SMALL_STATE(178)] = 3772,
  [SMALL_STATE(179)] = 3778,
  [SMALL_STATE(180)] = 3785,
  [SMALL_STATE(181)] = 3792,
  [SMALL_STATE(182)] = 3799,
  [SMALL_STATE(183)] = 3806,
  [SMALL_STATE(184)] = 3813,
  [SMALL_STATE(185)] = 3817,
  [SMALL_STATE(186)] = 3821,
  [SMALL_STATE(187)] = 3825,
  [SMALL_STATE(188)] = 3829,
  [SMALL_STATE(189)] = 3833,
  [SMALL_STATE(190)] = 3837,
  [SMALL_STATE(191)] = 3841,
  [SMALL_STATE(192)] = 3845,
  [SMALL_STATE(193)] = 3849,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_formula, 2),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_formula, 2),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_displayed_equation, 3),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_displayed_equation, 3),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_formula, 3),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_formula, 3),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_displayed_equation, 2),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_displayed_equation, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_curly_group_repeat1, 2), SHIFT_REPEAT(82),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_curly_group_repeat1, 2),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_curly_group_repeat1, 2), SHIFT_REPEAT(79),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_curly_group_repeat1, 2), SHIFT_REPEAT(13),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_curly_group_repeat1, 2), SHIFT_REPEAT(55),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_curly_group_repeat1, 2), SHIFT_REPEAT(63),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_curly_group_repeat1, 2), SHIFT_REPEAT(63),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_curly_group_repeat1, 2), SHIFT_REPEAT(73),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_curly_group_repeat1, 2), SHIFT_REPEAT(92),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_curly_group_repeat1, 2), SHIFT_REPEAT(35),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_curly_group_repeat1, 2), SHIFT_REPEAT(39),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_curly_group_repeat1, 2), SHIFT_REPEAT(34),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_curly_group_repeat1, 2), SHIFT_REPEAT(34),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_curly_group_repeat1, 2), SHIFT_REPEAT(60),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_curly_group_repeat1, 2),
  [248] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_curly_group_repeat1, 2), SHIFT_REPEAT(94),
  [251] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_curly_group_repeat1, 2), SHIFT_REPEAT(54),
  [254] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_curly_group_repeat1, 2), SHIFT_REPEAT(36),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_curly_group_repeat1, 2), SHIFT_REPEAT(37),
  [260] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_curly_group_repeat1, 2), SHIFT_REPEAT(37),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_group_repeat1, 2), SHIFT_REPEAT(47),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_quote_group_repeat1, 2),
  [274] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quote_group_repeat1, 2), SHIFT_REPEAT(87),
  [277] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quote_group_repeat1, 2), SHIFT_REPEAT(139),
  [280] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quote_group_repeat1, 2), SHIFT_REPEAT(59),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_group_repeat1, 2), SHIFT_REPEAT(58),
  [286] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quote_group_repeat1, 2), SHIFT_REPEAT(58),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(48),
  [340] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(17),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2, .production_id = 2),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2, .production_id = 2),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1, .production_id = 2),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1, .production_id = 2),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_curly_group_repeat1, 2), SHIFT_REPEAT(64),
  [386] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_curly_group_repeat1, 2), SHIFT_REPEAT(90),
  [389] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_curly_group_repeat1, 2), SHIFT_REPEAT(83),
  [392] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_curly_group_repeat1, 2), SHIFT_REPEAT(46),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_curly_group_repeat1, 2), SHIFT_REPEAT(45),
  [398] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_curly_group_repeat1, 2), SHIFT_REPEAT(45),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(65),
  [404] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(27),
  [407] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(78),
  [410] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(21),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(40),
  [420] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(28),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [435] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(76),
  [438] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(23),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mixed_group, 2),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mixed_group, 2),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mixed_group, 3),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mixed_group, 3),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_curly_group, 2),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_curly_group, 2),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_curly_group, 3),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_curly_group, 3),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [459] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(168),
  [462] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(121),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quote_content, 1, .production_id = 3),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quote_content, 1, .production_id = 3),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entry_repeat1, 2, .production_id = 10),
  [485] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entry_repeat1, 2, .production_id = 10), SHIFT_REPEAT(189),
  [488] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(156),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote_group, 3),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote_group, 2),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1, .production_id = 8),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__assignment, 3, .production_id = 5),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 7, .production_id = 9),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 5, .production_id = 4),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object, 1),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 2, .production_id = 8),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, .production_id = 1),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entry_repeat1, 1, .production_id = 7),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 6, .production_id = 6),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preamble, 5, .production_id = 1),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [567] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_bibtex(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
