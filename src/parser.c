#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 19
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 23
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 5

enum {
  anon_sym_module = 1,
  anon_sym_EQ = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  anon_sym_COLON = 5,
  anon_sym_UNDEFINED = 6,
  anon_sym_SEMI = 7,
  sym_integer = 8,
  sym_float = 9,
  sym_char = 10,
  sym_lower_identifier = 11,
  sym_upper_identifier = 12,
  sym_module_name_identifier = 13,
  sym_comment = 14,
  sym_program = 15,
  sym__module = 16,
  sym_declarations = 17,
  sym__declaration = 18,
  sym_signature = 19,
  sym_function = 20,
  sym__expr = 21,
  aux_sym_declarations_repeat1 = 22,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_module] = "module",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_UNDEFINED] = "UNDEFINED",
  [anon_sym_SEMI] = ";",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [sym_char] = "char",
  [sym_lower_identifier] = "lower_identifier",
  [sym_upper_identifier] = "upper_identifier",
  [sym_module_name_identifier] = "module_name_identifier",
  [sym_comment] = "comment",
  [sym_program] = "program",
  [sym__module] = "_module",
  [sym_declarations] = "declarations",
  [sym__declaration] = "_declaration",
  [sym_signature] = "signature",
  [sym_function] = "function",
  [sym__expr] = "_expr",
  [aux_sym_declarations_repeat1] = "declarations_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_UNDEFINED] = anon_sym_UNDEFINED,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [sym_char] = sym_char,
  [sym_lower_identifier] = sym_lower_identifier,
  [sym_upper_identifier] = sym_upper_identifier,
  [sym_module_name_identifier] = sym_module_name_identifier,
  [sym_comment] = sym_comment,
  [sym_program] = sym_program,
  [sym__module] = sym__module,
  [sym_declarations] = sym_declarations,
  [sym__declaration] = sym__declaration,
  [sym_signature] = sym_signature,
  [sym_function] = sym_function,
  [sym__expr] = sym__expr,
  [aux_sym_declarations_repeat1] = aux_sym_declarations_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_UNDEFINED] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_char] = {
    .visible = true,
    .named = true,
  },
  [sym_lower_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_upper_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_module_name_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__module] = {
    .visible = false,
    .named = true,
  },
  [sym_declarations] = {
    .visible = true,
    .named = true,
  },
  [sym__declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_signature] = {
    .visible = true,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym__expr] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_declarations_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_module_name = 1,
  field_name = 2,
  field_rhs = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_module_name] = "module_name",
  [field_name] = "name",
  [field_rhs] = "rhs",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_module_name, 0, .inherited = true},
  [1] =
    {field_module_name, 1},
  [2] =
    {field_name, 0},
    {field_rhs, 2},
  [4] =
    {field_name, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool anon_sym_COLON_character_set_1(int32_t c) {
  return (c < 5760
    ? (c < ' '
      ? (c < '\r'
        ? c == '\n'
        : c <= '\r')
      : (c <= ' ' || c == 160))
    : (c <= 5760 || (c < 8287
      ? (c < 8239
        ? (c >= 8192 && c <= 8202)
        : c <= 8239)
      : (c <= 8287 || c == 12288))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(23);
      if (anon_sym_COLON_character_set_1(lookahead)) SKIP(0)
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == ';') ADVANCE(31);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == 'U') ADVANCE(50);
      if (lookahead == 'm') ADVANCE(16);
      if (lookahead == '{') ADVANCE(26);
      if (lookahead == '}') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(52);
      END_STATE();
    case 1:
      if (lookahead == '\'') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(41);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(54);
      END_STATE();
    case 4:
      if (lookahead == 'D') ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == 'D') ADVANCE(29);
      END_STATE();
    case 6:
      if (lookahead == 'E') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == 'E') ADVANCE(5);
      END_STATE();
    case 8:
      if (lookahead == 'F') ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == 'I') ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == 'N') ADVANCE(4);
      END_STATE();
    case 11:
      if (lookahead == 'N') ADVANCE(7);
      END_STATE();
    case 12:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(2);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(17);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 17:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 18:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(38);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(37);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(38);
      END_STATE();
    case 21:
      if (anon_sym_COLON_character_set_1(lookahead)) SKIP(21)
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == 'U') ADVANCE(10);
      if (lookahead == '}') ADVANCE(27);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 22:
      if (anon_sym_COLON_character_set_1(lookahead)) SKIP(22)
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '#' ||
          lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_UNDEFINED);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_UNDEFINED);
      if (lookahead == '#' ||
          lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_integer);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '#') ADVANCE(32);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '#') ADVANCE(32);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == 'L') ADVANCE(33);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '#') ADVANCE(35);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '#') ADVANCE(35);
      if (lookahead == 'F') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '#') ADVANCE(35);
      if (lookahead == 'F') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_char);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_char);
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '\'') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(1);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_char);
      if (lookahead == '#') ADVANCE(39);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_char);
      if (lookahead == '\'') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(1);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_lower_identifier);
      if (lookahead == '#' ||
          lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_upper_identifier);
      if (lookahead == 'D') ADVANCE(46);
      if (lookahead == '#' ||
          lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_upper_identifier);
      if (lookahead == 'D') ADVANCE(30);
      if (lookahead == '#' ||
          lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_upper_identifier);
      if (lookahead == 'E') ADVANCE(48);
      if (lookahead == '#' ||
          lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_upper_identifier);
      if (lookahead == 'E') ADVANCE(45);
      if (lookahead == '#' ||
          lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_upper_identifier);
      if (lookahead == 'F') ADVANCE(49);
      if (lookahead == '#' ||
          lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_upper_identifier);
      if (lookahead == 'I') ADVANCE(51);
      if (lookahead == '#' ||
          lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_upper_identifier);
      if (lookahead == 'N') ADVANCE(44);
      if (lookahead == '#' ||
          lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_upper_identifier);
      if (lookahead == 'N') ADVANCE(47);
      if (lookahead == '#' ||
          lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_upper_identifier);
      if (lookahead == '#' ||
          lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_module_name_identifier);
      if (lookahead == '#' ||
          lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 21},
  [3] = {.lex_state = 21},
  [4] = {.lex_state = 21},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 21},
  [8] = {.lex_state = 21},
  [9] = {.lex_state = 22},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 21},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_UNDEFINED] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [sym_char] = ACTIONS(1),
    [sym_upper_identifier] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_program] = STATE(10),
    [sym__module] = STATE(11),
    [anon_sym_module] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_lower_identifier,
    STATE(14), 1,
      sym_declarations,
    STATE(3), 4,
      sym__declaration,
      sym_signature,
      sym_function,
      aux_sym_declarations_repeat1,
  [16] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_lower_identifier,
    ACTIONS(9), 1,
      anon_sym_RBRACE,
    STATE(4), 4,
      sym__declaration,
      sym_signature,
      sym_function,
      aux_sym_declarations_repeat1,
  [32] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 1,
      sym_lower_identifier,
    STATE(4), 4,
      sym__declaration,
      sym_signature,
      sym_function,
      aux_sym_declarations_repeat1,
  [48] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(16), 1,
      sym_integer,
    STATE(17), 1,
      sym__expr,
    ACTIONS(18), 2,
      sym_float,
      sym_char,
  [62] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(20), 1,
      anon_sym_EQ,
    ACTIONS(22), 1,
      anon_sym_COLON,
  [72] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(24), 2,
      anon_sym_RBRACE,
      sym_lower_identifier,
  [80] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(26), 2,
      anon_sym_RBRACE,
      sym_lower_identifier,
  [88] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(28), 1,
      sym_module_name_identifier,
  [95] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(30), 1,
      ts_builtin_sym_end,
  [102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
  [109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 1,
      anon_sym_EQ,
  [116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(36), 1,
      anon_sym_LBRACE,
  [123] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(38), 1,
      anon_sym_RBRACE,
  [130] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      anon_sym_UNDEFINED,
  [137] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
  [144] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      anon_sym_SEMI,
  [151] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 16,
  [SMALL_STATE(4)] = 32,
  [SMALL_STATE(5)] = 48,
  [SMALL_STATE(6)] = 62,
  [SMALL_STATE(7)] = 72,
  [SMALL_STATE(8)] = 80,
  [SMALL_STATE(9)] = 88,
  [SMALL_STATE(10)] = 95,
  [SMALL_STATE(11)] = 102,
  [SMALL_STATE(12)] = 109,
  [SMALL_STATE(13)] = 116,
  [SMALL_STATE(14)] = 123,
  [SMALL_STATE(15)] = 130,
  [SMALL_STATE(16)] = 137,
  [SMALL_STATE(17)] = 144,
  [SMALL_STATE(18)] = 151,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declarations, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(6),
  [16] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [18] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [20] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 4, .production_id = 3),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signature, 4, .production_id = 4),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [30] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, .production_id = 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module, 6, .production_id = 2),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_malgo(void) {
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
