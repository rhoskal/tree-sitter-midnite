#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 67
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_module = 1,
  anon_sym_exposing = 2,
  anon_sym_LPAREN = 3,
  anon_sym_COMMA = 4,
  anon_sym_RPAREN = 5,
  anon_sym_type = 6,
  anon_sym_EQ = 7,
  anon_sym_PIPE = 8,
  anon_sym_let = 9,
  anon_sym_DASH_GT = 10,
  anon_sym_COLON = 11,
  anon_sym_match = 12,
  anon_sym_on = 13,
  anon_sym_EQ_GT = 14,
  sym_identifier = 15,
  anon_sym_True = 16,
  anon_sym_False = 17,
  sym_comment = 18,
  sym_source_file = 19,
  sym_statement = 20,
  sym_module_declaration = 21,
  sym_type_definition = 22,
  sym_type_variant = 23,
  sym_function_definition = 24,
  sym_parameters = 25,
  sym_expression = 26,
  sym_function_call = 27,
  sym_arguments = 28,
  sym_match_expression = 29,
  sym_match_arm = 30,
  sym_type_annotation = 31,
  sym_boolean = 32,
  aux_sym_source_file_repeat1 = 33,
  aux_sym_module_declaration_repeat1 = 34,
  aux_sym_type_definition_repeat1 = 35,
  aux_sym_arguments_repeat1 = 36,
  aux_sym_match_expression_repeat1 = 37,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_module] = "module",
  [anon_sym_exposing] = "exposing",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_type] = "type",
  [anon_sym_EQ] = "=",
  [anon_sym_PIPE] = "|",
  [anon_sym_let] = "let",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_COLON] = ":",
  [anon_sym_match] = "match",
  [anon_sym_on] = "on",
  [anon_sym_EQ_GT] = "=>",
  [sym_identifier] = "identifier",
  [anon_sym_True] = "True",
  [anon_sym_False] = "False",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_statement] = "statement",
  [sym_module_declaration] = "module_declaration",
  [sym_type_definition] = "type_definition",
  [sym_type_variant] = "type_variant",
  [sym_function_definition] = "function_definition",
  [sym_parameters] = "parameters",
  [sym_expression] = "expression",
  [sym_function_call] = "function_call",
  [sym_arguments] = "arguments",
  [sym_match_expression] = "match_expression",
  [sym_match_arm] = "match_arm",
  [sym_type_annotation] = "type_annotation",
  [sym_boolean] = "boolean",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_module_declaration_repeat1] = "module_declaration_repeat1",
  [aux_sym_type_definition_repeat1] = "type_definition_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym_match_expression_repeat1] = "match_expression_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_exposing] = anon_sym_exposing,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_match] = anon_sym_match,
  [anon_sym_on] = anon_sym_on,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [sym_identifier] = sym_identifier,
  [anon_sym_True] = anon_sym_True,
  [anon_sym_False] = anon_sym_False,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_statement] = sym_statement,
  [sym_module_declaration] = sym_module_declaration,
  [sym_type_definition] = sym_type_definition,
  [sym_type_variant] = sym_type_variant,
  [sym_function_definition] = sym_function_definition,
  [sym_parameters] = sym_parameters,
  [sym_expression] = sym_expression,
  [sym_function_call] = sym_function_call,
  [sym_arguments] = sym_arguments,
  [sym_match_expression] = sym_match_expression,
  [sym_match_arm] = sym_match_arm,
  [sym_type_annotation] = sym_type_annotation,
  [sym_boolean] = sym_boolean,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_module_declaration_repeat1] = aux_sym_module_declaration_repeat1,
  [aux_sym_type_definition_repeat1] = aux_sym_type_definition_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
  [aux_sym_match_expression_repeat1] = aux_sym_match_expression_repeat1,
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
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_match] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_True] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_False] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_module_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_type_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_type_variant] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_match_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_match_arm] = {
    .visible = true,
    .named = true,
  },
  [sym_type_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_module_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_match_expression_repeat1] = {
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
  [4] = 2,
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
  [15] = 14,
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
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 35,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 64,
  [66] = 66,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(35);
      ADVANCE_MAP(
        '#', 68,
        '(', 38,
        ')', 40,
        ',', 39,
        '-', 3,
        ':', 47,
        '=', 43,
        'F', 5,
        'T', 25,
        'e', 32,
        'l', 9,
        'm', 6,
        'o', 19,
        't', 33,
        '|', 44,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(68);
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == 'F') ADVANCE(52);
      if (lookahead == 'T') ADVANCE(59);
      if (lookahead == 'm') ADVANCE(53);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(68);
      if (lookahead == ')') ADVANCE(40);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 3:
      if (lookahead == '>') ADVANCE(46);
      END_STATE();
    case 4:
      if (lookahead == '>') ADVANCE(51);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(29);
      if (lookahead == 'o') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == 'c') ADVANCE(15);
      END_STATE();
    case 8:
      if (lookahead == 'd') ADVANCE(31);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 14:
      if (lookahead == 'g') ADVANCE(37);
      END_STATE();
    case 15:
      if (lookahead == 'h') ADVANCE(48);
      END_STATE();
    case 16:
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 19:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 21:
      if (lookahead == 'o') ADVANCE(8);
      END_STATE();
    case 22:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 23:
      if (lookahead == 'p') ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == 'p') ADVANCE(11);
      END_STATE();
    case 25:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 26:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 27:
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 30:
      if (lookahead == 'u') ADVANCE(10);
      END_STATE();
    case 31:
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 32:
      if (lookahead == 'x') ADVANCE(23);
      END_STATE();
    case 33:
      if (lookahead == 'y') ADVANCE(24);
      END_STATE();
    case 34:
      if (eof) ADVANCE(35);
      ADVANCE_MAP(
        '#', 68,
        '(', 38,
        ')', 40,
        ',', 39,
        '=', 4,
        'l', 9,
        'm', 21,
        'o', 19,
        't', 33,
        '|', 44,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_exposing);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(51);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_match);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_True);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_True);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_False);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_False);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '#') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(69);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(69);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 34},
  [3] = {.lex_state = 34},
  [4] = {.lex_state = 34},
  [5] = {.lex_state = 34},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 34},
  [10] = {.lex_state = 34},
  [11] = {.lex_state = 34},
  [12] = {.lex_state = 34},
  [13] = {.lex_state = 34},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 34},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_exposing] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_match] = ACTIONS(1),
    [anon_sym_on] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_True] = ACTIONS(1),
    [anon_sym_False] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(53),
    [sym_statement] = STATE(7),
    [sym_module_declaration] = STATE(28),
    [sym_type_definition] = STATE(28),
    [sym_function_definition] = STATE(28),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_module] = ACTIONS(7),
    [anon_sym_type] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_PIPE,
    STATE(3), 2,
      sym_match_arm,
      aux_sym_match_expression_repeat1,
    ACTIONS(13), 8,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_type,
      anon_sym_let,
      anon_sym_on,
      anon_sym_EQ_GT,
  [21] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_PIPE,
    STATE(3), 2,
      sym_match_arm,
      aux_sym_match_expression_repeat1,
    ACTIONS(17), 8,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_type,
      anon_sym_let,
      anon_sym_on,
      anon_sym_EQ_GT,
  [42] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(3), 2,
      sym_match_arm,
      aux_sym_match_expression_repeat1,
    ACTIONS(13), 9,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_let,
      anon_sym_on,
      anon_sym_EQ_GT,
  [61] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(24), 1,
      anon_sym_LPAREN,
    ACTIONS(22), 9,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_let,
      anon_sym_on,
      anon_sym_EQ_GT,
  [79] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(26), 1,
      anon_sym_RPAREN,
    ACTIONS(28), 1,
      anon_sym_match,
    ACTIONS(30), 1,
      sym_identifier,
    STATE(33), 1,
      sym_expression,
    STATE(51), 1,
      sym_arguments,
    ACTIONS(32), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(10), 3,
      sym_function_call,
      sym_match_expression,
      sym_boolean,
  [107] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_module,
    ACTIONS(9), 1,
      anon_sym_type,
    ACTIONS(11), 1,
      anon_sym_let,
    ACTIONS(34), 1,
      ts_builtin_sym_end,
    STATE(8), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(28), 3,
      sym_module_declaration,
      sym_type_definition,
      sym_function_definition,
  [132] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    ACTIONS(38), 1,
      anon_sym_module,
    ACTIONS(41), 1,
      anon_sym_type,
    ACTIONS(44), 1,
      anon_sym_let,
    STATE(8), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(28), 3,
      sym_module_declaration,
      sym_type_definition,
      sym_function_definition,
  [157] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 9,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_let,
      anon_sym_on,
      anon_sym_EQ_GT,
  [172] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(22), 9,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_let,
      anon_sym_on,
      anon_sym_EQ_GT,
  [187] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 9,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_let,
      anon_sym_on,
      anon_sym_EQ_GT,
  [202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 9,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_let,
      anon_sym_on,
      anon_sym_EQ_GT,
  [217] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 9,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_let,
      anon_sym_on,
      anon_sym_EQ_GT,
  [232] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(28), 1,
      anon_sym_match,
    ACTIONS(30), 1,
      sym_identifier,
    STATE(65), 1,
      sym_expression,
    ACTIONS(32), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(10), 3,
      sym_function_call,
      sym_match_expression,
      sym_boolean,
  [254] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(28), 1,
      anon_sym_match,
    ACTIONS(30), 1,
      sym_identifier,
    STATE(64), 1,
      sym_expression,
    ACTIONS(32), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(10), 3,
      sym_function_call,
      sym_match_expression,
      sym_boolean,
  [276] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(28), 1,
      anon_sym_match,
    ACTIONS(30), 1,
      sym_identifier,
    STATE(26), 1,
      sym_expression,
    ACTIONS(32), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(10), 3,
      sym_function_call,
      sym_match_expression,
      sym_boolean,
  [298] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(28), 1,
      anon_sym_match,
    ACTIONS(30), 1,
      sym_identifier,
    STATE(27), 1,
      sym_expression,
    ACTIONS(32), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(10), 3,
      sym_function_call,
      sym_match_expression,
      sym_boolean,
  [320] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(28), 1,
      anon_sym_match,
    ACTIONS(30), 1,
      sym_identifier,
    STATE(44), 1,
      sym_expression,
    ACTIONS(32), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(10), 3,
      sym_function_call,
      sym_match_expression,
      sym_boolean,
  [342] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(28), 1,
      anon_sym_match,
    ACTIONS(30), 1,
      sym_identifier,
    STATE(45), 1,
      sym_expression,
    ACTIONS(32), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(10), 3,
      sym_function_call,
      sym_match_expression,
      sym_boolean,
  [364] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(30), 1,
      sym_identifier,
    ACTIONS(55), 1,
      anon_sym_match,
    STATE(13), 1,
      sym_expression,
    ACTIONS(32), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(10), 3,
      sym_function_call,
      sym_match_expression,
      sym_boolean,
  [386] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_PIPE,
    STATE(21), 2,
      sym_type_variant,
      aux_sym_type_definition_repeat1,
    ACTIONS(57), 4,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_type,
      anon_sym_let,
  [403] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 1,
      anon_sym_PIPE,
    STATE(21), 2,
      sym_type_variant,
      aux_sym_type_definition_repeat1,
    ACTIONS(62), 4,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_type,
      anon_sym_let,
  [420] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 5,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_let,
  [431] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 4,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_type,
      anon_sym_let,
  [441] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 4,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_type,
      anon_sym_let,
  [451] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 4,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_type,
      anon_sym_let,
  [461] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 4,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_type,
      anon_sym_let,
  [471] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 4,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_type,
      anon_sym_let,
  [481] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_COMMA,
    ACTIONS(80), 1,
      anon_sym_RPAREN,
    STATE(30), 1,
      aux_sym_module_declaration_repeat1,
  [494] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_COMMA,
    ACTIONS(85), 1,
      anon_sym_RPAREN,
    STATE(30), 1,
      aux_sym_module_declaration_repeat1,
  [507] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 1,
      anon_sym_PIPE,
    STATE(22), 2,
      sym_type_variant,
      aux_sym_type_definition_repeat1,
  [518] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_RPAREN,
    ACTIONS(89), 1,
      sym_identifier,
    STATE(60), 1,
      sym_parameters,
  [531] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      aux_sym_arguments_repeat1,
  [544] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    ACTIONS(95), 1,
      anon_sym_RPAREN,
    STATE(36), 1,
      aux_sym_arguments_repeat1,
  [557] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_PIPE,
    STATE(2), 2,
      sym_match_arm,
      aux_sym_match_expression_repeat1,
  [568] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_COMMA,
    ACTIONS(100), 1,
      anon_sym_RPAREN,
    STATE(36), 1,
      aux_sym_arguments_repeat1,
  [581] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_COMMA,
    ACTIONS(102), 1,
      anon_sym_RPAREN,
    STATE(29), 1,
      aux_sym_module_declaration_repeat1,
  [594] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_PIPE,
    STATE(4), 2,
      sym_match_arm,
      aux_sym_match_expression_repeat1,
  [605] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [613] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      sym_identifier,
    STATE(47), 1,
      sym_type_annotation,
  [623] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      sym_identifier,
    STATE(62), 1,
      sym_type_annotation,
  [633] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      sym_identifier,
    STATE(55), 1,
      sym_type_annotation,
  [643] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 2,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [651] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [659] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_EQ_GT,
  [666] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_EQ,
  [673] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_RPAREN,
  [680] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      sym_identifier,
  [687] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      sym_identifier,
  [694] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
  [701] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_RPAREN,
  [708] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_DASH_GT,
  [715] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
  [722] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_DASH_GT,
  [729] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_EQ,
  [736] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      sym_identifier,
  [743] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      anon_sym_exposing,
  [750] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      sym_identifier,
  [757] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_COLON,
  [764] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      anon_sym_RPAREN,
  [771] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_LPAREN,
  [778] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_EQ,
  [785] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      sym_identifier,
  [792] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_on,
  [799] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      anon_sym_on,
  [806] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 21,
  [SMALL_STATE(4)] = 42,
  [SMALL_STATE(5)] = 61,
  [SMALL_STATE(6)] = 79,
  [SMALL_STATE(7)] = 107,
  [SMALL_STATE(8)] = 132,
  [SMALL_STATE(9)] = 157,
  [SMALL_STATE(10)] = 172,
  [SMALL_STATE(11)] = 187,
  [SMALL_STATE(12)] = 202,
  [SMALL_STATE(13)] = 217,
  [SMALL_STATE(14)] = 232,
  [SMALL_STATE(15)] = 254,
  [SMALL_STATE(16)] = 276,
  [SMALL_STATE(17)] = 298,
  [SMALL_STATE(18)] = 320,
  [SMALL_STATE(19)] = 342,
  [SMALL_STATE(20)] = 364,
  [SMALL_STATE(21)] = 386,
  [SMALL_STATE(22)] = 403,
  [SMALL_STATE(23)] = 420,
  [SMALL_STATE(24)] = 431,
  [SMALL_STATE(25)] = 441,
  [SMALL_STATE(26)] = 451,
  [SMALL_STATE(27)] = 461,
  [SMALL_STATE(28)] = 471,
  [SMALL_STATE(29)] = 481,
  [SMALL_STATE(30)] = 494,
  [SMALL_STATE(31)] = 507,
  [SMALL_STATE(32)] = 518,
  [SMALL_STATE(33)] = 531,
  [SMALL_STATE(34)] = 544,
  [SMALL_STATE(35)] = 557,
  [SMALL_STATE(36)] = 568,
  [SMALL_STATE(37)] = 581,
  [SMALL_STATE(38)] = 594,
  [SMALL_STATE(39)] = 605,
  [SMALL_STATE(40)] = 613,
  [SMALL_STATE(41)] = 623,
  [SMALL_STATE(42)] = 633,
  [SMALL_STATE(43)] = 643,
  [SMALL_STATE(44)] = 651,
  [SMALL_STATE(45)] = 659,
  [SMALL_STATE(46)] = 666,
  [SMALL_STATE(47)] = 673,
  [SMALL_STATE(48)] = 680,
  [SMALL_STATE(49)] = 687,
  [SMALL_STATE(50)] = 694,
  [SMALL_STATE(51)] = 701,
  [SMALL_STATE(52)] = 708,
  [SMALL_STATE(53)] = 715,
  [SMALL_STATE(54)] = 722,
  [SMALL_STATE(55)] = 729,
  [SMALL_STATE(56)] = 736,
  [SMALL_STATE(57)] = 743,
  [SMALL_STATE(58)] = 750,
  [SMALL_STATE(59)] = 757,
  [SMALL_STATE(60)] = 764,
  [SMALL_STATE(61)] = 771,
  [SMALL_STATE(62)] = 778,
  [SMALL_STATE(63)] = 785,
  [SMALL_STATE(64)] = 792,
  [SMALL_STATE(65)] = 799,
  [SMALL_STATE(66)] = 806,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_expression, 4, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2, 0, 0),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [28] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_arm, 4, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_definition_repeat1, 2, 0, 0),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition, 4, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_variant, 2, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_declaration, 7, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_declaration, 6, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 8, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 9, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_declaration_repeat1, 2, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2, 0, 0),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_annotation, 1, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [124] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
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
