#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 38
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 27
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_module = 1,
  anon_sym_exposing = 2,
  anon_sym_end = 3,
  anon_sym_DOT = 4,
  anon_sym_LPAREN = 5,
  anon_sym_COMMA = 6,
  anon_sym_RPAREN = 7,
  anon_sym_LPAREN_DOT_DOT_RPAREN = 8,
  sym_upper_identifier = 9,
  sym_lower_identifier = 10,
  anon_sym_POUND_POUND = 11,
  aux_sym_doc_comment_token1 = 12,
  anon_sym_POUND = 13,
  sym_source_file = 14,
  sym_module_declaration = 15,
  sym_module_path = 16,
  sym_export_list = 17,
  sym_expose_all = 18,
  sym_exposed_item = 19,
  sym_exposed_type = 20,
  sym_statement = 21,
  sym_doc_comment = 22,
  sym_comment = 23,
  aux_sym_module_declaration_repeat1 = 24,
  aux_sym_module_path_repeat1 = 25,
  aux_sym_export_list_repeat1 = 26,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_module] = "module",
  [anon_sym_exposing] = "exposing",
  [anon_sym_end] = "end",
  [anon_sym_DOT] = ".",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LPAREN_DOT_DOT_RPAREN] = "(..)",
  [sym_upper_identifier] = "upper_identifier",
  [sym_lower_identifier] = "lower_identifier",
  [anon_sym_POUND_POUND] = "##",
  [aux_sym_doc_comment_token1] = "doc_comment_token1",
  [anon_sym_POUND] = "#",
  [sym_source_file] = "source_file",
  [sym_module_declaration] = "module_declaration",
  [sym_module_path] = "module_path",
  [sym_export_list] = "export_list",
  [sym_expose_all] = "expose_all",
  [sym_exposed_item] = "exposed_item",
  [sym_exposed_type] = "exposed_type",
  [sym_statement] = "statement",
  [sym_doc_comment] = "doc_comment",
  [sym_comment] = "comment",
  [aux_sym_module_declaration_repeat1] = "module_declaration_repeat1",
  [aux_sym_module_path_repeat1] = "module_path_repeat1",
  [aux_sym_export_list_repeat1] = "export_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_exposing] = anon_sym_exposing,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LPAREN_DOT_DOT_RPAREN] = anon_sym_LPAREN_DOT_DOT_RPAREN,
  [sym_upper_identifier] = sym_upper_identifier,
  [sym_lower_identifier] = sym_lower_identifier,
  [anon_sym_POUND_POUND] = anon_sym_POUND_POUND,
  [aux_sym_doc_comment_token1] = aux_sym_doc_comment_token1,
  [anon_sym_POUND] = anon_sym_POUND,
  [sym_source_file] = sym_source_file,
  [sym_module_declaration] = sym_module_declaration,
  [sym_module_path] = sym_module_path,
  [sym_export_list] = sym_export_list,
  [sym_expose_all] = sym_expose_all,
  [sym_exposed_item] = sym_exposed_item,
  [sym_exposed_type] = sym_exposed_type,
  [sym_statement] = sym_statement,
  [sym_doc_comment] = sym_doc_comment,
  [sym_comment] = sym_comment,
  [aux_sym_module_declaration_repeat1] = aux_sym_module_declaration_repeat1,
  [aux_sym_module_path_repeat1] = aux_sym_module_path_repeat1,
  [aux_sym_export_list_repeat1] = aux_sym_export_list_repeat1,
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
  [anon_sym_exposing] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN_DOT_DOT_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_upper_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_lower_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_doc_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_module_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_module_path] = {
    .visible = true,
    .named = true,
  },
  [sym_export_list] = {
    .visible = true,
    .named = true,
  },
  [sym_expose_all] = {
    .visible = true,
    .named = true,
  },
  [sym_exposed_item] = {
    .visible = true,
    .named = true,
  },
  [sym_exposed_type] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_doc_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_module_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_module_path_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_export_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 26,
  [35] = 22,
  [36] = 33,
  [37] = 32,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(17);
      if (lookahead == '#') ADVANCE(32);
      if (lookahead == '(') ADVANCE(22);
      if (lookahead == ')') ADVANCE(24);
      if (lookahead == ',') ADVANCE(23);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == 'e') ADVANCE(10);
      if (lookahead == 'm') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(26);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(32);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(26);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(25);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == 'd') ADVANCE(20);
      END_STATE();
    case 5:
      if (lookahead == 'd') ADVANCE(16);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 7:
      if (lookahead == 'g') ADVANCE(19);
      END_STATE();
    case 8:
      if (lookahead == 'i') ADVANCE(11);
      END_STATE();
    case 9:
      if (lookahead == 'l') ADVANCE(6);
      END_STATE();
    case 10:
      if (lookahead == 'n') ADVANCE(4);
      if (lookahead == 'x') ADVANCE(14);
      END_STATE();
    case 11:
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 12:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 13:
      if (lookahead == 'o') ADVANCE(5);
      END_STATE();
    case 14:
      if (lookahead == 'p') ADVANCE(12);
      END_STATE();
    case 15:
      if (lookahead == 's') ADVANCE(8);
      END_STATE();
    case 16:
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_exposing);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '.') ADVANCE(3);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LPAREN_DOT_DOT_RPAREN);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_upper_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_lower_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_POUND_POUND);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_POUND_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_doc_comment_token1);
      if (lookahead == '#') ADVANCE(33);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_doc_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '#') ADVANCE(28);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 30},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 30},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 30},
  [35] = {.lex_state = 30},
  [36] = {(TSStateId)(-1)},
  [37] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_doc_comment] = STATE(0),
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_exposing] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LPAREN_DOT_DOT_RPAREN] = ACTIONS(1),
    [sym_upper_identifier] = ACTIONS(1),
    [anon_sym_POUND_POUND] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
  },
  [1] = {
    [sym_source_file] = STATE(25),
    [sym_module_declaration] = STATE(21),
    [sym_doc_comment] = STATE(1),
    [sym_comment] = STATE(1),
    [anon_sym_module] = ACTIONS(7),
    [anon_sym_POUND_POUND] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND_POUND,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(9), 1,
      sym_upper_identifier,
    ACTIONS(11), 1,
      sym_lower_identifier,
    STATE(9), 1,
      sym_exposed_item,
    STATE(16), 1,
      sym_exposed_type,
    STATE(2), 2,
      sym_doc_comment,
      sym_comment,
  [23] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND_POUND,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(9), 1,
      sym_upper_identifier,
    ACTIONS(11), 1,
      sym_lower_identifier,
    STATE(16), 1,
      sym_exposed_type,
    STATE(19), 1,
      sym_exposed_item,
    STATE(3), 2,
      sym_doc_comment,
      sym_comment,
  [46] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND_POUND,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_LPAREN_DOT_DOT_RPAREN,
    STATE(7), 1,
      sym_export_list,
    STATE(20), 1,
      sym_expose_all,
    STATE(4), 2,
      sym_doc_comment,
      sym_comment,
  [69] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND_POUND,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_exposing,
    ACTIONS(19), 1,
      anon_sym_DOT,
    STATE(6), 1,
      aux_sym_module_path_repeat1,
    STATE(5), 2,
      sym_doc_comment,
      sym_comment,
  [89] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND_POUND,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(21), 1,
      anon_sym_exposing,
    STATE(8), 1,
      aux_sym_module_path_repeat1,
    STATE(6), 2,
      sym_doc_comment,
      sym_comment,
  [109] = 5,
    ACTIONS(23), 1,
      anon_sym_end,
    ACTIONS(25), 1,
      anon_sym_POUND_POUND,
    ACTIONS(27), 1,
      anon_sym_POUND,
    STATE(7), 2,
      sym_doc_comment,
      sym_comment,
    STATE(11), 2,
      sym_statement,
      aux_sym_module_declaration_repeat1,
  [127] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND_POUND,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_exposing,
    ACTIONS(31), 1,
      anon_sym_DOT,
    STATE(8), 3,
      sym_doc_comment,
      sym_comment,
      aux_sym_module_path_repeat1,
  [145] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND_POUND,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(34), 1,
      anon_sym_COMMA,
    ACTIONS(36), 1,
      anon_sym_RPAREN,
    STATE(12), 1,
      aux_sym_export_list_repeat1,
    STATE(9), 2,
      sym_doc_comment,
      sym_comment,
  [165] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND_POUND,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(40), 1,
      anon_sym_LPAREN_DOT_DOT_RPAREN,
    ACTIONS(38), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(10), 2,
      sym_doc_comment,
      sym_comment,
  [183] = 5,
    ACTIONS(25), 1,
      anon_sym_POUND_POUND,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(42), 1,
      anon_sym_end,
    STATE(11), 2,
      sym_doc_comment,
      sym_comment,
    STATE(13), 2,
      sym_statement,
      aux_sym_module_declaration_repeat1,
  [201] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND_POUND,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(34), 1,
      anon_sym_COMMA,
    ACTIONS(44), 1,
      anon_sym_RPAREN,
    STATE(14), 1,
      aux_sym_export_list_repeat1,
    STATE(12), 2,
      sym_doc_comment,
      sym_comment,
  [221] = 4,
    ACTIONS(46), 1,
      anon_sym_end,
    ACTIONS(48), 1,
      anon_sym_POUND_POUND,
    ACTIONS(51), 1,
      anon_sym_POUND,
    STATE(13), 4,
      sym_statement,
      sym_doc_comment,
      sym_comment,
      aux_sym_module_declaration_repeat1,
  [237] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND_POUND,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(54), 1,
      anon_sym_COMMA,
    ACTIONS(57), 1,
      anon_sym_RPAREN,
    STATE(14), 3,
      sym_doc_comment,
      sym_comment,
      aux_sym_export_list_repeat1,
  [255] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND_POUND,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(29), 2,
      anon_sym_exposing,
      anon_sym_DOT,
    STATE(15), 2,
      sym_doc_comment,
      sym_comment,
  [270] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND_POUND,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(59), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(16), 2,
      sym_doc_comment,
      sym_comment,
  [285] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND_POUND,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(61), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(17), 2,
      sym_doc_comment,
      sym_comment,
  [300] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND_POUND,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(63), 1,
      sym_upper_identifier,
    STATE(28), 1,
      sym_module_path,
    STATE(18), 2,
      sym_doc_comment,
      sym_comment,
  [317] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND_POUND,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(57), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(19), 2,
      sym_doc_comment,
      sym_comment,
  [332] = 3,
    ACTIONS(67), 1,
      anon_sym_POUND,
    ACTIONS(65), 2,
      anon_sym_end,
      anon_sym_POUND_POUND,
    STATE(20), 2,
      sym_doc_comment,
      sym_comment,
  [344] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND_POUND,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    STATE(21), 2,
      sym_doc_comment,
      sym_comment,
  [358] = 4,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(71), 1,
      anon_sym_POUND_POUND,
    ACTIONS(73), 1,
      aux_sym_doc_comment_token1,
    STATE(22), 2,
      sym_doc_comment,
      sym_comment,
  [372] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND_POUND,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    STATE(23), 2,
      sym_doc_comment,
      sym_comment,
  [386] = 3,
    ACTIONS(79), 1,
      anon_sym_POUND,
    ACTIONS(77), 2,
      anon_sym_end,
      anon_sym_POUND_POUND,
    STATE(24), 2,
      sym_doc_comment,
      sym_comment,
  [398] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND_POUND,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    STATE(25), 2,
      sym_doc_comment,
      sym_comment,
  [412] = 4,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(71), 1,
      anon_sym_POUND_POUND,
    ACTIONS(83), 1,
      aux_sym_doc_comment_token1,
    STATE(26), 2,
      sym_doc_comment,
      sym_comment,
  [426] = 3,
    ACTIONS(87), 1,
      anon_sym_POUND,
    ACTIONS(85), 2,
      anon_sym_end,
      anon_sym_POUND_POUND,
    STATE(27), 2,
      sym_doc_comment,
      sym_comment,
  [438] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND_POUND,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(89), 1,
      anon_sym_exposing,
    STATE(28), 2,
      sym_doc_comment,
      sym_comment,
  [452] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND_POUND,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    STATE(29), 2,
      sym_doc_comment,
      sym_comment,
  [466] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND_POUND,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(93), 1,
      sym_upper_identifier,
    STATE(30), 2,
      sym_doc_comment,
      sym_comment,
  [480] = 3,
    ACTIONS(97), 1,
      anon_sym_POUND,
    ACTIONS(95), 2,
      anon_sym_end,
      anon_sym_POUND_POUND,
    STATE(31), 2,
      sym_doc_comment,
      sym_comment,
  [492] = 3,
    ACTIONS(101), 1,
      anon_sym_POUND,
    ACTIONS(99), 2,
      anon_sym_end,
      anon_sym_POUND_POUND,
    STATE(32), 2,
      sym_doc_comment,
      sym_comment,
  [504] = 3,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(103), 2,
      anon_sym_end,
      anon_sym_POUND_POUND,
    STATE(33), 2,
      sym_doc_comment,
      sym_comment,
  [516] = 4,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(71), 1,
      anon_sym_POUND_POUND,
    ACTIONS(107), 1,
      aux_sym_doc_comment_token1,
    STATE(34), 2,
      sym_doc_comment,
      sym_comment,
  [530] = 4,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(71), 1,
      anon_sym_POUND_POUND,
    ACTIONS(109), 1,
      aux_sym_doc_comment_token1,
    STATE(35), 2,
      sym_doc_comment,
      sym_comment,
  [544] = 1,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
  [548] = 1,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 46,
  [SMALL_STATE(5)] = 69,
  [SMALL_STATE(6)] = 89,
  [SMALL_STATE(7)] = 109,
  [SMALL_STATE(8)] = 127,
  [SMALL_STATE(9)] = 145,
  [SMALL_STATE(10)] = 165,
  [SMALL_STATE(11)] = 183,
  [SMALL_STATE(12)] = 201,
  [SMALL_STATE(13)] = 221,
  [SMALL_STATE(14)] = 237,
  [SMALL_STATE(15)] = 255,
  [SMALL_STATE(16)] = 270,
  [SMALL_STATE(17)] = 285,
  [SMALL_STATE(18)] = 300,
  [SMALL_STATE(19)] = 317,
  [SMALL_STATE(20)] = 332,
  [SMALL_STATE(21)] = 344,
  [SMALL_STATE(22)] = 358,
  [SMALL_STATE(23)] = 372,
  [SMALL_STATE(24)] = 386,
  [SMALL_STATE(25)] = 398,
  [SMALL_STATE(26)] = 412,
  [SMALL_STATE(27)] = 426,
  [SMALL_STATE(28)] = 438,
  [SMALL_STATE(29)] = 452,
  [SMALL_STATE(30)] = 466,
  [SMALL_STATE(31)] = 480,
  [SMALL_STATE(32)] = 492,
  [SMALL_STATE(33)] = 504,
  [SMALL_STATE(34)] = 516,
  [SMALL_STATE(35)] = 530,
  [SMALL_STATE(36)] = 544,
  [SMALL_STATE(37)] = 548,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_path, 1, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_path, 2, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_path_repeat1, 2, 0, 0),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_path_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposed_type, 1, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_declaration_repeat1, 2, 0, 0),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_export_list_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_export_list_repeat1, 2, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposed_item, 1, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposed_type, 2, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_list, 1, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export_list, 1, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_declaration, 5, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_all, 1, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_all, 1, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_list, 3, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export_list, 3, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_declaration, 6, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_list, 4, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export_list, 4, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc_comment, 2, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doc_comment, 2, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_midnite(void) {
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
