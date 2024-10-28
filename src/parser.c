#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 303
#define LARGE_STATE_COUNT 26
#define SYMBOL_COUNT 95
#define ALIAS_COUNT 2
#define TOKEN_COUNT 52
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 12
#define PRODUCTION_ID_COUNT 6

enum ts_symbol_identifiers {
  sym_comment = 1,
  anon_sym_LBRACK = 2,
  anon_sym_COMMA = 3,
  anon_sym_RBRACK = 4,
  anon_sym_LPAREN = 5,
  anon_sym_RPAREN = 6,
  aux_sym_parameter_token1 = 7,
  aux_sym_parameter_token2 = 8,
  anon_sym_DOLLAR = 9,
  anon_sym_LBRACE = 10,
  anon_sym_RBRACE = 11,
  anon_sym_return = 12,
  anon_sym_SEMI = 13,
  anon_sym_if = 14,
  anon_sym_else = 15,
  anon_sym_while = 16,
  sym_switch_type_keyword = 17,
  anon_sym_case = 18,
  anon_sym_default = 19,
  anon_sym_COLON = 20,
  anon_sym_EQ = 21,
  sym_def_type_keyword = 22,
  anon_sym_GT = 23,
  anon_sym_GT_EQ = 24,
  anon_sym_LT = 25,
  anon_sym_LT_EQ = 26,
  anon_sym_BANG = 27,
  anon_sym_AMP = 28,
  anon_sym_PIPE = 29,
  anon_sym_calc = 30,
  anon_sym_STAR = 31,
  anon_sym_SLASH = 32,
  anon_sym_PERCENT = 33,
  anon_sym_PLUS = 34,
  anon_sym_DASH = 35,
  anon_sym_TILDE = 36,
  anon_sym_AT = 37,
  anon_sym_DOT_PERCENT = 38,
  anon_sym_CARET = 39,
  aux_sym_literal_token1 = 40,
  aux_sym_literal_token2 = 41,
  aux_sym_literal_token3 = 42,
  aux_sym_literal_token4 = 43,
  aux_sym_literal_token5 = 44,
  anon_sym_null = 45,
  anon_sym_DQUOTE = 46,
  sym_escape_sequence = 47,
  sym_string_tag = 48,
  sym_identifier = 49,
  aux_sym__advanced_identifier_token1 = 50,
  sym__string_chars = 51,
  sym_source_file = 52,
  sym_script = 53,
  sym_parameter_list = 54,
  sym_parameter = 55,
  sym_type_list = 56,
  sym_type = 57,
  sym__statement = 58,
  sym_block_statement = 59,
  sym_return_statement = 60,
  sym_if_statement = 61,
  sym_while_statement = 62,
  sym_switch_statement = 63,
  sym_switch_case = 64,
  sym_declaration_statement = 65,
  sym_array_declaration_statement = 66,
  sym_assignment_statement = 67,
  sym_expression_statement = 68,
  sym_empty_statement = 69,
  sym_expression_list = 70,
  sym_parenthesis = 71,
  sym__expression = 72,
  sym_condition = 73,
  sym_calc = 74,
  sym_arithmetic = 75,
  sym_call = 76,
  sym_assignable_variable_list = 77,
  sym_assignable_variable = 78,
  sym_local_variable = 79,
  sym_local_array_variable = 80,
  sym_game_variable = 81,
  sym_constant_variable = 82,
  sym_literal = 83,
  sym_string_literal = 84,
  sym_string_interpolation = 85,
  sym__advanced_identifier = 86,
  aux_sym_source_file_repeat1 = 87,
  aux_sym_script_repeat1 = 88,
  aux_sym_parameter_list_repeat1 = 89,
  aux_sym_type_list_repeat1 = 90,
  aux_sym_switch_statement_repeat1 = 91,
  aux_sym_expression_list_repeat1 = 92,
  aux_sym_assignable_variable_list_repeat1 = 93,
  aux_sym_string_literal_repeat1 = 94,
  alias_sym_declaration_variable = 95,
  alias_sym_parameter_variable = 96,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym_parameter_token1] = "parameter_token1",
  [aux_sym_parameter_token2] = "parameter_type",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_return] = "return",
  [anon_sym_SEMI] = ";",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_while] = "while",
  [sym_switch_type_keyword] = "switch_type_keyword",
  [anon_sym_case] = "case",
  [anon_sym_default] = "default",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
  [sym_def_type_keyword] = "def_type_keyword",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_BANG] = "!",
  [anon_sym_AMP] = "&",
  [anon_sym_PIPE] = "|",
  [anon_sym_calc] = "calc",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_TILDE] = "~",
  [anon_sym_AT] = "@",
  [anon_sym_DOT_PERCENT] = ".%",
  [anon_sym_CARET] = "^",
  [aux_sym_literal_token1] = "literal_token1",
  [aux_sym_literal_token2] = "literal_token2",
  [aux_sym_literal_token3] = "literal_token3",
  [aux_sym_literal_token4] = "literal_token4",
  [aux_sym_literal_token5] = "literal_token5",
  [anon_sym_null] = "null",
  [anon_sym_DQUOTE] = "\"",
  [sym_escape_sequence] = "escape_sequence",
  [sym_string_tag] = "string_tag",
  [sym_identifier] = "identifier",
  [aux_sym__advanced_identifier_token1] = "_advanced_identifier_token1",
  [sym__string_chars] = "string_fragment",
  [sym_source_file] = "source_file",
  [sym_script] = "script",
  [sym_parameter_list] = "parameter_list",
  [sym_parameter] = "parameter",
  [sym_type_list] = "type_list",
  [sym_type] = "type",
  [sym__statement] = "_statement",
  [sym_block_statement] = "block_statement",
  [sym_return_statement] = "return_statement",
  [sym_if_statement] = "if_statement",
  [sym_while_statement] = "while_statement",
  [sym_switch_statement] = "switch_statement",
  [sym_switch_case] = "switch_case",
  [sym_declaration_statement] = "declaration_statement",
  [sym_array_declaration_statement] = "array_declaration_statement",
  [sym_assignment_statement] = "assignment_statement",
  [sym_expression_statement] = "expression_statement",
  [sym_empty_statement] = "empty_statement",
  [sym_expression_list] = "expression_list",
  [sym_parenthesis] = "parenthesis",
  [sym__expression] = "_expression",
  [sym_condition] = "condition",
  [sym_calc] = "calc",
  [sym_arithmetic] = "arithmetic",
  [sym_call] = "call",
  [sym_assignable_variable_list] = "assignable_variable_list",
  [sym_assignable_variable] = "assignable_variable",
  [sym_local_variable] = "local_variable",
  [sym_local_array_variable] = "local_array_variable",
  [sym_game_variable] = "game_variable",
  [sym_constant_variable] = "constant_variable",
  [sym_literal] = "literal",
  [sym_string_literal] = "string_literal",
  [sym_string_interpolation] = "string_interpolation",
  [sym__advanced_identifier] = "_advanced_identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_script_repeat1] = "script_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_type_list_repeat1] = "type_list_repeat1",
  [aux_sym_switch_statement_repeat1] = "switch_statement_repeat1",
  [aux_sym_expression_list_repeat1] = "expression_list_repeat1",
  [aux_sym_assignable_variable_list_repeat1] = "assignable_variable_list_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [alias_sym_declaration_variable] = "declaration_variable",
  [alias_sym_parameter_variable] = "parameter_variable",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_parameter_token1] = aux_sym_parameter_token1,
  [aux_sym_parameter_token2] = aux_sym_parameter_token2,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_while] = anon_sym_while,
  [sym_switch_type_keyword] = sym_switch_type_keyword,
  [anon_sym_case] = anon_sym_case,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_def_type_keyword] = sym_def_type_keyword,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_calc] = anon_sym_calc,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_DOT_PERCENT] = anon_sym_DOT_PERCENT,
  [anon_sym_CARET] = anon_sym_CARET,
  [aux_sym_literal_token1] = aux_sym_literal_token1,
  [aux_sym_literal_token2] = aux_sym_literal_token2,
  [aux_sym_literal_token3] = aux_sym_literal_token3,
  [aux_sym_literal_token4] = aux_sym_literal_token4,
  [aux_sym_literal_token5] = aux_sym_literal_token5,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_string_tag] = sym_string_tag,
  [sym_identifier] = sym_identifier,
  [aux_sym__advanced_identifier_token1] = aux_sym__advanced_identifier_token1,
  [sym__string_chars] = sym__string_chars,
  [sym_source_file] = sym_source_file,
  [sym_script] = sym_script,
  [sym_parameter_list] = sym_parameter_list,
  [sym_parameter] = sym_parameter,
  [sym_type_list] = sym_type_list,
  [sym_type] = sym_type,
  [sym__statement] = sym__statement,
  [sym_block_statement] = sym_block_statement,
  [sym_return_statement] = sym_return_statement,
  [sym_if_statement] = sym_if_statement,
  [sym_while_statement] = sym_while_statement,
  [sym_switch_statement] = sym_switch_statement,
  [sym_switch_case] = sym_switch_case,
  [sym_declaration_statement] = sym_declaration_statement,
  [sym_array_declaration_statement] = sym_array_declaration_statement,
  [sym_assignment_statement] = sym_assignment_statement,
  [sym_expression_statement] = sym_expression_statement,
  [sym_empty_statement] = sym_empty_statement,
  [sym_expression_list] = sym_expression_list,
  [sym_parenthesis] = sym_parenthesis,
  [sym__expression] = sym__expression,
  [sym_condition] = sym_condition,
  [sym_calc] = sym_calc,
  [sym_arithmetic] = sym_arithmetic,
  [sym_call] = sym_call,
  [sym_assignable_variable_list] = sym_assignable_variable_list,
  [sym_assignable_variable] = sym_assignable_variable,
  [sym_local_variable] = sym_local_variable,
  [sym_local_array_variable] = sym_local_array_variable,
  [sym_game_variable] = sym_game_variable,
  [sym_constant_variable] = sym_constant_variable,
  [sym_literal] = sym_literal,
  [sym_string_literal] = sym_string_literal,
  [sym_string_interpolation] = sym_string_interpolation,
  [sym__advanced_identifier] = sym__advanced_identifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_script_repeat1] = aux_sym_script_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_type_list_repeat1] = aux_sym_type_list_repeat1,
  [aux_sym_switch_statement_repeat1] = aux_sym_switch_statement_repeat1,
  [aux_sym_expression_list_repeat1] = aux_sym_expression_list_repeat1,
  [aux_sym_assignable_variable_list_repeat1] = aux_sym_assignable_variable_list_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
  [alias_sym_declaration_variable] = alias_sym_declaration_variable,
  [alias_sym_parameter_variable] = alias_sym_parameter_variable,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
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
  [aux_sym_parameter_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_token2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR] = {
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
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [sym_switch_type_keyword] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_case] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_def_type_keyword] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_calc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_literal_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_literal_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_literal_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_literal_token5] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_string_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__advanced_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__string_chars] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_script] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_type_list] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_block_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_while_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_switch_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_switch_case] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_array_declaration_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_empty_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_list] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesis] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_calc] = {
    .visible = true,
    .named = true,
  },
  [sym_arithmetic] = {
    .visible = true,
    .named = true,
  },
  [sym_call] = {
    .visible = true,
    .named = true,
  },
  [sym_assignable_variable_list] = {
    .visible = true,
    .named = true,
  },
  [sym_assignable_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_local_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_local_array_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_game_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_constant_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_interpolation] = {
    .visible = true,
    .named = true,
  },
  [sym__advanced_identifier] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_script_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_switch_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_assignable_variable_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_declaration_variable] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_parameter_variable] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_callee = 1,
  field_name = 2,
  field_trigger = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_callee] = "callee",
  [field_name] = "name",
  [field_trigger] = "trigger",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 3},
    {field_trigger, 1},
  [2] =
    {field_callee, 0},
    {field_callee, 1},
  [4] =
    {field_callee, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [4] = {
    [0] = aux_sym_parameter_token2,
    [1] = alias_sym_parameter_variable,
    [2] = alias_sym_parameter_variable,
  },
  [5] = {
    [1] = alias_sym_declaration_variable,
    [2] = alias_sym_declaration_variable,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__advanced_identifier, 3,
    sym__advanced_identifier,
    alias_sym_declaration_variable,
    alias_sym_parameter_variable,
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
  [17] = 2,
  [18] = 18,
  [19] = 19,
  [20] = 18,
  [21] = 19,
  [22] = 18,
  [23] = 19,
  [24] = 18,
  [25] = 19,
  [26] = 26,
  [27] = 27,
  [28] = 26,
  [29] = 26,
  [30] = 30,
  [31] = 26,
  [32] = 27,
  [33] = 27,
  [34] = 27,
  [35] = 30,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 39,
  [43] = 43,
  [44] = 39,
  [45] = 39,
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
  [62] = 47,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 57,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 46,
  [77] = 77,
  [78] = 46,
  [79] = 77,
  [80] = 80,
  [81] = 46,
  [82] = 77,
  [83] = 47,
  [84] = 47,
  [85] = 77,
  [86] = 86,
  [87] = 71,
  [88] = 72,
  [89] = 89,
  [90] = 73,
  [91] = 58,
  [92] = 74,
  [93] = 61,
  [94] = 59,
  [95] = 65,
  [96] = 66,
  [97] = 97,
  [98] = 57,
  [99] = 68,
  [100] = 58,
  [101] = 59,
  [102] = 70,
  [103] = 61,
  [104] = 63,
  [105] = 64,
  [106] = 65,
  [107] = 66,
  [108] = 67,
  [109] = 68,
  [110] = 57,
  [111] = 70,
  [112] = 71,
  [113] = 72,
  [114] = 73,
  [115] = 74,
  [116] = 63,
  [117] = 60,
  [118] = 64,
  [119] = 119,
  [120] = 97,
  [121] = 97,
  [122] = 67,
  [123] = 97,
  [124] = 60,
  [125] = 74,
  [126] = 67,
  [127] = 65,
  [128] = 64,
  [129] = 58,
  [130] = 66,
  [131] = 59,
  [132] = 60,
  [133] = 61,
  [134] = 63,
  [135] = 68,
  [136] = 71,
  [137] = 70,
  [138] = 72,
  [139] = 73,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 156,
  [161] = 156,
  [162] = 162,
  [163] = 156,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 164,
  [168] = 168,
  [169] = 169,
  [170] = 164,
  [171] = 164,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 189,
  [194] = 192,
  [195] = 192,
  [196] = 192,
  [197] = 190,
  [198] = 198,
  [199] = 189,
  [200] = 190,
  [201] = 189,
  [202] = 190,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 212,
  [217] = 217,
  [218] = 218,
  [219] = 212,
  [220] = 212,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 225,
  [227] = 227,
  [228] = 225,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 225,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 235,
  [237] = 235,
  [238] = 235,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 248,
  [253] = 253,
  [254] = 240,
  [255] = 241,
  [256] = 256,
  [257] = 240,
  [258] = 244,
  [259] = 245,
  [260] = 250,
  [261] = 244,
  [262] = 262,
  [263] = 263,
  [264] = 262,
  [265] = 265,
  [266] = 240,
  [267] = 267,
  [268] = 268,
  [269] = 250,
  [270] = 262,
  [271] = 271,
  [272] = 244,
  [273] = 265,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 245,
  [278] = 262,
  [279] = 279,
  [280] = 245,
  [281] = 265,
  [282] = 265,
  [283] = 248,
  [284] = 246,
  [285] = 285,
  [286] = 263,
  [287] = 287,
  [288] = 241,
  [289] = 246,
  [290] = 250,
  [291] = 263,
  [292] = 287,
  [293] = 293,
  [294] = 246,
  [295] = 248,
  [296] = 263,
  [297] = 287,
  [298] = 287,
  [299] = 247,
  [300] = 247,
  [301] = 247,
  [302] = 241,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(34);
      ADVANCE_MAP(
        '!', 110,
        '"', 133,
        '$', 83,
        '%', 117,
        '&', 111,
        '\'', 16,
        '(', 40,
        ')', 41,
        '*', 115,
        '+', 118,
        ',', 38,
        '-', 119,
        '.', 136,
        '/', 116,
        '0', 137,
        ':', 98,
        ';', 87,
        '<', 107,
        '=', 99,
        '>', 105,
        '@', 121,
        '[', 37,
        '\\', 28,
        ']', 39,
        '^', 123,
        'c', 153,
        'd', 170,
        'e', 190,
        'f', 154,
        'i', 176,
        'n', 225,
        'r', 165,
        's', 231,
        't', 208,
        'w', 182,
        '{', 84,
        '|', 112,
        '}', 85,
        '~', 120,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '!', 110,
        '%', 117,
        '&', 111,
        '(', 40,
        ')', 41,
        '*', 115,
        '+', 118,
        ',', 38,
        '-', 119,
        '/', 116,
        ':', 98,
        ';', 87,
        '<', 108,
        '=', 99,
        '>', 105,
        '{', 84,
        '|', 112,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '"', 133,
        '$', 83,
        '%', 117,
        '\'', 16,
        '(', 40,
        ')', 41,
        '-', 29,
        '.', 136,
        '/', 8,
        '0', 124,
        '@', 121,
        '^', 123,
        'c', 242,
        'd', 172,
        'f', 154,
        'n', 225,
        's', 232,
        't', 208,
        '~', 120,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(125);
      if (lookahead == '+' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '"', 133,
        '$', 83,
        '%', 117,
        '\'', 16,
        '(', 40,
        ')', 41,
        '-', 29,
        '.', 42,
        '/', 8,
        '0', 43,
        '@', 121,
        '^', 123,
        'c', 50,
        'd', 56,
        'f', 82,
        'n', 74,
        's', 76,
        't', 66,
        '~', 120,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (lookahead == '+' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '"', 133,
        '$', 83,
        '%', 117,
        '\'', 16,
        '(', 40,
        '-', 29,
        '.', 136,
        '/', 8,
        '0', 124,
        ';', 87,
        '@', 121,
        '^', 123,
        'c', 153,
        'd', 175,
        'e', 190,
        'f', 154,
        'i', 176,
        'n', 225,
        'r', 165,
        's', 231,
        't', 208,
        'w', 182,
        '{', 84,
        '}', 85,
        '~', 120,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(125);
      if (lookahead == '+' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '"', 133,
        '$', 83,
        '%', 117,
        '\'', 16,
        '(', 40,
        '-', 29,
        '.', 136,
        '/', 8,
        '0', 124,
        ';', 87,
        '@', 121,
        '^', 123,
        'c', 153,
        'd', 175,
        'f', 154,
        'i', 176,
        'n', 225,
        'r', 165,
        's', 231,
        't', 208,
        'w', 182,
        '{', 84,
        '}', 85,
        '~', 120,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(125);
      if (lookahead == '+' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '"', 133,
        '$', 83,
        '%', 117,
        '\'', 16,
        '(', 40,
        '-', 29,
        '.', 136,
        '/', 8,
        '0', 124,
        '@', 121,
        '^', 123,
        'c', 242,
        'd', 173,
        'f', 154,
        'n', 225,
        's', 232,
        't', 208,
        '~', 120,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(125);
      if (lookahead == '+' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(130);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(36);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == ',') ADVANCE(30);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        '/', 8,
        '0', 151,
        'c', 243,
        'd', 172,
        'e', 204,
        'f', 244,
        'i', 178,
        'n', 230,
        'r', 174,
        's', 232,
        't', 215,
        'w', 185,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (lookahead == '+' ||
          ('.' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (lookahead == '+' ||
          ('.' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(30);
      if (lookahead == '>') ADVANCE(135);
      END_STATE();
    case 15:
      if (lookahead == '>') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '\\') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(7);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 18:
      if (lookahead == 'b') ADVANCE(25);
      if (lookahead == 'c') ADVANCE(24);
      if (lookahead == 'g') ADVANCE(26);
      if (lookahead == 'i') ADVANCE(23);
      if (lookahead == 'l') ADVANCE(26);
      if (lookahead == 's') ADVANCE(21);
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(14);
      END_STATE();
    case 20:
      if (lookahead == 'g') ADVANCE(14);
      END_STATE();
    case 21:
      if (lookahead == 'h') ADVANCE(17);
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 23:
      if (lookahead == 'm') ADVANCE(20);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 25:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 27:
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(7);
      END_STATE();
    case 28:
      if (lookahead == '"' ||
          lookahead == '<' ||
          lookahead == '\\') ADVANCE(134);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 30:
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(15);
      END_STATE();
    case 31:
      if (eof) ADVANCE(34);
      ADVANCE_MAP(
        '!', 110,
        '"', 133,
        '$', 83,
        '%', 117,
        '&', 111,
        '\'', 16,
        '(', 40,
        ')', 41,
        '*', 115,
        '+', 118,
        ',', 38,
        '-', 119,
        '.', 136,
        '/', 116,
        '0', 137,
        ':', 98,
        ';', 87,
        '<', 108,
        '=', 99,
        '>', 105,
        '@', 121,
        '[', 37,
        ']', 39,
        '^', 123,
        'c', 153,
        'd', 170,
        'e', 190,
        'f', 154,
        'i', 176,
        'n', 225,
        'r', 165,
        's', 231,
        't', 208,
        'w', 182,
        '{', 84,
        '|', 112,
        '}', 85,
        '~', 120,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 32:
      if (eof) ADVANCE(34);
      ADVANCE_MAP(
        '!', 110,
        '"', 133,
        '$', 83,
        '%', 117,
        '&', 111,
        '\'', 16,
        '(', 40,
        ')', 41,
        '-', 29,
        '.', 136,
        '/', 8,
        '0', 124,
        ';', 87,
        '<', 108,
        '=', 99,
        '>', 105,
        '@', 121,
        '[', 37,
        '^', 123,
        'c', 242,
        'd', 175,
        'f', 154,
        'i', 176,
        'n', 225,
        'r', 165,
        's', 231,
        't', 208,
        'w', 182,
        '{', 84,
        '|', 112,
        '}', 85,
        '~', 120,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(32);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(125);
      if (lookahead == '+' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 33:
      if (eof) ADVANCE(34);
      ADVANCE_MAP(
        '"', 133,
        '$', 83,
        '%', 117,
        '\'', 16,
        '(', 40,
        '-', 29,
        '.', 136,
        '/', 8,
        '0', 124,
        ';', 87,
        '@', 121,
        '[', 37,
        '^', 123,
        'c', 242,
        'd', 175,
        'e', 190,
        'f', 154,
        'i', 176,
        'n', 225,
        'r', 165,
        's', 231,
        't', 208,
        'w', 182,
        '{', 84,
        '}', 85,
        '~', 120,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(33);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(125);
      if (lookahead == '+' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == '%') ADVANCE(122);
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == '_') ADVANCE(80);
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (lookahead == '+' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == '_') ADVANCE(80);
      if (lookahead == 'a') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (lookahead == '+' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == '_') ADVANCE(81);
      if (lookahead == 'a') ADVANCE(68);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == '_') ADVANCE(81);
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == '_') ADVANCE(77);
      if (lookahead == 'a') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == '_') ADVANCE(78);
      if (lookahead == 'a') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == '_') ADVANCE(79);
      if (lookahead == 'a') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (lookahead == '+' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'a') ADVANCE(61);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'a') ADVANCE(51);
      if (lookahead == 'r') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      if (lookahead == '+' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'a') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      if (lookahead == '+' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'a') ADVANCE(69);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == 'c') ADVANCE(114);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == 'c') ADVANCE(59);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == 'e') ADVANCE(58);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == 'e') ADVANCE(81);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == 'f') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == 'h') ADVANCE(46);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == 'i') ADVANCE(73);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == 'l') ADVANCE(54);
      if (lookahead == 'r') ADVANCE(67);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == 'l') ADVANCE(71);
      if (lookahead == 'r') ADVANCE(67);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == 'l') ADVANCE(132);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == 'l') ADVANCE(63);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == 'l') ADVANCE(72);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == 'r') ADVANCE(75);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == 'r') ADVANCE(53);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == 'r') ADVANCE(67);
      if (lookahead == 'u') ADVANCE(65);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == 'r') ADVANCE(67);
      if (lookahead == 'y') ADVANCE(81);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == 'r') ADVANCE(67);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == 's') ADVANCE(57);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == 't') ADVANCE(81);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == 't') ADVANCE(55);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == 'u') ADVANCE(64);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == 'u') ADVANCE(57);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == 'w') ADVANCE(60);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'a') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (lookahead == '+' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'a') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'a') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'a') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (lookahead == '+' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_switch_type_keyword);
      if (lookahead == 'a') ADVANCE(92);
      if (lookahead == 'r') ADVANCE(93);
      if (lookahead == 'y') ADVANCE(94);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_switch_type_keyword);
      if (lookahead == 'a') ADVANCE(92);
      if (lookahead == 'r') ADVANCE(93);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_switch_type_keyword);
      if (lookahead == 'a') ADVANCE(92);
      if (lookahead == 'r') ADVANCE(95);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_switch_type_keyword);
      if (lookahead == 'a') ADVANCE(92);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_switch_type_keyword);
      if (lookahead == 'a') ADVANCE(91);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_def_type_keyword);
      if (lookahead == 'a') ADVANCE(101);
      if (lookahead == 'r') ADVANCE(102);
      if (lookahead == 'y') ADVANCE(103);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_def_type_keyword);
      if (lookahead == 'a') ADVANCE(101);
      if (lookahead == 'r') ADVANCE(102);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_def_type_keyword);
      if (lookahead == 'a') ADVANCE(101);
      if (lookahead == 'r') ADVANCE(104);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_def_type_keyword);
      if (lookahead == 'a') ADVANCE(101);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_def_type_keyword);
      if (lookahead == 'a') ADVANCE(100);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(106);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_LT);
      ADVANCE_MAP(
        '/', 18,
        '=', 109,
        'b', 25,
        'c', 24,
        'g', 26,
        'i', 23,
        'l', 26,
        'p', 11,
        's', 21,
        'u', 14,
      );
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(109);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_calc);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_calc);
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(36);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_DOT_PERCENT);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == '_') ADVANCE(239);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == '_') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_literal_token2);
      if (lookahead == 'a') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_literal_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_literal_token4);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_literal_token5);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_null);
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_string_tag);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '%') ADVANCE(122);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(239);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (lookahead == '+' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(239);
      if (lookahead == 'a') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (lookahead == '+' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == 'a') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      if (lookahead == '+' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(241);
      if (lookahead == 'a') ADVANCE(210);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(241);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(241);
      if (lookahead == 'a') ADVANCE(211);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(234);
      if (lookahead == 'a') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      if (lookahead == '+' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(157);
      if (lookahead == 'a') ADVANCE(210);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(157);
      if (lookahead == 'a') ADVANCE(211);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(158);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(235);
      if (lookahead == 'a') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      if (lookahead == '+' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(236);
      if (lookahead == 'a') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (lookahead == '+' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(237);
      if (lookahead == 'a') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (lookahead == '+' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(238);
      if (lookahead == 'a') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      if (lookahead == '+' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(240);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (lookahead == '+' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(240);
      if (lookahead == 'a') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (lookahead == '+' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(191);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(202);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      if (lookahead == '+' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(212);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(101);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(92);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(159);
      if (lookahead == 'r') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(160);
      if (lookahead == '+' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(160);
      if (lookahead == '+' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'c') ADVANCE(113);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'c') ADVANCE(183);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'c') ADVANCE(241);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'c') ADVANCE(184);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'e') ADVANCE(222);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'e') ADVANCE(96);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'e') ADVANCE(89);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'e') ADVANCE(129);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'e') ADVANCE(90);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'e') ADVANCE(177);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'e') ADVANCE(241);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'e') ADVANCE(179);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'e') ADVANCE(180);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'e') ADVANCE(223);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'e') ADVANCE(181);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'f') ADVANCE(88);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'f') ADVANCE(144);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'f') ADVANCE(241);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'f') ADVANCE(142);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'f') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'f') ADVANCE(145);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'h') ADVANCE(187);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'h') ADVANCE(146);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'h') ADVANCE(141);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'h') ADVANCE(188);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'i') ADVANCE(220);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'i') ADVANCE(199);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'i') ADVANCE(200);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'i') ADVANCE(224);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'l') ADVANCE(216);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'l') ADVANCE(161);
      if (lookahead == 'r') ADVANCE(214);
      if (lookahead == 's') ADVANCE(166);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'l') ADVANCE(161);
      if (lookahead == 'r') ADVANCE(214);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'l') ADVANCE(131);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'l') ADVANCE(241);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'l') ADVANCE(193);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'l') ADVANCE(219);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'l') ADVANCE(163);
      if (lookahead == 'r') ADVANCE(214);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'l') ADVANCE(221);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'l') ADVANCE(169);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'l') ADVANCE(171);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'l') ADVANCE(194);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'l') ADVANCE(217);
      if (lookahead == 'r') ADVANCE(214);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'l') ADVANCE(218);
      if (lookahead == 'r') ADVANCE(214);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'l') ADVANCE(218);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'n') ADVANCE(86);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'n') ADVANCE(241);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'r') ADVANCE(205);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'r') ADVANCE(227);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'r') ADVANCE(206);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'r') ADVANCE(214);
      if (lookahead == 'u') ADVANCE(196);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'r') ADVANCE(214);
      if (lookahead == 'u') ADVANCE(198);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'r') ADVANCE(214);
      if (lookahead == 'y') ADVANCE(241);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'r') ADVANCE(214);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'r') ADVANCE(156);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'r') ADVANCE(229);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 's') ADVANCE(167);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 's') ADVANCE(168);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 's') ADVANCE(171);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 't') ADVANCE(97);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 't') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 't') ADVANCE(241);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 't') ADVANCE(226);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 't') ADVANCE(228);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 't') ADVANCE(164);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'u') ADVANCE(195);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'u') ADVANCE(207);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'u') ADVANCE(168);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'u') ADVANCE(209);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'u') ADVANCE(171);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'u') ADVANCE(201);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'w') ADVANCE(186);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'w') ADVANCE(189);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (lookahead == '+' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      if (lookahead == '+' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      if (lookahead == '+' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      if (lookahead == '+' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      if (lookahead == '+' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (lookahead == '+' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (lookahead == '+' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      if (lookahead == '+' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(192);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(197);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(203);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 32},
  [3] = {.lex_state = 32},
  [4] = {.lex_state = 32},
  [5] = {.lex_state = 32},
  [6] = {.lex_state = 32},
  [7] = {.lex_state = 32},
  [8] = {.lex_state = 32},
  [9] = {.lex_state = 32},
  [10] = {.lex_state = 32},
  [11] = {.lex_state = 32},
  [12] = {.lex_state = 32},
  [13] = {.lex_state = 32},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 32},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 32},
  [19] = {.lex_state = 32},
  [20] = {.lex_state = 32},
  [21] = {.lex_state = 32},
  [22] = {.lex_state = 32},
  [23] = {.lex_state = 32},
  [24] = {.lex_state = 32},
  [25] = {.lex_state = 32},
  [26] = {.lex_state = 32},
  [27] = {.lex_state = 32},
  [28] = {.lex_state = 32},
  [29] = {.lex_state = 32},
  [30] = {.lex_state = 32},
  [31] = {.lex_state = 32},
  [32] = {.lex_state = 32},
  [33] = {.lex_state = 32},
  [34] = {.lex_state = 32},
  [35] = {.lex_state = 32},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 33},
  [58] = {.lex_state = 33},
  [59] = {.lex_state = 33},
  [60] = {.lex_state = 33},
  [61] = {.lex_state = 33},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 33},
  [64] = {.lex_state = 33},
  [65] = {.lex_state = 33},
  [66] = {.lex_state = 33},
  [67] = {.lex_state = 33},
  [68] = {.lex_state = 33},
  [69] = {.lex_state = 33},
  [70] = {.lex_state = 33},
  [71] = {.lex_state = 33},
  [72] = {.lex_state = 33},
  [73] = {.lex_state = 33},
  [74] = {.lex_state = 33},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 32},
  [88] = {.lex_state = 32},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 32},
  [91] = {.lex_state = 32},
  [92] = {.lex_state = 32},
  [93] = {.lex_state = 32},
  [94] = {.lex_state = 32},
  [95] = {.lex_state = 32},
  [96] = {.lex_state = 32},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 32},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 32},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 32},
  [117] = {.lex_state = 32},
  [118] = {.lex_state = 32},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 32},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 5},
  [126] = {.lex_state = 5},
  [127] = {.lex_state = 5},
  [128] = {.lex_state = 5},
  [129] = {.lex_state = 5},
  [130] = {.lex_state = 5},
  [131] = {.lex_state = 5},
  [132] = {.lex_state = 5},
  [133] = {.lex_state = 5},
  [134] = {.lex_state = 5},
  [135] = {.lex_state = 5},
  [136] = {.lex_state = 5},
  [137] = {.lex_state = 5},
  [138] = {.lex_state = 5},
  [139] = {.lex_state = 5},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 1},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 1},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 32},
  [157] = {.lex_state = 32},
  [158] = {.lex_state = 32},
  [159] = {.lex_state = 32},
  [160] = {.lex_state = 32},
  [161] = {.lex_state = 32},
  [162] = {.lex_state = 32},
  [163] = {.lex_state = 32},
  [164] = {.lex_state = 32},
  [165] = {.lex_state = 32},
  [166] = {.lex_state = 32},
  [167] = {.lex_state = 32},
  [168] = {.lex_state = 32},
  [169] = {.lex_state = 32},
  [170] = {.lex_state = 32},
  [171] = {.lex_state = 32},
  [172] = {.lex_state = 1},
  [173] = {.lex_state = 1},
  [174] = {.lex_state = 1},
  [175] = {.lex_state = 1},
  [176] = {.lex_state = 1},
  [177] = {.lex_state = 1},
  [178] = {.lex_state = 1},
  [179] = {.lex_state = 1},
  [180] = {.lex_state = 1},
  [181] = {.lex_state = 0, .external_lex_state = 1},
  [182] = {.lex_state = 0, .external_lex_state = 1},
  [183] = {.lex_state = 0, .external_lex_state = 1},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 1},
  [186] = {.lex_state = 1},
  [187] = {.lex_state = 0, .external_lex_state = 1},
  [188] = {.lex_state = 1},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 1},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 13},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 12},
  [211] = {.lex_state = 12},
  [212] = {.lex_state = 12},
  [213] = {.lex_state = 12},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 12},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 12},
  [220] = {.lex_state = 12},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 12},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 13},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 12},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 12},
  [275] = {.lex_state = 1},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 12},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [sym_switch_type_keyword] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_def_type_keyword] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_calc] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_DOT_PERCENT] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [aux_sym_literal_token2] = ACTIONS(1),
    [aux_sym_literal_token3] = ACTIONS(1),
    [aux_sym_literal_token4] = ACTIONS(1),
    [aux_sym_literal_token5] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_string_tag] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [aux_sym__advanced_identifier_token1] = ACTIONS(1),
    [sym__string_chars] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(249),
    [sym_script] = STATE(198),
    [aux_sym_source_file_repeat1] = STATE(198),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(7),
  },
  [2] = {
    [sym__statement] = STATE(2),
    [sym_block_statement] = STATE(2),
    [sym_return_statement] = STATE(2),
    [sym_if_statement] = STATE(2),
    [sym_while_statement] = STATE(2),
    [sym_switch_statement] = STATE(2),
    [sym_declaration_statement] = STATE(2),
    [sym_array_declaration_statement] = STATE(2),
    [sym_assignment_statement] = STATE(2),
    [sym_expression_statement] = STATE(2),
    [sym_empty_statement] = STATE(2),
    [sym_parenthesis] = STATE(295),
    [sym__expression] = STATE(295),
    [sym_calc] = STATE(295),
    [sym_call] = STATE(295),
    [sym_assignable_variable_list] = STATE(298),
    [sym_assignable_variable] = STATE(205),
    [sym_local_variable] = STATE(214),
    [sym_local_array_variable] = STATE(214),
    [sym_game_variable] = STATE(214),
    [sym_constant_variable] = STATE(295),
    [sym_literal] = STATE(295),
    [sym_string_literal] = STATE(149),
    [aux_sym_script_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(14),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_RBRACE] = ACTIONS(9),
    [anon_sym_return] = ACTIONS(20),
    [anon_sym_SEMI] = ACTIONS(23),
    [anon_sym_if] = ACTIONS(26),
    [anon_sym_while] = ACTIONS(29),
    [sym_switch_type_keyword] = ACTIONS(32),
    [sym_def_type_keyword] = ACTIONS(35),
    [anon_sym_calc] = ACTIONS(38),
    [anon_sym_PERCENT] = ACTIONS(41),
    [anon_sym_TILDE] = ACTIONS(44),
    [anon_sym_AT] = ACTIONS(44),
    [anon_sym_DOT_PERCENT] = ACTIONS(41),
    [anon_sym_CARET] = ACTIONS(47),
    [aux_sym_literal_token1] = ACTIONS(50),
    [aux_sym_literal_token2] = ACTIONS(53),
    [aux_sym_literal_token3] = ACTIONS(53),
    [aux_sym_literal_token4] = ACTIONS(53),
    [aux_sym_literal_token5] = ACTIONS(53),
    [anon_sym_null] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(56),
    [sym_identifier] = ACTIONS(59),
  },
  [3] = {
    [sym__statement] = STATE(7),
    [sym_block_statement] = STATE(7),
    [sym_return_statement] = STATE(7),
    [sym_if_statement] = STATE(7),
    [sym_while_statement] = STATE(7),
    [sym_switch_statement] = STATE(7),
    [sym_declaration_statement] = STATE(7),
    [sym_array_declaration_statement] = STATE(7),
    [sym_assignment_statement] = STATE(7),
    [sym_expression_statement] = STATE(7),
    [sym_empty_statement] = STATE(7),
    [sym_parenthesis] = STATE(295),
    [sym__expression] = STATE(295),
    [sym_calc] = STATE(295),
    [sym_call] = STATE(295),
    [sym_assignable_variable_list] = STATE(298),
    [sym_assignable_variable] = STATE(205),
    [sym_local_variable] = STATE(214),
    [sym_local_array_variable] = STATE(214),
    [sym_game_variable] = STATE(214),
    [sym_constant_variable] = STATE(295),
    [sym_literal] = STATE(295),
    [sym_string_literal] = STATE(149),
    [aux_sym_script_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(62),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(62),
    [anon_sym_LPAREN] = ACTIONS(64),
    [anon_sym_DOLLAR] = ACTIONS(66),
    [anon_sym_LBRACE] = ACTIONS(68),
    [anon_sym_return] = ACTIONS(70),
    [anon_sym_SEMI] = ACTIONS(72),
    [anon_sym_if] = ACTIONS(74),
    [anon_sym_while] = ACTIONS(76),
    [sym_switch_type_keyword] = ACTIONS(78),
    [sym_def_type_keyword] = ACTIONS(80),
    [anon_sym_calc] = ACTIONS(82),
    [anon_sym_PERCENT] = ACTIONS(84),
    [anon_sym_TILDE] = ACTIONS(86),
    [anon_sym_AT] = ACTIONS(86),
    [anon_sym_DOT_PERCENT] = ACTIONS(84),
    [anon_sym_CARET] = ACTIONS(88),
    [aux_sym_literal_token1] = ACTIONS(90),
    [aux_sym_literal_token2] = ACTIONS(92),
    [aux_sym_literal_token3] = ACTIONS(92),
    [aux_sym_literal_token4] = ACTIONS(92),
    [aux_sym_literal_token5] = ACTIONS(92),
    [anon_sym_null] = ACTIONS(92),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [sym_identifier] = ACTIONS(96),
  },
  [4] = {
    [sym__statement] = STATE(8),
    [sym_block_statement] = STATE(8),
    [sym_return_statement] = STATE(8),
    [sym_if_statement] = STATE(8),
    [sym_while_statement] = STATE(8),
    [sym_switch_statement] = STATE(8),
    [sym_declaration_statement] = STATE(8),
    [sym_array_declaration_statement] = STATE(8),
    [sym_assignment_statement] = STATE(8),
    [sym_expression_statement] = STATE(8),
    [sym_empty_statement] = STATE(8),
    [sym_parenthesis] = STATE(295),
    [sym__expression] = STATE(295),
    [sym_calc] = STATE(295),
    [sym_call] = STATE(295),
    [sym_assignable_variable_list] = STATE(298),
    [sym_assignable_variable] = STATE(205),
    [sym_local_variable] = STATE(214),
    [sym_local_array_variable] = STATE(214),
    [sym_game_variable] = STATE(214),
    [sym_constant_variable] = STATE(295),
    [sym_literal] = STATE(295),
    [sym_string_literal] = STATE(149),
    [aux_sym_script_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(98),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(98),
    [anon_sym_LPAREN] = ACTIONS(100),
    [anon_sym_DOLLAR] = ACTIONS(66),
    [anon_sym_LBRACE] = ACTIONS(68),
    [anon_sym_return] = ACTIONS(70),
    [anon_sym_SEMI] = ACTIONS(72),
    [anon_sym_if] = ACTIONS(74),
    [anon_sym_while] = ACTIONS(76),
    [sym_switch_type_keyword] = ACTIONS(78),
    [sym_def_type_keyword] = ACTIONS(80),
    [anon_sym_calc] = ACTIONS(82),
    [anon_sym_PERCENT] = ACTIONS(84),
    [anon_sym_TILDE] = ACTIONS(86),
    [anon_sym_AT] = ACTIONS(86),
    [anon_sym_DOT_PERCENT] = ACTIONS(84),
    [anon_sym_CARET] = ACTIONS(88),
    [aux_sym_literal_token1] = ACTIONS(90),
    [aux_sym_literal_token2] = ACTIONS(92),
    [aux_sym_literal_token3] = ACTIONS(92),
    [aux_sym_literal_token4] = ACTIONS(92),
    [aux_sym_literal_token5] = ACTIONS(92),
    [anon_sym_null] = ACTIONS(92),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [sym_identifier] = ACTIONS(96),
  },
  [5] = {
    [sym__statement] = STATE(2),
    [sym_block_statement] = STATE(2),
    [sym_return_statement] = STATE(2),
    [sym_if_statement] = STATE(2),
    [sym_while_statement] = STATE(2),
    [sym_switch_statement] = STATE(2),
    [sym_declaration_statement] = STATE(2),
    [sym_array_declaration_statement] = STATE(2),
    [sym_assignment_statement] = STATE(2),
    [sym_expression_statement] = STATE(2),
    [sym_empty_statement] = STATE(2),
    [sym_parenthesis] = STATE(295),
    [sym__expression] = STATE(295),
    [sym_calc] = STATE(295),
    [sym_call] = STATE(295),
    [sym_assignable_variable_list] = STATE(298),
    [sym_assignable_variable] = STATE(205),
    [sym_local_variable] = STATE(214),
    [sym_local_array_variable] = STATE(214),
    [sym_game_variable] = STATE(214),
    [sym_constant_variable] = STATE(295),
    [sym_literal] = STATE(295),
    [sym_string_literal] = STATE(149),
    [aux_sym_script_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(102),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(102),
    [anon_sym_LPAREN] = ACTIONS(104),
    [anon_sym_DOLLAR] = ACTIONS(66),
    [anon_sym_LBRACE] = ACTIONS(68),
    [anon_sym_return] = ACTIONS(70),
    [anon_sym_SEMI] = ACTIONS(72),
    [anon_sym_if] = ACTIONS(74),
    [anon_sym_while] = ACTIONS(76),
    [sym_switch_type_keyword] = ACTIONS(78),
    [sym_def_type_keyword] = ACTIONS(80),
    [anon_sym_calc] = ACTIONS(82),
    [anon_sym_PERCENT] = ACTIONS(84),
    [anon_sym_TILDE] = ACTIONS(86),
    [anon_sym_AT] = ACTIONS(86),
    [anon_sym_DOT_PERCENT] = ACTIONS(84),
    [anon_sym_CARET] = ACTIONS(88),
    [aux_sym_literal_token1] = ACTIONS(90),
    [aux_sym_literal_token2] = ACTIONS(92),
    [aux_sym_literal_token3] = ACTIONS(92),
    [aux_sym_literal_token4] = ACTIONS(92),
    [aux_sym_literal_token5] = ACTIONS(92),
    [anon_sym_null] = ACTIONS(92),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [sym_identifier] = ACTIONS(96),
  },
  [6] = {
    [sym__statement] = STATE(10),
    [sym_block_statement] = STATE(10),
    [sym_return_statement] = STATE(10),
    [sym_if_statement] = STATE(10),
    [sym_while_statement] = STATE(10),
    [sym_switch_statement] = STATE(10),
    [sym_declaration_statement] = STATE(10),
    [sym_array_declaration_statement] = STATE(10),
    [sym_assignment_statement] = STATE(10),
    [sym_expression_statement] = STATE(10),
    [sym_empty_statement] = STATE(10),
    [sym_parenthesis] = STATE(295),
    [sym__expression] = STATE(295),
    [sym_calc] = STATE(295),
    [sym_call] = STATE(295),
    [sym_assignable_variable_list] = STATE(298),
    [sym_assignable_variable] = STATE(205),
    [sym_local_variable] = STATE(214),
    [sym_local_array_variable] = STATE(214),
    [sym_game_variable] = STATE(214),
    [sym_constant_variable] = STATE(295),
    [sym_literal] = STATE(295),
    [sym_string_literal] = STATE(149),
    [aux_sym_script_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(102),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(102),
    [anon_sym_LPAREN] = ACTIONS(104),
    [anon_sym_DOLLAR] = ACTIONS(66),
    [anon_sym_LBRACE] = ACTIONS(68),
    [anon_sym_return] = ACTIONS(70),
    [anon_sym_SEMI] = ACTIONS(72),
    [anon_sym_if] = ACTIONS(74),
    [anon_sym_while] = ACTIONS(76),
    [sym_switch_type_keyword] = ACTIONS(78),
    [sym_def_type_keyword] = ACTIONS(80),
    [anon_sym_calc] = ACTIONS(82),
    [anon_sym_PERCENT] = ACTIONS(84),
    [anon_sym_TILDE] = ACTIONS(86),
    [anon_sym_AT] = ACTIONS(86),
    [anon_sym_DOT_PERCENT] = ACTIONS(84),
    [anon_sym_CARET] = ACTIONS(88),
    [aux_sym_literal_token1] = ACTIONS(90),
    [aux_sym_literal_token2] = ACTIONS(92),
    [aux_sym_literal_token3] = ACTIONS(92),
    [aux_sym_literal_token4] = ACTIONS(92),
    [aux_sym_literal_token5] = ACTIONS(92),
    [anon_sym_null] = ACTIONS(92),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [sym_identifier] = ACTIONS(96),
  },
  [7] = {
    [sym__statement] = STATE(2),
    [sym_block_statement] = STATE(2),
    [sym_return_statement] = STATE(2),
    [sym_if_statement] = STATE(2),
    [sym_while_statement] = STATE(2),
    [sym_switch_statement] = STATE(2),
    [sym_declaration_statement] = STATE(2),
    [sym_array_declaration_statement] = STATE(2),
    [sym_assignment_statement] = STATE(2),
    [sym_expression_statement] = STATE(2),
    [sym_empty_statement] = STATE(2),
    [sym_parenthesis] = STATE(295),
    [sym__expression] = STATE(295),
    [sym_calc] = STATE(295),
    [sym_call] = STATE(295),
    [sym_assignable_variable_list] = STATE(298),
    [sym_assignable_variable] = STATE(205),
    [sym_local_variable] = STATE(214),
    [sym_local_array_variable] = STATE(214),
    [sym_game_variable] = STATE(214),
    [sym_constant_variable] = STATE(295),
    [sym_literal] = STATE(295),
    [sym_string_literal] = STATE(149),
    [aux_sym_script_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(106),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(106),
    [anon_sym_LPAREN] = ACTIONS(104),
    [anon_sym_DOLLAR] = ACTIONS(66),
    [anon_sym_LBRACE] = ACTIONS(68),
    [anon_sym_return] = ACTIONS(70),
    [anon_sym_SEMI] = ACTIONS(72),
    [anon_sym_if] = ACTIONS(74),
    [anon_sym_while] = ACTIONS(76),
    [sym_switch_type_keyword] = ACTIONS(78),
    [sym_def_type_keyword] = ACTIONS(80),
    [anon_sym_calc] = ACTIONS(82),
    [anon_sym_PERCENT] = ACTIONS(84),
    [anon_sym_TILDE] = ACTIONS(86),
    [anon_sym_AT] = ACTIONS(86),
    [anon_sym_DOT_PERCENT] = ACTIONS(84),
    [anon_sym_CARET] = ACTIONS(88),
    [aux_sym_literal_token1] = ACTIONS(90),
    [aux_sym_literal_token2] = ACTIONS(92),
    [aux_sym_literal_token3] = ACTIONS(92),
    [aux_sym_literal_token4] = ACTIONS(92),
    [aux_sym_literal_token5] = ACTIONS(92),
    [anon_sym_null] = ACTIONS(92),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [sym_identifier] = ACTIONS(96),
  },
  [8] = {
    [sym__statement] = STATE(2),
    [sym_block_statement] = STATE(2),
    [sym_return_statement] = STATE(2),
    [sym_if_statement] = STATE(2),
    [sym_while_statement] = STATE(2),
    [sym_switch_statement] = STATE(2),
    [sym_declaration_statement] = STATE(2),
    [sym_array_declaration_statement] = STATE(2),
    [sym_assignment_statement] = STATE(2),
    [sym_expression_statement] = STATE(2),
    [sym_empty_statement] = STATE(2),
    [sym_parenthesis] = STATE(295),
    [sym__expression] = STATE(295),
    [sym_calc] = STATE(295),
    [sym_call] = STATE(295),
    [sym_assignable_variable_list] = STATE(298),
    [sym_assignable_variable] = STATE(205),
    [sym_local_variable] = STATE(214),
    [sym_local_array_variable] = STATE(214),
    [sym_game_variable] = STATE(214),
    [sym_constant_variable] = STATE(295),
    [sym_literal] = STATE(295),
    [sym_string_literal] = STATE(149),
    [aux_sym_script_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(108),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(108),
    [anon_sym_LPAREN] = ACTIONS(104),
    [anon_sym_DOLLAR] = ACTIONS(66),
    [anon_sym_LBRACE] = ACTIONS(68),
    [anon_sym_return] = ACTIONS(70),
    [anon_sym_SEMI] = ACTIONS(72),
    [anon_sym_if] = ACTIONS(74),
    [anon_sym_while] = ACTIONS(76),
    [sym_switch_type_keyword] = ACTIONS(78),
    [sym_def_type_keyword] = ACTIONS(80),
    [anon_sym_calc] = ACTIONS(82),
    [anon_sym_PERCENT] = ACTIONS(84),
    [anon_sym_TILDE] = ACTIONS(86),
    [anon_sym_AT] = ACTIONS(86),
    [anon_sym_DOT_PERCENT] = ACTIONS(84),
    [anon_sym_CARET] = ACTIONS(88),
    [aux_sym_literal_token1] = ACTIONS(90),
    [aux_sym_literal_token2] = ACTIONS(92),
    [aux_sym_literal_token3] = ACTIONS(92),
    [aux_sym_literal_token4] = ACTIONS(92),
    [aux_sym_literal_token5] = ACTIONS(92),
    [anon_sym_null] = ACTIONS(92),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [sym_identifier] = ACTIONS(96),
  },
  [9] = {
    [sym__statement] = STATE(5),
    [sym_block_statement] = STATE(5),
    [sym_return_statement] = STATE(5),
    [sym_if_statement] = STATE(5),
    [sym_while_statement] = STATE(5),
    [sym_switch_statement] = STATE(5),
    [sym_declaration_statement] = STATE(5),
    [sym_array_declaration_statement] = STATE(5),
    [sym_assignment_statement] = STATE(5),
    [sym_expression_statement] = STATE(5),
    [sym_empty_statement] = STATE(5),
    [sym_parenthesis] = STATE(295),
    [sym__expression] = STATE(295),
    [sym_calc] = STATE(295),
    [sym_call] = STATE(295),
    [sym_assignable_variable_list] = STATE(298),
    [sym_assignable_variable] = STATE(205),
    [sym_local_variable] = STATE(214),
    [sym_local_array_variable] = STATE(214),
    [sym_game_variable] = STATE(214),
    [sym_constant_variable] = STATE(295),
    [sym_literal] = STATE(295),
    [sym_string_literal] = STATE(149),
    [aux_sym_script_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(108),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(108),
    [anon_sym_LPAREN] = ACTIONS(110),
    [anon_sym_DOLLAR] = ACTIONS(66),
    [anon_sym_LBRACE] = ACTIONS(68),
    [anon_sym_return] = ACTIONS(70),
    [anon_sym_SEMI] = ACTIONS(72),
    [anon_sym_if] = ACTIONS(74),
    [anon_sym_while] = ACTIONS(76),
    [sym_switch_type_keyword] = ACTIONS(78),
    [sym_def_type_keyword] = ACTIONS(80),
    [anon_sym_calc] = ACTIONS(82),
    [anon_sym_PERCENT] = ACTIONS(84),
    [anon_sym_TILDE] = ACTIONS(86),
    [anon_sym_AT] = ACTIONS(86),
    [anon_sym_DOT_PERCENT] = ACTIONS(84),
    [anon_sym_CARET] = ACTIONS(88),
    [aux_sym_literal_token1] = ACTIONS(90),
    [aux_sym_literal_token2] = ACTIONS(92),
    [aux_sym_literal_token3] = ACTIONS(92),
    [aux_sym_literal_token4] = ACTIONS(92),
    [aux_sym_literal_token5] = ACTIONS(92),
    [anon_sym_null] = ACTIONS(92),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [sym_identifier] = ACTIONS(96),
  },
  [10] = {
    [sym__statement] = STATE(2),
    [sym_block_statement] = STATE(2),
    [sym_return_statement] = STATE(2),
    [sym_if_statement] = STATE(2),
    [sym_while_statement] = STATE(2),
    [sym_switch_statement] = STATE(2),
    [sym_declaration_statement] = STATE(2),
    [sym_array_declaration_statement] = STATE(2),
    [sym_assignment_statement] = STATE(2),
    [sym_expression_statement] = STATE(2),
    [sym_empty_statement] = STATE(2),
    [sym_parenthesis] = STATE(295),
    [sym__expression] = STATE(295),
    [sym_calc] = STATE(295),
    [sym_call] = STATE(295),
    [sym_assignable_variable_list] = STATE(298),
    [sym_assignable_variable] = STATE(205),
    [sym_local_variable] = STATE(214),
    [sym_local_array_variable] = STATE(214),
    [sym_game_variable] = STATE(214),
    [sym_constant_variable] = STATE(295),
    [sym_literal] = STATE(295),
    [sym_string_literal] = STATE(149),
    [aux_sym_script_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(112),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(112),
    [anon_sym_LPAREN] = ACTIONS(104),
    [anon_sym_DOLLAR] = ACTIONS(66),
    [anon_sym_LBRACE] = ACTIONS(68),
    [anon_sym_return] = ACTIONS(70),
    [anon_sym_SEMI] = ACTIONS(72),
    [anon_sym_if] = ACTIONS(74),
    [anon_sym_while] = ACTIONS(76),
    [sym_switch_type_keyword] = ACTIONS(78),
    [sym_def_type_keyword] = ACTIONS(80),
    [anon_sym_calc] = ACTIONS(82),
    [anon_sym_PERCENT] = ACTIONS(84),
    [anon_sym_TILDE] = ACTIONS(86),
    [anon_sym_AT] = ACTIONS(86),
    [anon_sym_DOT_PERCENT] = ACTIONS(84),
    [anon_sym_CARET] = ACTIONS(88),
    [aux_sym_literal_token1] = ACTIONS(90),
    [aux_sym_literal_token2] = ACTIONS(92),
    [aux_sym_literal_token3] = ACTIONS(92),
    [aux_sym_literal_token4] = ACTIONS(92),
    [aux_sym_literal_token5] = ACTIONS(92),
    [anon_sym_null] = ACTIONS(92),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [sym_identifier] = ACTIONS(96),
  },
  [11] = {
    [sym__statement] = STATE(12),
    [sym_block_statement] = STATE(12),
    [sym_return_statement] = STATE(12),
    [sym_if_statement] = STATE(12),
    [sym_while_statement] = STATE(12),
    [sym_switch_statement] = STATE(12),
    [sym_declaration_statement] = STATE(12),
    [sym_array_declaration_statement] = STATE(12),
    [sym_assignment_statement] = STATE(12),
    [sym_expression_statement] = STATE(12),
    [sym_empty_statement] = STATE(12),
    [sym_parenthesis] = STATE(295),
    [sym__expression] = STATE(295),
    [sym_calc] = STATE(295),
    [sym_call] = STATE(295),
    [sym_assignable_variable_list] = STATE(298),
    [sym_assignable_variable] = STATE(205),
    [sym_local_variable] = STATE(214),
    [sym_local_array_variable] = STATE(214),
    [sym_game_variable] = STATE(214),
    [sym_constant_variable] = STATE(295),
    [sym_literal] = STATE(295),
    [sym_string_literal] = STATE(149),
    [aux_sym_script_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(112),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(112),
    [anon_sym_LPAREN] = ACTIONS(104),
    [anon_sym_DOLLAR] = ACTIONS(66),
    [anon_sym_LBRACE] = ACTIONS(68),
    [anon_sym_return] = ACTIONS(70),
    [anon_sym_SEMI] = ACTIONS(72),
    [anon_sym_if] = ACTIONS(74),
    [anon_sym_while] = ACTIONS(76),
    [sym_switch_type_keyword] = ACTIONS(78),
    [sym_def_type_keyword] = ACTIONS(80),
    [anon_sym_calc] = ACTIONS(82),
    [anon_sym_PERCENT] = ACTIONS(84),
    [anon_sym_TILDE] = ACTIONS(86),
    [anon_sym_AT] = ACTIONS(86),
    [anon_sym_DOT_PERCENT] = ACTIONS(84),
    [anon_sym_CARET] = ACTIONS(88),
    [aux_sym_literal_token1] = ACTIONS(90),
    [aux_sym_literal_token2] = ACTIONS(92),
    [aux_sym_literal_token3] = ACTIONS(92),
    [aux_sym_literal_token4] = ACTIONS(92),
    [aux_sym_literal_token5] = ACTIONS(92),
    [anon_sym_null] = ACTIONS(92),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [sym_identifier] = ACTIONS(96),
  },
  [12] = {
    [sym__statement] = STATE(2),
    [sym_block_statement] = STATE(2),
    [sym_return_statement] = STATE(2),
    [sym_if_statement] = STATE(2),
    [sym_while_statement] = STATE(2),
    [sym_switch_statement] = STATE(2),
    [sym_declaration_statement] = STATE(2),
    [sym_array_declaration_statement] = STATE(2),
    [sym_assignment_statement] = STATE(2),
    [sym_expression_statement] = STATE(2),
    [sym_empty_statement] = STATE(2),
    [sym_parenthesis] = STATE(295),
    [sym__expression] = STATE(295),
    [sym_calc] = STATE(295),
    [sym_call] = STATE(295),
    [sym_assignable_variable_list] = STATE(298),
    [sym_assignable_variable] = STATE(205),
    [sym_local_variable] = STATE(214),
    [sym_local_array_variable] = STATE(214),
    [sym_game_variable] = STATE(214),
    [sym_constant_variable] = STATE(295),
    [sym_literal] = STATE(295),
    [sym_string_literal] = STATE(149),
    [aux_sym_script_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(114),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(114),
    [anon_sym_LPAREN] = ACTIONS(104),
    [anon_sym_DOLLAR] = ACTIONS(66),
    [anon_sym_LBRACE] = ACTIONS(68),
    [anon_sym_return] = ACTIONS(70),
    [anon_sym_SEMI] = ACTIONS(72),
    [anon_sym_if] = ACTIONS(74),
    [anon_sym_while] = ACTIONS(76),
    [sym_switch_type_keyword] = ACTIONS(78),
    [sym_def_type_keyword] = ACTIONS(80),
    [anon_sym_calc] = ACTIONS(82),
    [anon_sym_PERCENT] = ACTIONS(84),
    [anon_sym_TILDE] = ACTIONS(86),
    [anon_sym_AT] = ACTIONS(86),
    [anon_sym_DOT_PERCENT] = ACTIONS(84),
    [anon_sym_CARET] = ACTIONS(88),
    [aux_sym_literal_token1] = ACTIONS(90),
    [aux_sym_literal_token2] = ACTIONS(92),
    [aux_sym_literal_token3] = ACTIONS(92),
    [aux_sym_literal_token4] = ACTIONS(92),
    [aux_sym_literal_token5] = ACTIONS(92),
    [anon_sym_null] = ACTIONS(92),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [sym_identifier] = ACTIONS(96),
  },
  [13] = {
    [sym__statement] = STATE(15),
    [sym_block_statement] = STATE(15),
    [sym_return_statement] = STATE(15),
    [sym_if_statement] = STATE(15),
    [sym_while_statement] = STATE(15),
    [sym_switch_statement] = STATE(15),
    [sym_declaration_statement] = STATE(15),
    [sym_array_declaration_statement] = STATE(15),
    [sym_assignment_statement] = STATE(15),
    [sym_expression_statement] = STATE(15),
    [sym_empty_statement] = STATE(15),
    [sym_parenthesis] = STATE(295),
    [sym__expression] = STATE(295),
    [sym_calc] = STATE(295),
    [sym_call] = STATE(295),
    [sym_assignable_variable_list] = STATE(298),
    [sym_assignable_variable] = STATE(205),
    [sym_local_variable] = STATE(214),
    [sym_local_array_variable] = STATE(214),
    [sym_game_variable] = STATE(214),
    [sym_constant_variable] = STATE(295),
    [sym_literal] = STATE(295),
    [sym_string_literal] = STATE(149),
    [aux_sym_script_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(114),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(114),
    [anon_sym_LPAREN] = ACTIONS(104),
    [anon_sym_DOLLAR] = ACTIONS(66),
    [anon_sym_LBRACE] = ACTIONS(68),
    [anon_sym_return] = ACTIONS(70),
    [anon_sym_SEMI] = ACTIONS(72),
    [anon_sym_if] = ACTIONS(74),
    [anon_sym_while] = ACTIONS(76),
    [sym_switch_type_keyword] = ACTIONS(78),
    [sym_def_type_keyword] = ACTIONS(80),
    [anon_sym_calc] = ACTIONS(82),
    [anon_sym_PERCENT] = ACTIONS(84),
    [anon_sym_TILDE] = ACTIONS(86),
    [anon_sym_AT] = ACTIONS(86),
    [anon_sym_DOT_PERCENT] = ACTIONS(84),
    [anon_sym_CARET] = ACTIONS(88),
    [aux_sym_literal_token1] = ACTIONS(90),
    [aux_sym_literal_token2] = ACTIONS(92),
    [aux_sym_literal_token3] = ACTIONS(92),
    [aux_sym_literal_token4] = ACTIONS(92),
    [aux_sym_literal_token5] = ACTIONS(92),
    [anon_sym_null] = ACTIONS(92),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [sym_identifier] = ACTIONS(96),
  },
  [14] = {
    [sym__statement] = STATE(16),
    [sym_block_statement] = STATE(16),
    [sym_return_statement] = STATE(16),
    [sym_if_statement] = STATE(16),
    [sym_while_statement] = STATE(16),
    [sym_switch_statement] = STATE(16),
    [sym_declaration_statement] = STATE(16),
    [sym_array_declaration_statement] = STATE(16),
    [sym_assignment_statement] = STATE(16),
    [sym_expression_statement] = STATE(16),
    [sym_empty_statement] = STATE(16),
    [sym_parenthesis] = STATE(283),
    [sym__expression] = STATE(283),
    [sym_calc] = STATE(283),
    [sym_call] = STATE(283),
    [sym_assignable_variable_list] = STATE(292),
    [sym_assignable_variable] = STATE(205),
    [sym_local_variable] = STATE(214),
    [sym_local_array_variable] = STATE(214),
    [sym_game_variable] = STATE(214),
    [sym_constant_variable] = STATE(283),
    [sym_literal] = STATE(283),
    [sym_string_literal] = STATE(149),
    [aux_sym_script_repeat1] = STATE(16),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(104),
    [anon_sym_DOLLAR] = ACTIONS(66),
    [anon_sym_LBRACE] = ACTIONS(116),
    [anon_sym_RBRACE] = ACTIONS(118),
    [anon_sym_return] = ACTIONS(120),
    [anon_sym_SEMI] = ACTIONS(122),
    [anon_sym_if] = ACTIONS(124),
    [anon_sym_while] = ACTIONS(126),
    [sym_switch_type_keyword] = ACTIONS(128),
    [anon_sym_case] = ACTIONS(118),
    [sym_def_type_keyword] = ACTIONS(130),
    [anon_sym_calc] = ACTIONS(82),
    [anon_sym_PERCENT] = ACTIONS(84),
    [anon_sym_TILDE] = ACTIONS(86),
    [anon_sym_AT] = ACTIONS(86),
    [anon_sym_DOT_PERCENT] = ACTIONS(84),
    [anon_sym_CARET] = ACTIONS(88),
    [aux_sym_literal_token1] = ACTIONS(90),
    [aux_sym_literal_token2] = ACTIONS(92),
    [aux_sym_literal_token3] = ACTIONS(92),
    [aux_sym_literal_token4] = ACTIONS(92),
    [aux_sym_literal_token5] = ACTIONS(92),
    [anon_sym_null] = ACTIONS(92),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [sym_identifier] = ACTIONS(96),
  },
  [15] = {
    [sym__statement] = STATE(2),
    [sym_block_statement] = STATE(2),
    [sym_return_statement] = STATE(2),
    [sym_if_statement] = STATE(2),
    [sym_while_statement] = STATE(2),
    [sym_switch_statement] = STATE(2),
    [sym_declaration_statement] = STATE(2),
    [sym_array_declaration_statement] = STATE(2),
    [sym_assignment_statement] = STATE(2),
    [sym_expression_statement] = STATE(2),
    [sym_empty_statement] = STATE(2),
    [sym_parenthesis] = STATE(295),
    [sym__expression] = STATE(295),
    [sym_calc] = STATE(295),
    [sym_call] = STATE(295),
    [sym_assignable_variable_list] = STATE(298),
    [sym_assignable_variable] = STATE(205),
    [sym_local_variable] = STATE(214),
    [sym_local_array_variable] = STATE(214),
    [sym_game_variable] = STATE(214),
    [sym_constant_variable] = STATE(295),
    [sym_literal] = STATE(295),
    [sym_string_literal] = STATE(149),
    [aux_sym_script_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(132),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(132),
    [anon_sym_LPAREN] = ACTIONS(104),
    [anon_sym_DOLLAR] = ACTIONS(66),
    [anon_sym_LBRACE] = ACTIONS(68),
    [anon_sym_return] = ACTIONS(70),
    [anon_sym_SEMI] = ACTIONS(72),
    [anon_sym_if] = ACTIONS(74),
    [anon_sym_while] = ACTIONS(76),
    [sym_switch_type_keyword] = ACTIONS(78),
    [sym_def_type_keyword] = ACTIONS(80),
    [anon_sym_calc] = ACTIONS(82),
    [anon_sym_PERCENT] = ACTIONS(84),
    [anon_sym_TILDE] = ACTIONS(86),
    [anon_sym_AT] = ACTIONS(86),
    [anon_sym_DOT_PERCENT] = ACTIONS(84),
    [anon_sym_CARET] = ACTIONS(88),
    [aux_sym_literal_token1] = ACTIONS(90),
    [aux_sym_literal_token2] = ACTIONS(92),
    [aux_sym_literal_token3] = ACTIONS(92),
    [aux_sym_literal_token4] = ACTIONS(92),
    [aux_sym_literal_token5] = ACTIONS(92),
    [anon_sym_null] = ACTIONS(92),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [sym_identifier] = ACTIONS(96),
  },
  [16] = {
    [sym__statement] = STATE(17),
    [sym_block_statement] = STATE(17),
    [sym_return_statement] = STATE(17),
    [sym_if_statement] = STATE(17),
    [sym_while_statement] = STATE(17),
    [sym_switch_statement] = STATE(17),
    [sym_declaration_statement] = STATE(17),
    [sym_array_declaration_statement] = STATE(17),
    [sym_assignment_statement] = STATE(17),
    [sym_expression_statement] = STATE(17),
    [sym_empty_statement] = STATE(17),
    [sym_parenthesis] = STATE(283),
    [sym__expression] = STATE(283),
    [sym_calc] = STATE(283),
    [sym_call] = STATE(283),
    [sym_assignable_variable_list] = STATE(292),
    [sym_assignable_variable] = STATE(205),
    [sym_local_variable] = STATE(214),
    [sym_local_array_variable] = STATE(214),
    [sym_game_variable] = STATE(214),
    [sym_constant_variable] = STATE(283),
    [sym_literal] = STATE(283),
    [sym_string_literal] = STATE(149),
    [aux_sym_script_repeat1] = STATE(17),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(104),
    [anon_sym_DOLLAR] = ACTIONS(66),
    [anon_sym_LBRACE] = ACTIONS(116),
    [anon_sym_RBRACE] = ACTIONS(134),
    [anon_sym_return] = ACTIONS(120),
    [anon_sym_SEMI] = ACTIONS(122),
    [anon_sym_if] = ACTIONS(124),
    [anon_sym_while] = ACTIONS(126),
    [sym_switch_type_keyword] = ACTIONS(128),
    [anon_sym_case] = ACTIONS(134),
    [sym_def_type_keyword] = ACTIONS(130),
    [anon_sym_calc] = ACTIONS(82),
    [anon_sym_PERCENT] = ACTIONS(84),
    [anon_sym_TILDE] = ACTIONS(86),
    [anon_sym_AT] = ACTIONS(86),
    [anon_sym_DOT_PERCENT] = ACTIONS(84),
    [anon_sym_CARET] = ACTIONS(88),
    [aux_sym_literal_token1] = ACTIONS(90),
    [aux_sym_literal_token2] = ACTIONS(92),
    [aux_sym_literal_token3] = ACTIONS(92),
    [aux_sym_literal_token4] = ACTIONS(92),
    [aux_sym_literal_token5] = ACTIONS(92),
    [anon_sym_null] = ACTIONS(92),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [sym_identifier] = ACTIONS(96),
  },
  [17] = {
    [sym__statement] = STATE(17),
    [sym_block_statement] = STATE(17),
    [sym_return_statement] = STATE(17),
    [sym_if_statement] = STATE(17),
    [sym_while_statement] = STATE(17),
    [sym_switch_statement] = STATE(17),
    [sym_declaration_statement] = STATE(17),
    [sym_array_declaration_statement] = STATE(17),
    [sym_assignment_statement] = STATE(17),
    [sym_expression_statement] = STATE(17),
    [sym_empty_statement] = STATE(17),
    [sym_parenthesis] = STATE(283),
    [sym__expression] = STATE(283),
    [sym_calc] = STATE(283),
    [sym_call] = STATE(283),
    [sym_assignable_variable_list] = STATE(292),
    [sym_assignable_variable] = STATE(205),
    [sym_local_variable] = STATE(214),
    [sym_local_array_variable] = STATE(214),
    [sym_game_variable] = STATE(214),
    [sym_constant_variable] = STATE(283),
    [sym_literal] = STATE(283),
    [sym_string_literal] = STATE(149),
    [aux_sym_script_repeat1] = STATE(17),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(14),
    [anon_sym_LBRACE] = ACTIONS(136),
    [anon_sym_RBRACE] = ACTIONS(9),
    [anon_sym_return] = ACTIONS(139),
    [anon_sym_SEMI] = ACTIONS(142),
    [anon_sym_if] = ACTIONS(145),
    [anon_sym_while] = ACTIONS(148),
    [sym_switch_type_keyword] = ACTIONS(151),
    [anon_sym_case] = ACTIONS(9),
    [sym_def_type_keyword] = ACTIONS(154),
    [anon_sym_calc] = ACTIONS(38),
    [anon_sym_PERCENT] = ACTIONS(41),
    [anon_sym_TILDE] = ACTIONS(44),
    [anon_sym_AT] = ACTIONS(44),
    [anon_sym_DOT_PERCENT] = ACTIONS(41),
    [anon_sym_CARET] = ACTIONS(47),
    [aux_sym_literal_token1] = ACTIONS(50),
    [aux_sym_literal_token2] = ACTIONS(53),
    [aux_sym_literal_token3] = ACTIONS(53),
    [aux_sym_literal_token4] = ACTIONS(53),
    [aux_sym_literal_token5] = ACTIONS(53),
    [anon_sym_null] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(56),
    [sym_identifier] = ACTIONS(59),
  },
  [18] = {
    [sym__statement] = STATE(19),
    [sym_block_statement] = STATE(19),
    [sym_return_statement] = STATE(19),
    [sym_if_statement] = STATE(19),
    [sym_while_statement] = STATE(19),
    [sym_switch_statement] = STATE(19),
    [sym_declaration_statement] = STATE(19),
    [sym_array_declaration_statement] = STATE(19),
    [sym_assignment_statement] = STATE(19),
    [sym_expression_statement] = STATE(19),
    [sym_empty_statement] = STATE(19),
    [sym_parenthesis] = STATE(295),
    [sym__expression] = STATE(295),
    [sym_calc] = STATE(295),
    [sym_call] = STATE(295),
    [sym_assignable_variable_list] = STATE(298),
    [sym_assignable_variable] = STATE(205),
    [sym_local_variable] = STATE(214),
    [sym_local_array_variable] = STATE(214),
    [sym_game_variable] = STATE(214),
    [sym_constant_variable] = STATE(295),
    [sym_literal] = STATE(295),
    [sym_string_literal] = STATE(149),
    [aux_sym_script_repeat1] = STATE(19),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(104),
    [anon_sym_DOLLAR] = ACTIONS(66),
    [anon_sym_LBRACE] = ACTIONS(68),
    [anon_sym_RBRACE] = ACTIONS(157),
    [anon_sym_return] = ACTIONS(70),
    [anon_sym_SEMI] = ACTIONS(72),
    [anon_sym_if] = ACTIONS(74),
    [anon_sym_while] = ACTIONS(76),
    [sym_switch_type_keyword] = ACTIONS(78),
    [sym_def_type_keyword] = ACTIONS(80),
    [anon_sym_calc] = ACTIONS(82),
    [anon_sym_PERCENT] = ACTIONS(84),
    [anon_sym_TILDE] = ACTIONS(86),
    [anon_sym_AT] = ACTIONS(86),
    [anon_sym_DOT_PERCENT] = ACTIONS(84),
    [anon_sym_CARET] = ACTIONS(88),
    [aux_sym_literal_token1] = ACTIONS(90),
    [aux_sym_literal_token2] = ACTIONS(92),
    [aux_sym_literal_token3] = ACTIONS(92),
    [aux_sym_literal_token4] = ACTIONS(92),
    [aux_sym_literal_token5] = ACTIONS(92),
    [anon_sym_null] = ACTIONS(92),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [sym_identifier] = ACTIONS(96),
  },
  [19] = {
    [sym__statement] = STATE(2),
    [sym_block_statement] = STATE(2),
    [sym_return_statement] = STATE(2),
    [sym_if_statement] = STATE(2),
    [sym_while_statement] = STATE(2),
    [sym_switch_statement] = STATE(2),
    [sym_declaration_statement] = STATE(2),
    [sym_array_declaration_statement] = STATE(2),
    [sym_assignment_statement] = STATE(2),
    [sym_expression_statement] = STATE(2),
    [sym_empty_statement] = STATE(2),
    [sym_parenthesis] = STATE(295),
    [sym__expression] = STATE(295),
    [sym_calc] = STATE(295),
    [sym_call] = STATE(295),
    [sym_assignable_variable_list] = STATE(298),
    [sym_assignable_variable] = STATE(205),
    [sym_local_variable] = STATE(214),
    [sym_local_array_variable] = STATE(214),
    [sym_game_variable] = STATE(214),
    [sym_constant_variable] = STATE(295),
    [sym_literal] = STATE(295),
    [sym_string_literal] = STATE(149),
    [aux_sym_script_repeat1] = STATE(2),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(104),
    [anon_sym_DOLLAR] = ACTIONS(66),
    [anon_sym_LBRACE] = ACTIONS(68),
    [anon_sym_RBRACE] = ACTIONS(159),
    [anon_sym_return] = ACTIONS(70),
    [anon_sym_SEMI] = ACTIONS(72),
    [anon_sym_if] = ACTIONS(74),
    [anon_sym_while] = ACTIONS(76),
    [sym_switch_type_keyword] = ACTIONS(78),
    [sym_def_type_keyword] = ACTIONS(80),
    [anon_sym_calc] = ACTIONS(82),
    [anon_sym_PERCENT] = ACTIONS(84),
    [anon_sym_TILDE] = ACTIONS(86),
    [anon_sym_AT] = ACTIONS(86),
    [anon_sym_DOT_PERCENT] = ACTIONS(84),
    [anon_sym_CARET] = ACTIONS(88),
    [aux_sym_literal_token1] = ACTIONS(90),
    [aux_sym_literal_token2] = ACTIONS(92),
    [aux_sym_literal_token3] = ACTIONS(92),
    [aux_sym_literal_token4] = ACTIONS(92),
    [aux_sym_literal_token5] = ACTIONS(92),
    [anon_sym_null] = ACTIONS(92),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [sym_identifier] = ACTIONS(96),
  },
  [20] = {
    [sym__statement] = STATE(21),
    [sym_block_statement] = STATE(21),
    [sym_return_statement] = STATE(21),
    [sym_if_statement] = STATE(21),
    [sym_while_statement] = STATE(21),
    [sym_switch_statement] = STATE(21),
    [sym_declaration_statement] = STATE(21),
    [sym_array_declaration_statement] = STATE(21),
    [sym_assignment_statement] = STATE(21),
    [sym_expression_statement] = STATE(21),
    [sym_empty_statement] = STATE(21),
    [sym_parenthesis] = STATE(295),
    [sym__expression] = STATE(295),
    [sym_calc] = STATE(295),
    [sym_call] = STATE(295),
    [sym_assignable_variable_list] = STATE(298),
    [sym_assignable_variable] = STATE(205),
    [sym_local_variable] = STATE(214),
    [sym_local_array_variable] = STATE(214),
    [sym_game_variable] = STATE(214),
    [sym_constant_variable] = STATE(295),
    [sym_literal] = STATE(295),
    [sym_string_literal] = STATE(149),
    [aux_sym_script_repeat1] = STATE(21),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(104),
    [anon_sym_DOLLAR] = ACTIONS(66),
    [anon_sym_LBRACE] = ACTIONS(68),
    [anon_sym_RBRACE] = ACTIONS(161),
    [anon_sym_return] = ACTIONS(70),
    [anon_sym_SEMI] = ACTIONS(72),
    [anon_sym_if] = ACTIONS(74),
    [anon_sym_while] = ACTIONS(76),
    [sym_switch_type_keyword] = ACTIONS(78),
    [sym_def_type_keyword] = ACTIONS(80),
    [anon_sym_calc] = ACTIONS(82),
    [anon_sym_PERCENT] = ACTIONS(84),
    [anon_sym_TILDE] = ACTIONS(86),
    [anon_sym_AT] = ACTIONS(86),
    [anon_sym_DOT_PERCENT] = ACTIONS(84),
    [anon_sym_CARET] = ACTIONS(88),
    [aux_sym_literal_token1] = ACTIONS(90),
    [aux_sym_literal_token2] = ACTIONS(92),
    [aux_sym_literal_token3] = ACTIONS(92),
    [aux_sym_literal_token4] = ACTIONS(92),
    [aux_sym_literal_token5] = ACTIONS(92),
    [anon_sym_null] = ACTIONS(92),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [sym_identifier] = ACTIONS(96),
  },
  [21] = {
    [sym__statement] = STATE(2),
    [sym_block_statement] = STATE(2),
    [sym_return_statement] = STATE(2),
    [sym_if_statement] = STATE(2),
    [sym_while_statement] = STATE(2),
    [sym_switch_statement] = STATE(2),
    [sym_declaration_statement] = STATE(2),
    [sym_array_declaration_statement] = STATE(2),
    [sym_assignment_statement] = STATE(2),
    [sym_expression_statement] = STATE(2),
    [sym_empty_statement] = STATE(2),
    [sym_parenthesis] = STATE(295),
    [sym__expression] = STATE(295),
    [sym_calc] = STATE(295),
    [sym_call] = STATE(295),
    [sym_assignable_variable_list] = STATE(298),
    [sym_assignable_variable] = STATE(205),
    [sym_local_variable] = STATE(214),
    [sym_local_array_variable] = STATE(214),
    [sym_game_variable] = STATE(214),
    [sym_constant_variable] = STATE(295),
    [sym_literal] = STATE(295),
    [sym_string_literal] = STATE(149),
    [aux_sym_script_repeat1] = STATE(2),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(104),
    [anon_sym_DOLLAR] = ACTIONS(66),
    [anon_sym_LBRACE] = ACTIONS(68),
    [anon_sym_RBRACE] = ACTIONS(163),
    [anon_sym_return] = ACTIONS(70),
    [anon_sym_SEMI] = ACTIONS(72),
    [anon_sym_if] = ACTIONS(74),
    [anon_sym_while] = ACTIONS(76),
    [sym_switch_type_keyword] = ACTIONS(78),
    [sym_def_type_keyword] = ACTIONS(80),
    [anon_sym_calc] = ACTIONS(82),
    [anon_sym_PERCENT] = ACTIONS(84),
    [anon_sym_TILDE] = ACTIONS(86),
    [anon_sym_AT] = ACTIONS(86),
    [anon_sym_DOT_PERCENT] = ACTIONS(84),
    [anon_sym_CARET] = ACTIONS(88),
    [aux_sym_literal_token1] = ACTIONS(90),
    [aux_sym_literal_token2] = ACTIONS(92),
    [aux_sym_literal_token3] = ACTIONS(92),
    [aux_sym_literal_token4] = ACTIONS(92),
    [aux_sym_literal_token5] = ACTIONS(92),
    [anon_sym_null] = ACTIONS(92),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [sym_identifier] = ACTIONS(96),
  },
  [22] = {
    [sym__statement] = STATE(23),
    [sym_block_statement] = STATE(23),
    [sym_return_statement] = STATE(23),
    [sym_if_statement] = STATE(23),
    [sym_while_statement] = STATE(23),
    [sym_switch_statement] = STATE(23),
    [sym_declaration_statement] = STATE(23),
    [sym_array_declaration_statement] = STATE(23),
    [sym_assignment_statement] = STATE(23),
    [sym_expression_statement] = STATE(23),
    [sym_empty_statement] = STATE(23),
    [sym_parenthesis] = STATE(295),
    [sym__expression] = STATE(295),
    [sym_calc] = STATE(295),
    [sym_call] = STATE(295),
    [sym_assignable_variable_list] = STATE(298),
    [sym_assignable_variable] = STATE(205),
    [sym_local_variable] = STATE(214),
    [sym_local_array_variable] = STATE(214),
    [sym_game_variable] = STATE(214),
    [sym_constant_variable] = STATE(295),
    [sym_literal] = STATE(295),
    [sym_string_literal] = STATE(149),
    [aux_sym_script_repeat1] = STATE(23),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(104),
    [anon_sym_DOLLAR] = ACTIONS(66),
    [anon_sym_LBRACE] = ACTIONS(68),
    [anon_sym_RBRACE] = ACTIONS(165),
    [anon_sym_return] = ACTIONS(70),
    [anon_sym_SEMI] = ACTIONS(72),
    [anon_sym_if] = ACTIONS(74),
    [anon_sym_while] = ACTIONS(76),
    [sym_switch_type_keyword] = ACTIONS(78),
    [sym_def_type_keyword] = ACTIONS(80),
    [anon_sym_calc] = ACTIONS(82),
    [anon_sym_PERCENT] = ACTIONS(84),
    [anon_sym_TILDE] = ACTIONS(86),
    [anon_sym_AT] = ACTIONS(86),
    [anon_sym_DOT_PERCENT] = ACTIONS(84),
    [anon_sym_CARET] = ACTIONS(88),
    [aux_sym_literal_token1] = ACTIONS(90),
    [aux_sym_literal_token2] = ACTIONS(92),
    [aux_sym_literal_token3] = ACTIONS(92),
    [aux_sym_literal_token4] = ACTIONS(92),
    [aux_sym_literal_token5] = ACTIONS(92),
    [anon_sym_null] = ACTIONS(92),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [sym_identifier] = ACTIONS(96),
  },
  [23] = {
    [sym__statement] = STATE(2),
    [sym_block_statement] = STATE(2),
    [sym_return_statement] = STATE(2),
    [sym_if_statement] = STATE(2),
    [sym_while_statement] = STATE(2),
    [sym_switch_statement] = STATE(2),
    [sym_declaration_statement] = STATE(2),
    [sym_array_declaration_statement] = STATE(2),
    [sym_assignment_statement] = STATE(2),
    [sym_expression_statement] = STATE(2),
    [sym_empty_statement] = STATE(2),
    [sym_parenthesis] = STATE(295),
    [sym__expression] = STATE(295),
    [sym_calc] = STATE(295),
    [sym_call] = STATE(295),
    [sym_assignable_variable_list] = STATE(298),
    [sym_assignable_variable] = STATE(205),
    [sym_local_variable] = STATE(214),
    [sym_local_array_variable] = STATE(214),
    [sym_game_variable] = STATE(214),
    [sym_constant_variable] = STATE(295),
    [sym_literal] = STATE(295),
    [sym_string_literal] = STATE(149),
    [aux_sym_script_repeat1] = STATE(2),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(104),
    [anon_sym_DOLLAR] = ACTIONS(66),
    [anon_sym_LBRACE] = ACTIONS(68),
    [anon_sym_RBRACE] = ACTIONS(167),
    [anon_sym_return] = ACTIONS(70),
    [anon_sym_SEMI] = ACTIONS(72),
    [anon_sym_if] = ACTIONS(74),
    [anon_sym_while] = ACTIONS(76),
    [sym_switch_type_keyword] = ACTIONS(78),
    [sym_def_type_keyword] = ACTIONS(80),
    [anon_sym_calc] = ACTIONS(82),
    [anon_sym_PERCENT] = ACTIONS(84),
    [anon_sym_TILDE] = ACTIONS(86),
    [anon_sym_AT] = ACTIONS(86),
    [anon_sym_DOT_PERCENT] = ACTIONS(84),
    [anon_sym_CARET] = ACTIONS(88),
    [aux_sym_literal_token1] = ACTIONS(90),
    [aux_sym_literal_token2] = ACTIONS(92),
    [aux_sym_literal_token3] = ACTIONS(92),
    [aux_sym_literal_token4] = ACTIONS(92),
    [aux_sym_literal_token5] = ACTIONS(92),
    [anon_sym_null] = ACTIONS(92),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [sym_identifier] = ACTIONS(96),
  },
  [24] = {
    [sym__statement] = STATE(25),
    [sym_block_statement] = STATE(25),
    [sym_return_statement] = STATE(25),
    [sym_if_statement] = STATE(25),
    [sym_while_statement] = STATE(25),
    [sym_switch_statement] = STATE(25),
    [sym_declaration_statement] = STATE(25),
    [sym_array_declaration_statement] = STATE(25),
    [sym_assignment_statement] = STATE(25),
    [sym_expression_statement] = STATE(25),
    [sym_empty_statement] = STATE(25),
    [sym_parenthesis] = STATE(295),
    [sym__expression] = STATE(295),
    [sym_calc] = STATE(295),
    [sym_call] = STATE(295),
    [sym_assignable_variable_list] = STATE(298),
    [sym_assignable_variable] = STATE(205),
    [sym_local_variable] = STATE(214),
    [sym_local_array_variable] = STATE(214),
    [sym_game_variable] = STATE(214),
    [sym_constant_variable] = STATE(295),
    [sym_literal] = STATE(295),
    [sym_string_literal] = STATE(149),
    [aux_sym_script_repeat1] = STATE(25),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(104),
    [anon_sym_DOLLAR] = ACTIONS(66),
    [anon_sym_LBRACE] = ACTIONS(68),
    [anon_sym_RBRACE] = ACTIONS(169),
    [anon_sym_return] = ACTIONS(70),
    [anon_sym_SEMI] = ACTIONS(72),
    [anon_sym_if] = ACTIONS(74),
    [anon_sym_while] = ACTIONS(76),
    [sym_switch_type_keyword] = ACTIONS(78),
    [sym_def_type_keyword] = ACTIONS(80),
    [anon_sym_calc] = ACTIONS(82),
    [anon_sym_PERCENT] = ACTIONS(84),
    [anon_sym_TILDE] = ACTIONS(86),
    [anon_sym_AT] = ACTIONS(86),
    [anon_sym_DOT_PERCENT] = ACTIONS(84),
    [anon_sym_CARET] = ACTIONS(88),
    [aux_sym_literal_token1] = ACTIONS(90),
    [aux_sym_literal_token2] = ACTIONS(92),
    [aux_sym_literal_token3] = ACTIONS(92),
    [aux_sym_literal_token4] = ACTIONS(92),
    [aux_sym_literal_token5] = ACTIONS(92),
    [anon_sym_null] = ACTIONS(92),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [sym_identifier] = ACTIONS(96),
  },
  [25] = {
    [sym__statement] = STATE(2),
    [sym_block_statement] = STATE(2),
    [sym_return_statement] = STATE(2),
    [sym_if_statement] = STATE(2),
    [sym_while_statement] = STATE(2),
    [sym_switch_statement] = STATE(2),
    [sym_declaration_statement] = STATE(2),
    [sym_array_declaration_statement] = STATE(2),
    [sym_assignment_statement] = STATE(2),
    [sym_expression_statement] = STATE(2),
    [sym_empty_statement] = STATE(2),
    [sym_parenthesis] = STATE(295),
    [sym__expression] = STATE(295),
    [sym_calc] = STATE(295),
    [sym_call] = STATE(295),
    [sym_assignable_variable_list] = STATE(298),
    [sym_assignable_variable] = STATE(205),
    [sym_local_variable] = STATE(214),
    [sym_local_array_variable] = STATE(214),
    [sym_game_variable] = STATE(214),
    [sym_constant_variable] = STATE(295),
    [sym_literal] = STATE(295),
    [sym_string_literal] = STATE(149),
    [aux_sym_script_repeat1] = STATE(2),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(104),
    [anon_sym_DOLLAR] = ACTIONS(66),
    [anon_sym_LBRACE] = ACTIONS(68),
    [anon_sym_RBRACE] = ACTIONS(171),
    [anon_sym_return] = ACTIONS(70),
    [anon_sym_SEMI] = ACTIONS(72),
    [anon_sym_if] = ACTIONS(74),
    [anon_sym_while] = ACTIONS(76),
    [sym_switch_type_keyword] = ACTIONS(78),
    [sym_def_type_keyword] = ACTIONS(80),
    [anon_sym_calc] = ACTIONS(82),
    [anon_sym_PERCENT] = ACTIONS(84),
    [anon_sym_TILDE] = ACTIONS(86),
    [anon_sym_AT] = ACTIONS(86),
    [anon_sym_DOT_PERCENT] = ACTIONS(84),
    [anon_sym_CARET] = ACTIONS(88),
    [aux_sym_literal_token1] = ACTIONS(90),
    [aux_sym_literal_token2] = ACTIONS(92),
    [aux_sym_literal_token3] = ACTIONS(92),
    [aux_sym_literal_token4] = ACTIONS(92),
    [aux_sym_literal_token5] = ACTIONS(92),
    [anon_sym_null] = ACTIONS(92),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [sym_identifier] = ACTIONS(96),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_DOLLAR,
    ACTIONS(68), 1,
      anon_sym_LBRACE,
    ACTIONS(70), 1,
      anon_sym_return,
    ACTIONS(72), 1,
      anon_sym_SEMI,
    ACTIONS(74), 1,
      anon_sym_if,
    ACTIONS(76), 1,
      anon_sym_while,
    ACTIONS(78), 1,
      sym_switch_type_keyword,
    ACTIONS(80), 1,
      sym_def_type_keyword,
    ACTIONS(82), 1,
      anon_sym_calc,
    ACTIONS(88), 1,
      anon_sym_CARET,
    ACTIONS(90), 1,
      aux_sym_literal_token1,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    STATE(149), 1,
      sym_string_literal,
    STATE(205), 1,
      sym_assignable_variable,
    STATE(298), 1,
      sym_assignable_variable_list,
    ACTIONS(84), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(86), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    STATE(214), 3,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
    ACTIONS(92), 5,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
    STATE(295), 6,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_constant_variable,
      sym_literal,
    STATE(102), 11,
      sym__statement,
      sym_block_statement,
      sym_return_statement,
      sym_if_statement,
      sym_while_statement,
      sym_switch_statement,
      sym_declaration_statement,
      sym_array_declaration_statement,
      sym_assignment_statement,
      sym_expression_statement,
      sym_empty_statement,
  [96] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_DOLLAR,
    ACTIONS(82), 1,
      anon_sym_calc,
    ACTIONS(88), 1,
      anon_sym_CARET,
    ACTIONS(90), 1,
      aux_sym_literal_token1,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    ACTIONS(175), 1,
      anon_sym_return,
    ACTIONS(177), 1,
      anon_sym_SEMI,
    ACTIONS(179), 1,
      anon_sym_if,
    ACTIONS(181), 1,
      anon_sym_while,
    ACTIONS(183), 1,
      sym_switch_type_keyword,
    ACTIONS(185), 1,
      sym_def_type_keyword,
    STATE(149), 1,
      sym_string_literal,
    STATE(205), 1,
      sym_assignable_variable,
    STATE(287), 1,
      sym_assignable_variable_list,
    ACTIONS(84), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(86), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    STATE(214), 3,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
    ACTIONS(92), 5,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
    STATE(252), 6,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_constant_variable,
      sym_literal,
    STATE(57), 11,
      sym__statement,
      sym_block_statement,
      sym_return_statement,
      sym_if_statement,
      sym_while_statement,
      sym_switch_statement,
      sym_declaration_statement,
      sym_array_declaration_statement,
      sym_assignment_statement,
      sym_expression_statement,
      sym_empty_statement,
  [192] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_DOLLAR,
    ACTIONS(82), 1,
      anon_sym_calc,
    ACTIONS(88), 1,
      anon_sym_CARET,
    ACTIONS(90), 1,
      aux_sym_literal_token1,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    ACTIONS(187), 1,
      anon_sym_LBRACE,
    ACTIONS(189), 1,
      anon_sym_return,
    ACTIONS(191), 1,
      anon_sym_SEMI,
    ACTIONS(193), 1,
      anon_sym_if,
    ACTIONS(195), 1,
      anon_sym_while,
    ACTIONS(197), 1,
      sym_switch_type_keyword,
    ACTIONS(199), 1,
      sym_def_type_keyword,
    STATE(149), 1,
      sym_string_literal,
    STATE(205), 1,
      sym_assignable_variable,
    STATE(297), 1,
      sym_assignable_variable_list,
    ACTIONS(84), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(86), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    STATE(214), 3,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
    ACTIONS(92), 5,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
    STATE(248), 6,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_constant_variable,
      sym_literal,
    STATE(111), 11,
      sym__statement,
      sym_block_statement,
      sym_return_statement,
      sym_if_statement,
      sym_while_statement,
      sym_switch_statement,
      sym_declaration_statement,
      sym_array_declaration_statement,
      sym_assignment_statement,
      sym_expression_statement,
      sym_empty_statement,
  [288] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_DOLLAR,
    ACTIONS(82), 1,
      anon_sym_calc,
    ACTIONS(88), 1,
      anon_sym_CARET,
    ACTIONS(90), 1,
      aux_sym_literal_token1,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    ACTIONS(175), 1,
      anon_sym_return,
    ACTIONS(177), 1,
      anon_sym_SEMI,
    ACTIONS(179), 1,
      anon_sym_if,
    ACTIONS(181), 1,
      anon_sym_while,
    ACTIONS(183), 1,
      sym_switch_type_keyword,
    ACTIONS(185), 1,
      sym_def_type_keyword,
    STATE(149), 1,
      sym_string_literal,
    STATE(205), 1,
      sym_assignable_variable,
    STATE(287), 1,
      sym_assignable_variable_list,
    ACTIONS(84), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(86), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    STATE(214), 3,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
    ACTIONS(92), 5,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
    STATE(252), 6,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_constant_variable,
      sym_literal,
    STATE(70), 11,
      sym__statement,
      sym_block_statement,
      sym_return_statement,
      sym_if_statement,
      sym_while_statement,
      sym_switch_statement,
      sym_declaration_statement,
      sym_array_declaration_statement,
      sym_assignment_statement,
      sym_expression_statement,
      sym_empty_statement,
  [384] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_DOLLAR,
    ACTIONS(82), 1,
      anon_sym_calc,
    ACTIONS(88), 1,
      anon_sym_CARET,
    ACTIONS(90), 1,
      aux_sym_literal_token1,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    ACTIONS(116), 1,
      anon_sym_LBRACE,
    ACTIONS(120), 1,
      anon_sym_return,
    ACTIONS(122), 1,
      anon_sym_SEMI,
    ACTIONS(124), 1,
      anon_sym_if,
    ACTIONS(126), 1,
      anon_sym_while,
    ACTIONS(128), 1,
      sym_switch_type_keyword,
    ACTIONS(130), 1,
      sym_def_type_keyword,
    STATE(149), 1,
      sym_string_literal,
    STATE(205), 1,
      sym_assignable_variable,
    STATE(292), 1,
      sym_assignable_variable_list,
    ACTIONS(84), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(86), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    STATE(214), 3,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
    ACTIONS(92), 5,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
    STATE(283), 6,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_constant_variable,
      sym_literal,
    STATE(125), 11,
      sym__statement,
      sym_block_statement,
      sym_return_statement,
      sym_if_statement,
      sym_while_statement,
      sym_switch_statement,
      sym_declaration_statement,
      sym_array_declaration_statement,
      sym_assignment_statement,
      sym_expression_statement,
      sym_empty_statement,
  [480] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_DOLLAR,
    ACTIONS(82), 1,
      anon_sym_calc,
    ACTIONS(88), 1,
      anon_sym_CARET,
    ACTIONS(90), 1,
      aux_sym_literal_token1,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    ACTIONS(116), 1,
      anon_sym_LBRACE,
    ACTIONS(120), 1,
      anon_sym_return,
    ACTIONS(122), 1,
      anon_sym_SEMI,
    ACTIONS(124), 1,
      anon_sym_if,
    ACTIONS(126), 1,
      anon_sym_while,
    ACTIONS(128), 1,
      sym_switch_type_keyword,
    ACTIONS(130), 1,
      sym_def_type_keyword,
    STATE(149), 1,
      sym_string_literal,
    STATE(205), 1,
      sym_assignable_variable,
    STATE(292), 1,
      sym_assignable_variable_list,
    ACTIONS(84), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(86), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    STATE(214), 3,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
    ACTIONS(92), 5,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
    STATE(283), 6,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_constant_variable,
      sym_literal,
    STATE(137), 11,
      sym__statement,
      sym_block_statement,
      sym_return_statement,
      sym_if_statement,
      sym_while_statement,
      sym_switch_statement,
      sym_declaration_statement,
      sym_array_declaration_statement,
      sym_assignment_statement,
      sym_expression_statement,
      sym_empty_statement,
  [576] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_DOLLAR,
    ACTIONS(82), 1,
      anon_sym_calc,
    ACTIONS(88), 1,
      anon_sym_CARET,
    ACTIONS(90), 1,
      aux_sym_literal_token1,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    ACTIONS(187), 1,
      anon_sym_LBRACE,
    ACTIONS(189), 1,
      anon_sym_return,
    ACTIONS(191), 1,
      anon_sym_SEMI,
    ACTIONS(193), 1,
      anon_sym_if,
    ACTIONS(195), 1,
      anon_sym_while,
    ACTIONS(197), 1,
      sym_switch_type_keyword,
    ACTIONS(199), 1,
      sym_def_type_keyword,
    STATE(149), 1,
      sym_string_literal,
    STATE(205), 1,
      sym_assignable_variable,
    STATE(297), 1,
      sym_assignable_variable_list,
    ACTIONS(84), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(86), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    STATE(214), 3,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
    ACTIONS(92), 5,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
    STATE(248), 6,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_constant_variable,
      sym_literal,
    STATE(110), 11,
      sym__statement,
      sym_block_statement,
      sym_return_statement,
      sym_if_statement,
      sym_while_statement,
      sym_switch_statement,
      sym_declaration_statement,
      sym_array_declaration_statement,
      sym_assignment_statement,
      sym_expression_statement,
      sym_empty_statement,
  [672] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_DOLLAR,
    ACTIONS(82), 1,
      anon_sym_calc,
    ACTIONS(88), 1,
      anon_sym_CARET,
    ACTIONS(90), 1,
      aux_sym_literal_token1,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    ACTIONS(175), 1,
      anon_sym_return,
    ACTIONS(177), 1,
      anon_sym_SEMI,
    ACTIONS(179), 1,
      anon_sym_if,
    ACTIONS(181), 1,
      anon_sym_while,
    ACTIONS(183), 1,
      sym_switch_type_keyword,
    ACTIONS(185), 1,
      sym_def_type_keyword,
    STATE(149), 1,
      sym_string_literal,
    STATE(205), 1,
      sym_assignable_variable,
    STATE(287), 1,
      sym_assignable_variable_list,
    ACTIONS(84), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(86), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    STATE(214), 3,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
    ACTIONS(92), 5,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
    STATE(252), 6,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_constant_variable,
      sym_literal,
    STATE(69), 11,
      sym__statement,
      sym_block_statement,
      sym_return_statement,
      sym_if_statement,
      sym_while_statement,
      sym_switch_statement,
      sym_declaration_statement,
      sym_array_declaration_statement,
      sym_assignment_statement,
      sym_expression_statement,
      sym_empty_statement,
  [768] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_DOLLAR,
    ACTIONS(82), 1,
      anon_sym_calc,
    ACTIONS(88), 1,
      anon_sym_CARET,
    ACTIONS(90), 1,
      aux_sym_literal_token1,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    ACTIONS(187), 1,
      anon_sym_LBRACE,
    ACTIONS(189), 1,
      anon_sym_return,
    ACTIONS(191), 1,
      anon_sym_SEMI,
    ACTIONS(193), 1,
      anon_sym_if,
    ACTIONS(195), 1,
      anon_sym_while,
    ACTIONS(197), 1,
      sym_switch_type_keyword,
    ACTIONS(199), 1,
      sym_def_type_keyword,
    STATE(149), 1,
      sym_string_literal,
    STATE(205), 1,
      sym_assignable_variable,
    STATE(297), 1,
      sym_assignable_variable_list,
    ACTIONS(84), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(86), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    STATE(214), 3,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
    ACTIONS(92), 5,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
    STATE(248), 6,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_constant_variable,
      sym_literal,
    STATE(98), 11,
      sym__statement,
      sym_block_statement,
      sym_return_statement,
      sym_if_statement,
      sym_while_statement,
      sym_switch_statement,
      sym_declaration_statement,
      sym_array_declaration_statement,
      sym_assignment_statement,
      sym_expression_statement,
      sym_empty_statement,
  [864] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_DOLLAR,
    ACTIONS(68), 1,
      anon_sym_LBRACE,
    ACTIONS(70), 1,
      anon_sym_return,
    ACTIONS(72), 1,
      anon_sym_SEMI,
    ACTIONS(74), 1,
      anon_sym_if,
    ACTIONS(76), 1,
      anon_sym_while,
    ACTIONS(78), 1,
      sym_switch_type_keyword,
    ACTIONS(80), 1,
      sym_def_type_keyword,
    ACTIONS(82), 1,
      anon_sym_calc,
    ACTIONS(88), 1,
      anon_sym_CARET,
    ACTIONS(90), 1,
      aux_sym_literal_token1,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    STATE(149), 1,
      sym_string_literal,
    STATE(205), 1,
      sym_assignable_variable,
    STATE(298), 1,
      sym_assignable_variable_list,
    ACTIONS(84), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(86), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    STATE(214), 3,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
    ACTIONS(92), 5,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
    STATE(295), 6,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_constant_variable,
      sym_literal,
    STATE(92), 11,
      sym__statement,
      sym_block_statement,
      sym_return_statement,
      sym_if_statement,
      sym_while_statement,
      sym_switch_statement,
      sym_declaration_statement,
      sym_array_declaration_statement,
      sym_assignment_statement,
      sym_expression_statement,
      sym_empty_statement,
  [960] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_DOLLAR,
    ACTIONS(88), 1,
      anon_sym_CARET,
    ACTIONS(92), 1,
      aux_sym_literal_token5,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_RPAREN,
    ACTIONS(205), 1,
      anon_sym_calc,
    STATE(149), 1,
      sym_string_literal,
    STATE(206), 1,
      sym_parameter,
    STATE(239), 1,
      sym_parameter_list,
    ACTIONS(84), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(86), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    ACTIONS(203), 2,
      aux_sym_parameter_token1,
      aux_sym_parameter_token2,
    ACTIONS(90), 5,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      anon_sym_null,
    STATE(293), 9,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
      sym_constant_variable,
      sym_literal,
  [1027] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_DOLLAR,
    ACTIONS(88), 1,
      anon_sym_CARET,
    ACTIONS(92), 1,
      aux_sym_literal_token5,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    ACTIONS(205), 1,
      anon_sym_calc,
    ACTIONS(207), 1,
      anon_sym_RPAREN,
    ACTIONS(209), 1,
      aux_sym_parameter_token1,
    STATE(149), 1,
      sym_string_literal,
    STATE(218), 1,
      sym_type,
    STATE(256), 1,
      sym_type_list,
    ACTIONS(84), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(86), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    ACTIONS(90), 5,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      anon_sym_null,
    STATE(293), 9,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
      sym_constant_variable,
      sym_literal,
  [1093] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_DOLLAR,
    ACTIONS(88), 1,
      anon_sym_CARET,
    ACTIONS(92), 1,
      aux_sym_literal_token5,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    ACTIONS(205), 1,
      anon_sym_calc,
    ACTIONS(209), 1,
      aux_sym_parameter_token1,
    ACTIONS(211), 1,
      anon_sym_RPAREN,
    STATE(149), 1,
      sym_string_literal,
    STATE(218), 1,
      sym_type,
    STATE(268), 1,
      sym_type_list,
    ACTIONS(84), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(86), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    ACTIONS(90), 5,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      anon_sym_null,
    STATE(293), 9,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
      sym_constant_variable,
      sym_literal,
  [1159] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_DOLLAR,
    ACTIONS(82), 1,
      anon_sym_calc,
    ACTIONS(88), 1,
      anon_sym_CARET,
    ACTIONS(90), 1,
      aux_sym_literal_token1,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_RPAREN,
    STATE(149), 1,
      sym_string_literal,
    STATE(281), 1,
      sym_expression_list,
    ACTIONS(84), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(86), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    ACTIONS(92), 5,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
    STATE(185), 9,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
      sym_constant_variable,
      sym_literal,
  [1219] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_DOLLAR,
    ACTIONS(82), 1,
      anon_sym_calc,
    ACTIONS(88), 1,
      anon_sym_CARET,
    ACTIONS(90), 1,
      aux_sym_literal_token1,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      anon_sym_default,
    STATE(149), 1,
      sym_string_literal,
    STATE(275), 1,
      sym_expression_list,
    ACTIONS(84), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(86), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    ACTIONS(92), 5,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
    STATE(185), 9,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
      sym_constant_variable,
      sym_literal,
  [1279] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_DOLLAR,
    ACTIONS(82), 1,
      anon_sym_calc,
    ACTIONS(88), 1,
      anon_sym_CARET,
    ACTIONS(90), 1,
      aux_sym_literal_token1,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_RPAREN,
    STATE(149), 1,
      sym_string_literal,
    STATE(267), 1,
      sym_expression_list,
    ACTIONS(84), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(86), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    ACTIONS(92), 5,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
    STATE(185), 9,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
      sym_constant_variable,
      sym_literal,
  [1339] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_DOLLAR,
    ACTIONS(82), 1,
      anon_sym_calc,
    ACTIONS(88), 1,
      anon_sym_CARET,
    ACTIONS(90), 1,
      aux_sym_literal_token1,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    ACTIONS(219), 1,
      anon_sym_RPAREN,
    STATE(149), 1,
      sym_string_literal,
    STATE(282), 1,
      sym_expression_list,
    ACTIONS(84), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(86), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    ACTIONS(92), 5,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
    STATE(185), 9,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
      sym_constant_variable,
      sym_literal,
  [1399] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_DOLLAR,
    ACTIONS(82), 1,
      anon_sym_calc,
    ACTIONS(88), 1,
      anon_sym_CARET,
    ACTIONS(90), 1,
      aux_sym_literal_token1,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    ACTIONS(221), 1,
      anon_sym_RPAREN,
    STATE(149), 1,
      sym_string_literal,
    STATE(251), 1,
      sym_expression_list,
    ACTIONS(84), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(86), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    ACTIONS(92), 5,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
    STATE(185), 9,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
      sym_constant_variable,
      sym_literal,
  [1459] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_DOLLAR,
    ACTIONS(82), 1,
      anon_sym_calc,
    ACTIONS(88), 1,
      anon_sym_CARET,
    ACTIONS(90), 1,
      aux_sym_literal_token1,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      anon_sym_RPAREN,
    STATE(149), 1,
      sym_string_literal,
    STATE(265), 1,
      sym_expression_list,
    ACTIONS(84), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(86), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    ACTIONS(92), 5,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
    STATE(185), 9,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
      sym_constant_variable,
      sym_literal,
  [1519] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_DOLLAR,
    ACTIONS(82), 1,
      anon_sym_calc,
    ACTIONS(88), 1,
      anon_sym_CARET,
    ACTIONS(90), 1,
      aux_sym_literal_token1,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    ACTIONS(225), 1,
      anon_sym_RPAREN,
    STATE(149), 1,
      sym_string_literal,
    STATE(273), 1,
      sym_expression_list,
    ACTIONS(84), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(86), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    ACTIONS(92), 5,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
    STATE(185), 9,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
      sym_constant_variable,
      sym_literal,
  [1579] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_DOLLAR,
    ACTIONS(82), 1,
      anon_sym_calc,
    ACTIONS(88), 1,
      anon_sym_CARET,
    ACTIONS(90), 1,
      aux_sym_literal_token1,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(227), 1,
      anon_sym_LPAREN,
    STATE(149), 1,
      sym_string_literal,
    STATE(156), 1,
      sym_condition,
    ACTIONS(84), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(86), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    ACTIONS(92), 5,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
    STATE(162), 9,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
      sym_constant_variable,
      sym_literal,
  [1636] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_DOLLAR,
    ACTIONS(82), 1,
      anon_sym_calc,
    ACTIONS(88), 1,
      anon_sym_CARET,
    ACTIONS(90), 1,
      aux_sym_literal_token1,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(227), 1,
      anon_sym_LPAREN,
    STATE(149), 1,
      sym_string_literal,
    STATE(171), 1,
      sym_condition,
    ACTIONS(84), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(86), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    ACTIONS(92), 5,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
    STATE(162), 9,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
      sym_constant_variable,
      sym_literal,
  [1693] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_DOLLAR,
    ACTIONS(82), 1,
      anon_sym_calc,
    ACTIONS(88), 1,
      anon_sym_CARET,
    ACTIONS(90), 1,
      aux_sym_literal_token1,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(227), 1,
      anon_sym_LPAREN,
    STATE(149), 1,
      sym_string_literal,
    STATE(157), 1,
      sym_condition,
    ACTIONS(84), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(86), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    ACTIONS(92), 5,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
    STATE(162), 9,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
      sym_constant_variable,
      sym_literal,
  [1750] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_DOLLAR,
    ACTIONS(82), 1,
      anon_sym_calc,
    ACTIONS(88), 1,
      anon_sym_CARET,
    ACTIONS(90), 1,
      aux_sym_literal_token1,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(227), 1,
      anon_sym_LPAREN,
    STATE(149), 1,
      sym_string_literal,
    STATE(165), 1,
      sym_condition,
    ACTIONS(84), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(86), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    ACTIONS(92), 5,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
    STATE(162), 9,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
      sym_constant_variable,
      sym_literal,
  [1807] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_DOLLAR,
    ACTIONS(82), 1,
      anon_sym_calc,
    ACTIONS(88), 1,
      anon_sym_CARET,
    ACTIONS(90), 1,
      aux_sym_literal_token1,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(227), 1,
      anon_sym_LPAREN,
    STATE(149), 1,
      sym_string_literal,
    STATE(166), 1,
      sym_condition,
    ACTIONS(84), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(86), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    ACTIONS(92), 5,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
    STATE(162), 9,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
      sym_constant_variable,
      sym_literal,
  [1864] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_DOLLAR,
    ACTIONS(82), 1,
      anon_sym_calc,
    ACTIONS(88), 1,
      anon_sym_CARET,
    ACTIONS(90), 1,
      aux_sym_literal_token1,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(227), 1,
      anon_sym_LPAREN,
    STATE(149), 1,
      sym_string_literal,
    STATE(168), 1,
      sym_condition,
    ACTIONS(84), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(86), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    ACTIONS(92), 5,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
    STATE(162), 9,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
      sym_constant_variable,
      sym_literal,
  [1921] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_DOLLAR,
    ACTIONS(82), 1,
      anon_sym_calc,
    ACTIONS(88), 1,
      anon_sym_CARET,
    ACTIONS(90), 1,
      aux_sym_literal_token1,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    STATE(149), 1,
      sym_string_literal,
    STATE(175), 1,
      sym_arithmetic,
    ACTIONS(84), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(86), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    ACTIONS(92), 5,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
    STATE(177), 9,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
      sym_constant_variable,
      sym_literal,
  [1978] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_DOLLAR,
    ACTIONS(82), 1,
      anon_sym_calc,
    ACTIONS(88), 1,
      anon_sym_CARET,
    ACTIONS(90), 1,
      aux_sym_literal_token1,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    STATE(149), 1,
      sym_string_literal,
    STATE(176), 1,
      sym_arithmetic,
    ACTIONS(84), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(86), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    ACTIONS(92), 5,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
    STATE(177), 9,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
      sym_constant_variable,
      sym_literal,
  [2035] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_DOLLAR,
    ACTIONS(82), 1,
      anon_sym_calc,
    ACTIONS(88), 1,
      anon_sym_CARET,
    ACTIONS(90), 1,
      aux_sym_literal_token1,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    STATE(149), 1,
      sym_string_literal,
    STATE(178), 1,
      sym_arithmetic,
    ACTIONS(84), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(86), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    ACTIONS(92), 5,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
    STATE(177), 9,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
      sym_constant_variable,
      sym_literal,
  [2092] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_DOLLAR,
    ACTIONS(82), 1,
      anon_sym_calc,
    ACTIONS(88), 1,
      anon_sym_CARET,
    ACTIONS(90), 1,
      aux_sym_literal_token1,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    STATE(149), 1,
      sym_string_literal,
    STATE(179), 1,
      sym_arithmetic,
    ACTIONS(84), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(86), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    ACTIONS(92), 5,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
    STATE(177), 9,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
      sym_constant_variable,
      sym_literal,
  [2149] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_DOLLAR,
    ACTIONS(82), 1,
      anon_sym_calc,
    ACTIONS(88), 1,
      anon_sym_CARET,
    ACTIONS(90), 1,
      aux_sym_literal_token1,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    STATE(149), 1,
      sym_string_literal,
    STATE(174), 1,
      sym_arithmetic,
    ACTIONS(84), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(86), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    ACTIONS(92), 5,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
    STATE(177), 9,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
      sym_constant_variable,
      sym_literal,
  [2206] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_else,
    ACTIONS(235), 2,
      aux_sym_literal_token1,
      sym_identifier,
    ACTIONS(231), 24,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_SEMI,
      anon_sym_if,
      anon_sym_while,
      sym_switch_type_keyword,
      sym_def_type_keyword,
      anon_sym_calc,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
      anon_sym_DQUOTE,
  [2243] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 2,
      aux_sym_literal_token1,
      sym_identifier,
    ACTIONS(237), 25,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_SEMI,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      sym_switch_type_keyword,
      sym_def_type_keyword,
      anon_sym_calc,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
      anon_sym_DQUOTE,
  [2278] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 2,
      aux_sym_literal_token1,
      sym_identifier,
    ACTIONS(241), 25,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_SEMI,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      sym_switch_type_keyword,
      sym_def_type_keyword,
      anon_sym_calc,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
      anon_sym_DQUOTE,
  [2313] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 2,
      aux_sym_literal_token1,
      sym_identifier,
    ACTIONS(245), 25,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_SEMI,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      sym_switch_type_keyword,
      sym_def_type_keyword,
      anon_sym_calc,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
      anon_sym_DQUOTE,
  [2348] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 2,
      aux_sym_literal_token1,
      sym_identifier,
    ACTIONS(249), 25,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_SEMI,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      sym_switch_type_keyword,
      sym_def_type_keyword,
      anon_sym_calc,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
      anon_sym_DQUOTE,
  [2383] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_DOLLAR,
    ACTIONS(82), 1,
      anon_sym_calc,
    ACTIONS(88), 1,
      anon_sym_CARET,
    ACTIONS(90), 1,
      aux_sym_literal_token1,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(227), 1,
      anon_sym_LPAREN,
    STATE(149), 1,
      sym_string_literal,
    STATE(170), 1,
      sym_condition,
    ACTIONS(84), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(86), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    ACTIONS(92), 5,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
    STATE(162), 9,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
      sym_constant_variable,
      sym_literal,
  [2440] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 2,
      aux_sym_literal_token1,
      sym_identifier,
    ACTIONS(253), 25,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_SEMI,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      sym_switch_type_keyword,
      sym_def_type_keyword,
      anon_sym_calc,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
      anon_sym_DQUOTE,
  [2475] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 2,
      aux_sym_literal_token1,
      sym_identifier,
    ACTIONS(257), 25,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_SEMI,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      sym_switch_type_keyword,
      sym_def_type_keyword,
      anon_sym_calc,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
      anon_sym_DQUOTE,
  [2510] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 2,
      aux_sym_literal_token1,
      sym_identifier,
    ACTIONS(261), 25,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_SEMI,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      sym_switch_type_keyword,
      sym_def_type_keyword,
      anon_sym_calc,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
      anon_sym_DQUOTE,
  [2545] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 2,
      aux_sym_literal_token1,
      sym_identifier,
    ACTIONS(265), 25,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_SEMI,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      sym_switch_type_keyword,
      sym_def_type_keyword,
      anon_sym_calc,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
      anon_sym_DQUOTE,
  [2580] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 2,
      aux_sym_literal_token1,
      sym_identifier,
    ACTIONS(269), 25,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_SEMI,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      sym_switch_type_keyword,
      sym_def_type_keyword,
      anon_sym_calc,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
      anon_sym_DQUOTE,
  [2615] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 2,
      aux_sym_literal_token1,
      sym_identifier,
    ACTIONS(273), 25,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_SEMI,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      sym_switch_type_keyword,
      sym_def_type_keyword,
      anon_sym_calc,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
      anon_sym_DQUOTE,
  [2650] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 2,
      aux_sym_literal_token1,
      sym_identifier,
    ACTIONS(231), 25,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_SEMI,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      sym_switch_type_keyword,
      sym_def_type_keyword,
      anon_sym_calc,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
      anon_sym_DQUOTE,
  [2685] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 2,
      aux_sym_literal_token1,
      sym_identifier,
    ACTIONS(277), 25,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_SEMI,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      sym_switch_type_keyword,
      sym_def_type_keyword,
      anon_sym_calc,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
      anon_sym_DQUOTE,
  [2720] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 2,
      aux_sym_literal_token1,
      sym_identifier,
    ACTIONS(281), 25,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_SEMI,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      sym_switch_type_keyword,
      sym_def_type_keyword,
      anon_sym_calc,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
      anon_sym_DQUOTE,
  [2755] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 2,
      aux_sym_literal_token1,
      sym_identifier,
    ACTIONS(285), 25,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_SEMI,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      sym_switch_type_keyword,
      sym_def_type_keyword,
      anon_sym_calc,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
      anon_sym_DQUOTE,
  [2790] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 2,
      aux_sym_literal_token1,
      sym_identifier,
    ACTIONS(289), 25,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_SEMI,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      sym_switch_type_keyword,
      sym_def_type_keyword,
      anon_sym_calc,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
      anon_sym_DQUOTE,
  [2825] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 2,
      aux_sym_literal_token1,
      sym_identifier,
    ACTIONS(293), 25,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_SEMI,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      sym_switch_type_keyword,
      sym_def_type_keyword,
      anon_sym_calc,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
      anon_sym_DQUOTE,
  [2860] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_DOLLAR,
    ACTIONS(82), 1,
      anon_sym_calc,
    ACTIONS(88), 1,
      anon_sym_CARET,
    ACTIONS(90), 1,
      aux_sym_literal_token1,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(227), 1,
      anon_sym_LPAREN,
    STATE(149), 1,
      sym_string_literal,
    STATE(159), 1,
      sym_condition,
    ACTIONS(84), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(86), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    ACTIONS(92), 5,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
    STATE(158), 9,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
      sym_constant_variable,
      sym_literal,
  [2917] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_DOLLAR,
    ACTIONS(82), 1,
      anon_sym_calc,
    ACTIONS(88), 1,
      anon_sym_CARET,
    ACTIONS(90), 1,
      aux_sym_literal_token1,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(227), 1,
      anon_sym_LPAREN,
    STATE(149), 1,
      sym_string_literal,
    STATE(160), 1,
      sym_condition,
    ACTIONS(84), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(86), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    ACTIONS(92), 5,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
    STATE(162), 9,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
      sym_constant_variable,
      sym_literal,
  [2974] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_DOLLAR,
    ACTIONS(82), 1,
      anon_sym_calc,
    ACTIONS(88), 1,
      anon_sym_CARET,
    ACTIONS(90), 1,
      aux_sym_literal_token1,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    STATE(149), 1,
      sym_string_literal,
    STATE(266), 1,
      sym_expression_list,
    ACTIONS(84), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(86), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    ACTIONS(92), 5,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
    STATE(185), 9,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
      sym_constant_variable,
      sym_literal,
  [3031] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_DOLLAR,
    ACTIONS(82), 1,
      anon_sym_calc,
    ACTIONS(88), 1,
      anon_sym_CARET,
    ACTIONS(90), 1,
      aux_sym_literal_token1,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(227), 1,
      anon_sym_LPAREN,
    STATE(149), 1,
      sym_string_literal,
    STATE(161), 1,
      sym_condition,
    ACTIONS(84), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(86), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    ACTIONS(92), 5,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
    STATE(162), 9,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
      sym_constant_variable,
      sym_literal,
  [3088] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_DOLLAR,
    ACTIONS(82), 1,
      anon_sym_calc,
    ACTIONS(88), 1,
      anon_sym_CARET,
    ACTIONS(90), 1,
      aux_sym_literal_token1,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    STATE(149), 1,
      sym_string_literal,
    STATE(240), 1,
      sym_expression_list,
    ACTIONS(84), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(86), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    ACTIONS(92), 5,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
    STATE(185), 9,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
      sym_constant_variable,
      sym_literal,
  [3145] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_DOLLAR,
    ACTIONS(82), 1,
      anon_sym_calc,
    ACTIONS(88), 1,
      anon_sym_CARET,
    ACTIONS(90), 1,
      aux_sym_literal_token1,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    STATE(149), 1,
      sym_string_literal,
    STATE(172), 1,
      sym_arithmetic,
    ACTIONS(84), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(86), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    ACTIONS(92), 5,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
    STATE(180), 9,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
      sym_constant_variable,
      sym_literal,
  [3202] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_DOLLAR,
    ACTIONS(82), 1,
      anon_sym_calc,
    ACTIONS(88), 1,
      anon_sym_CARET,
    ACTIONS(90), 1,
      aux_sym_literal_token1,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(227), 1,
      anon_sym_LPAREN,
    STATE(149), 1,
      sym_string_literal,
    STATE(163), 1,
      sym_condition,
    ACTIONS(84), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(86), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    ACTIONS(92), 5,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
    STATE(162), 9,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
      sym_constant_variable,
      sym_literal,
  [3259] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_DOLLAR,
    ACTIONS(82), 1,
      anon_sym_calc,
    ACTIONS(88), 1,
      anon_sym_CARET,
    ACTIONS(90), 1,
      aux_sym_literal_token1,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    STATE(149), 1,
      sym_string_literal,
    STATE(254), 1,
      sym_expression_list,
    ACTIONS(84), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(86), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    ACTIONS(92), 5,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
    STATE(185), 9,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
      sym_constant_variable,
      sym_literal,
  [3316] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_DOLLAR,
    ACTIONS(82), 1,
      anon_sym_calc,
    ACTIONS(88), 1,
      anon_sym_CARET,
    ACTIONS(90), 1,
      aux_sym_literal_token1,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(227), 1,
      anon_sym_LPAREN,
    STATE(149), 1,
      sym_string_literal,
    STATE(164), 1,
      sym_condition,
    ACTIONS(84), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(86), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    ACTIONS(92), 5,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
    STATE(162), 9,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
      sym_constant_variable,
      sym_literal,
  [3373] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_DOLLAR,
    ACTIONS(82), 1,
      anon_sym_calc,
    ACTIONS(88), 1,
      anon_sym_CARET,
    ACTIONS(90), 1,
      aux_sym_literal_token1,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(227), 1,
      anon_sym_LPAREN,
    STATE(149), 1,
      sym_string_literal,
    STATE(167), 1,
      sym_condition,
    ACTIONS(84), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(86), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    ACTIONS(92), 5,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
    STATE(162), 9,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
      sym_constant_variable,
      sym_literal,
  [3430] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_DOLLAR,
    ACTIONS(82), 1,
      anon_sym_calc,
    ACTIONS(88), 1,
      anon_sym_CARET,
    ACTIONS(90), 1,
      aux_sym_literal_token1,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    STATE(149), 1,
      sym_string_literal,
    STATE(257), 1,
      sym_expression_list,
    ACTIONS(84), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(86), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    ACTIONS(92), 5,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
    STATE(185), 9,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
      sym_constant_variable,
      sym_literal,
  [3487] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_DOLLAR,
    ACTIONS(82), 1,
      anon_sym_calc,
    ACTIONS(88), 1,
      anon_sym_CARET,
    ACTIONS(90), 1,
      aux_sym_literal_token1,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    STATE(149), 1,
      sym_string_literal,
    ACTIONS(84), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(86), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    ACTIONS(92), 5,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
    STATE(293), 9,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
      sym_constant_variable,
      sym_literal,
  [3541] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 2,
      aux_sym_literal_token1,
      sym_identifier,
    ACTIONS(281), 24,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_SEMI,
      anon_sym_if,
      anon_sym_while,
      sym_switch_type_keyword,
      sym_def_type_keyword,
      anon_sym_calc,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
      anon_sym_DQUOTE,
  [3575] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 2,
      aux_sym_literal_token1,
      sym_identifier,
    ACTIONS(285), 24,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_SEMI,
      anon_sym_if,
      anon_sym_while,
      sym_switch_type_keyword,
      sym_def_type_keyword,
      anon_sym_calc,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
      anon_sym_DQUOTE,
  [3609] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_DOLLAR,
    ACTIONS(82), 1,
      anon_sym_calc,
    ACTIONS(88), 1,
      anon_sym_CARET,
    ACTIONS(90), 1,
      aux_sym_literal_token1,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    STATE(149), 1,
      sym_string_literal,
    ACTIONS(84), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(86), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    ACTIONS(92), 5,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
    STATE(242), 9,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
      sym_constant_variable,
      sym_literal,
  [3663] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 2,
      aux_sym_literal_token1,
      sym_identifier,
    ACTIONS(289), 24,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_SEMI,
      anon_sym_if,
      anon_sym_while,
      sym_switch_type_keyword,
      sym_def_type_keyword,
      anon_sym_calc,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
      anon_sym_DQUOTE,
  [3697] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 2,
      aux_sym_literal_token1,
      sym_identifier,
    ACTIONS(237), 24,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_SEMI,
      anon_sym_if,
      anon_sym_while,
      sym_switch_type_keyword,
      sym_def_type_keyword,
      anon_sym_calc,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
      anon_sym_DQUOTE,
  [3731] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 2,
      aux_sym_literal_token1,
      sym_identifier,
    ACTIONS(293), 24,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_SEMI,
      anon_sym_if,
      anon_sym_while,
      sym_switch_type_keyword,
      sym_def_type_keyword,
      anon_sym_calc,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
      anon_sym_DQUOTE,
  [3765] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 2,
      aux_sym_literal_token1,
      sym_identifier,
    ACTIONS(249), 24,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_SEMI,
      anon_sym_if,
      anon_sym_while,
      sym_switch_type_keyword,
      sym_def_type_keyword,
      anon_sym_calc,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
      anon_sym_DQUOTE,
  [3799] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 2,
      aux_sym_literal_token1,
      sym_identifier,
    ACTIONS(241), 24,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_SEMI,
      anon_sym_if,
      anon_sym_while,
      sym_switch_type_keyword,
      sym_def_type_keyword,
      anon_sym_calc,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
      anon_sym_DQUOTE,
  [3833] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 2,
      aux_sym_literal_token1,
      sym_identifier,
    ACTIONS(261), 24,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_SEMI,
      anon_sym_if,
      anon_sym_while,
      sym_switch_type_keyword,
      sym_def_type_keyword,
      anon_sym_calc,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
      anon_sym_DQUOTE,
  [3867] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 2,
      aux_sym_literal_token1,
      sym_identifier,
    ACTIONS(265), 24,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_SEMI,
      anon_sym_if,
      anon_sym_while,
      sym_switch_type_keyword,
      sym_def_type_keyword,
      anon_sym_calc,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
      anon_sym_DQUOTE,
  [3901] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_DOLLAR,
    ACTIONS(82), 1,
      anon_sym_calc,
    ACTIONS(88), 1,
      anon_sym_CARET,
    ACTIONS(90), 1,
      aux_sym_literal_token1,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    STATE(149), 1,
      sym_string_literal,
    ACTIONS(84), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(86), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    ACTIONS(92), 5,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
    STATE(280), 9,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
      sym_constant_variable,
      sym_literal,
  [3955] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      anon_sym_else,
    ACTIONS(235), 2,
      aux_sym_literal_token1,
      sym_identifier,
    ACTIONS(231), 23,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_SEMI,
      anon_sym_if,
      anon_sym_while,
      sym_switch_type_keyword,
      anon_sym_case,
      sym_def_type_keyword,
      anon_sym_calc,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
      anon_sym_DQUOTE,
  [3991] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 2,
      aux_sym_literal_token1,
      sym_identifier,
    ACTIONS(273), 24,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_SEMI,
      anon_sym_if,
      anon_sym_while,
      sym_switch_type_keyword,
      sym_def_type_keyword,
      anon_sym_calc,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
      anon_sym_DQUOTE,
  [4025] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 2,
      aux_sym_literal_token1,
      sym_identifier,
    ACTIONS(237), 24,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_SEMI,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      sym_switch_type_keyword,
      anon_sym_case,
      sym_def_type_keyword,
      anon_sym_calc,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
      anon_sym_DQUOTE,
  [4059] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 2,
      aux_sym_literal_token1,
      sym_identifier,
    ACTIONS(241), 24,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_SEMI,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      sym_switch_type_keyword,
      anon_sym_case,
      sym_def_type_keyword,
      anon_sym_calc,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
      anon_sym_DQUOTE,
  [4093] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 2,
      aux_sym_literal_token1,
      sym_identifier,
    ACTIONS(277), 24,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_SEMI,
      anon_sym_if,
      anon_sym_while,
      sym_switch_type_keyword,
      sym_def_type_keyword,
      anon_sym_calc,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
      anon_sym_DQUOTE,
  [4127] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 2,
      aux_sym_literal_token1,
      sym_identifier,
    ACTIONS(249), 24,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_SEMI,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      sym_switch_type_keyword,
      anon_sym_case,
      sym_def_type_keyword,
      anon_sym_calc,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
      anon_sym_DQUOTE,
  [4161] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 2,
      aux_sym_literal_token1,
      sym_identifier,
    ACTIONS(253), 24,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_SEMI,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      sym_switch_type_keyword,
      anon_sym_case,
      sym_def_type_keyword,
      anon_sym_calc,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
      anon_sym_DQUOTE,
  [4195] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 2,
      aux_sym_literal_token1,
      sym_identifier,
    ACTIONS(257), 24,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_SEMI,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      sym_switch_type_keyword,
      anon_sym_case,
      sym_def_type_keyword,
      anon_sym_calc,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
      anon_sym_DQUOTE,
  [4229] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 2,
      aux_sym_literal_token1,
      sym_identifier,
    ACTIONS(261), 24,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_SEMI,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      sym_switch_type_keyword,
      anon_sym_case,
      sym_def_type_keyword,
      anon_sym_calc,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
      anon_sym_DQUOTE,
  [4263] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 2,
      aux_sym_literal_token1,
      sym_identifier,
    ACTIONS(265), 24,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_SEMI,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      sym_switch_type_keyword,
      anon_sym_case,
      sym_def_type_keyword,
      anon_sym_calc,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
      anon_sym_DQUOTE,
  [4297] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 2,
      aux_sym_literal_token1,
      sym_identifier,
    ACTIONS(269), 24,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_SEMI,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      sym_switch_type_keyword,
      anon_sym_case,
      sym_def_type_keyword,
      anon_sym_calc,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
      anon_sym_DQUOTE,
  [4331] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 2,
      aux_sym_literal_token1,
      sym_identifier,
    ACTIONS(273), 24,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_SEMI,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      sym_switch_type_keyword,
      anon_sym_case,
      sym_def_type_keyword,
      anon_sym_calc,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
      anon_sym_DQUOTE,
  [4365] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 2,
      aux_sym_literal_token1,
      sym_identifier,
    ACTIONS(231), 24,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_SEMI,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      sym_switch_type_keyword,
      anon_sym_case,
      sym_def_type_keyword,
      anon_sym_calc,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
      anon_sym_DQUOTE,
  [4399] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 2,
      aux_sym_literal_token1,
      sym_identifier,
    ACTIONS(277), 24,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_SEMI,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      sym_switch_type_keyword,
      anon_sym_case,
      sym_def_type_keyword,
      anon_sym_calc,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
      anon_sym_DQUOTE,
  [4433] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 2,
      aux_sym_literal_token1,
      sym_identifier,
    ACTIONS(281), 24,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_SEMI,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      sym_switch_type_keyword,
      anon_sym_case,
      sym_def_type_keyword,
      anon_sym_calc,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
      anon_sym_DQUOTE,
  [4467] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 2,
      aux_sym_literal_token1,
      sym_identifier,
    ACTIONS(285), 24,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_SEMI,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      sym_switch_type_keyword,
      anon_sym_case,
      sym_def_type_keyword,
      anon_sym_calc,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
      anon_sym_DQUOTE,
  [4501] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 2,
      aux_sym_literal_token1,
      sym_identifier,
    ACTIONS(289), 24,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_SEMI,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      sym_switch_type_keyword,
      anon_sym_case,
      sym_def_type_keyword,
      anon_sym_calc,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
      anon_sym_DQUOTE,
  [4535] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 2,
      aux_sym_literal_token1,
      sym_identifier,
    ACTIONS(293), 24,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_SEMI,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      sym_switch_type_keyword,
      anon_sym_case,
      sym_def_type_keyword,
      anon_sym_calc,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
      anon_sym_DQUOTE,
  [4569] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 2,
      aux_sym_literal_token1,
      sym_identifier,
    ACTIONS(253), 24,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_SEMI,
      anon_sym_if,
      anon_sym_while,
      sym_switch_type_keyword,
      sym_def_type_keyword,
      anon_sym_calc,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
      anon_sym_DQUOTE,
  [4603] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 2,
      aux_sym_literal_token1,
      sym_identifier,
    ACTIONS(245), 24,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_SEMI,
      anon_sym_if,
      anon_sym_while,
      sym_switch_type_keyword,
      sym_def_type_keyword,
      anon_sym_calc,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
      anon_sym_DQUOTE,
  [4637] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 2,
      aux_sym_literal_token1,
      sym_identifier,
    ACTIONS(257), 24,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_SEMI,
      anon_sym_if,
      anon_sym_while,
      sym_switch_type_keyword,
      sym_def_type_keyword,
      anon_sym_calc,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
      anon_sym_DQUOTE,
  [4671] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_DOLLAR,
    ACTIONS(82), 1,
      anon_sym_calc,
    ACTIONS(88), 1,
      anon_sym_CARET,
    ACTIONS(90), 1,
      aux_sym_literal_token1,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    STATE(149), 1,
      sym_string_literal,
    ACTIONS(84), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(86), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    ACTIONS(92), 5,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
    STATE(204), 9,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
      sym_constant_variable,
      sym_literal,
  [4725] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_DOLLAR,
    ACTIONS(82), 1,
      anon_sym_calc,
    ACTIONS(88), 1,
      anon_sym_CARET,
    ACTIONS(90), 1,
      aux_sym_literal_token1,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    STATE(149), 1,
      sym_string_literal,
    ACTIONS(84), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(86), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    ACTIONS(92), 5,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
    STATE(277), 9,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
      sym_constant_variable,
      sym_literal,
  [4779] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_DOLLAR,
    ACTIONS(82), 1,
      anon_sym_calc,
    ACTIONS(88), 1,
      anon_sym_CARET,
    ACTIONS(90), 1,
      aux_sym_literal_token1,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    STATE(149), 1,
      sym_string_literal,
    ACTIONS(84), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(86), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    ACTIONS(92), 5,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
    STATE(245), 9,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
      sym_constant_variable,
      sym_literal,
  [4833] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 2,
      aux_sym_literal_token1,
      sym_identifier,
    ACTIONS(269), 24,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_SEMI,
      anon_sym_if,
      anon_sym_while,
      sym_switch_type_keyword,
      sym_def_type_keyword,
      anon_sym_calc,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
      anon_sym_DQUOTE,
  [4867] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_DOLLAR,
    ACTIONS(82), 1,
      anon_sym_calc,
    ACTIONS(88), 1,
      anon_sym_CARET,
    ACTIONS(90), 1,
      aux_sym_literal_token1,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    STATE(149), 1,
      sym_string_literal,
    ACTIONS(84), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(86), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    ACTIONS(92), 5,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
    STATE(259), 9,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
      sym_constant_variable,
      sym_literal,
  [4921] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 2,
      aux_sym_literal_token1,
      sym_identifier,
    ACTIONS(245), 24,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_SEMI,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      sym_switch_type_keyword,
      anon_sym_case,
      sym_def_type_keyword,
      anon_sym_calc,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
      anon_sym_DQUOTE,
  [4955] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 2,
      aux_sym_literal_token1,
      sym_identifier,
    ACTIONS(293), 23,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_SEMI,
      anon_sym_if,
      anon_sym_while,
      sym_switch_type_keyword,
      anon_sym_case,
      sym_def_type_keyword,
      anon_sym_calc,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
      anon_sym_DQUOTE,
  [4988] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 2,
      aux_sym_literal_token1,
      sym_identifier,
    ACTIONS(269), 23,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_SEMI,
      anon_sym_if,
      anon_sym_while,
      sym_switch_type_keyword,
      anon_sym_case,
      sym_def_type_keyword,
      anon_sym_calc,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
      anon_sym_DQUOTE,
  [5021] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 2,
      aux_sym_literal_token1,
      sym_identifier,
    ACTIONS(261), 23,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_SEMI,
      anon_sym_if,
      anon_sym_while,
      sym_switch_type_keyword,
      anon_sym_case,
      sym_def_type_keyword,
      anon_sym_calc,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
      anon_sym_DQUOTE,
  [5054] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 2,
      aux_sym_literal_token1,
      sym_identifier,
    ACTIONS(257), 23,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_SEMI,
      anon_sym_if,
      anon_sym_while,
      sym_switch_type_keyword,
      anon_sym_case,
      sym_def_type_keyword,
      anon_sym_calc,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
      anon_sym_DQUOTE,
  [5087] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 2,
      aux_sym_literal_token1,
      sym_identifier,
    ACTIONS(237), 23,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_SEMI,
      anon_sym_if,
      anon_sym_while,
      sym_switch_type_keyword,
      anon_sym_case,
      sym_def_type_keyword,
      anon_sym_calc,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
      anon_sym_DQUOTE,
  [5120] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 2,
      aux_sym_literal_token1,
      sym_identifier,
    ACTIONS(265), 23,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_SEMI,
      anon_sym_if,
      anon_sym_while,
      sym_switch_type_keyword,
      anon_sym_case,
      sym_def_type_keyword,
      anon_sym_calc,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
      anon_sym_DQUOTE,
  [5153] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 2,
      aux_sym_literal_token1,
      sym_identifier,
    ACTIONS(241), 23,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_SEMI,
      anon_sym_if,
      anon_sym_while,
      sym_switch_type_keyword,
      anon_sym_case,
      sym_def_type_keyword,
      anon_sym_calc,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
      anon_sym_DQUOTE,
  [5186] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 2,
      aux_sym_literal_token1,
      sym_identifier,
    ACTIONS(245), 23,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_SEMI,
      anon_sym_if,
      anon_sym_while,
      sym_switch_type_keyword,
      anon_sym_case,
      sym_def_type_keyword,
      anon_sym_calc,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
      anon_sym_DQUOTE,
  [5219] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 2,
      aux_sym_literal_token1,
      sym_identifier,
    ACTIONS(249), 23,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_SEMI,
      anon_sym_if,
      anon_sym_while,
      sym_switch_type_keyword,
      anon_sym_case,
      sym_def_type_keyword,
      anon_sym_calc,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
      anon_sym_DQUOTE,
  [5252] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 2,
      aux_sym_literal_token1,
      sym_identifier,
    ACTIONS(253), 23,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_SEMI,
      anon_sym_if,
      anon_sym_while,
      sym_switch_type_keyword,
      anon_sym_case,
      sym_def_type_keyword,
      anon_sym_calc,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
      anon_sym_DQUOTE,
  [5285] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 2,
      aux_sym_literal_token1,
      sym_identifier,
    ACTIONS(273), 23,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_SEMI,
      anon_sym_if,
      anon_sym_while,
      sym_switch_type_keyword,
      anon_sym_case,
      sym_def_type_keyword,
      anon_sym_calc,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
      anon_sym_DQUOTE,
  [5318] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 2,
      aux_sym_literal_token1,
      sym_identifier,
    ACTIONS(281), 23,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_SEMI,
      anon_sym_if,
      anon_sym_while,
      sym_switch_type_keyword,
      anon_sym_case,
      sym_def_type_keyword,
      anon_sym_calc,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
      anon_sym_DQUOTE,
  [5351] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 2,
      aux_sym_literal_token1,
      sym_identifier,
    ACTIONS(277), 23,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_SEMI,
      anon_sym_if,
      anon_sym_while,
      sym_switch_type_keyword,
      anon_sym_case,
      sym_def_type_keyword,
      anon_sym_calc,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
      anon_sym_DQUOTE,
  [5384] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 2,
      aux_sym_literal_token1,
      sym_identifier,
    ACTIONS(285), 23,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_SEMI,
      anon_sym_if,
      anon_sym_while,
      sym_switch_type_keyword,
      anon_sym_case,
      sym_def_type_keyword,
      anon_sym_calc,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
      anon_sym_DQUOTE,
  [5417] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 2,
      aux_sym_literal_token1,
      sym_identifier,
    ACTIONS(289), 23,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_SEMI,
      anon_sym_if,
      anon_sym_while,
      sym_switch_type_keyword,
      anon_sym_case,
      sym_def_type_keyword,
      anon_sym_calc,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token2,
      aux_sym_literal_token3,
      aux_sym_literal_token4,
      aux_sym_literal_token5,
      anon_sym_null,
      anon_sym_DQUOTE,
  [5450] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    STATE(148), 1,
      sym_parenthesis,
    ACTIONS(301), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(299), 14,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5481] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    ACTIONS(307), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(303), 14,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5509] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(309), 15,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5535] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(313), 15,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5561] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      anon_sym_LPAREN,
    ACTIONS(321), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(317), 14,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5589] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(323), 14,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5614] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(327), 14,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5639] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(331), 14,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5664] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(335), 14,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5689] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(339), 14,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5714] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(343), 14,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5739] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(347), 14,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5764] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(351), 14,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5789] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(355), 14,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5814] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(359), 14,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5839] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(363), 14,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5864] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_RPAREN,
    ACTIONS(375), 1,
      anon_sym_AMP,
    ACTIONS(377), 1,
      anon_sym_PIPE,
    ACTIONS(369), 2,
      anon_sym_EQ,
      anon_sym_BANG,
    ACTIONS(371), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(373), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [5889] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(373), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(379), 5,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_PIPE,
  [5908] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(381), 7,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_PIPE,
  [5925] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_AMP,
    ACTIONS(377), 1,
      anon_sym_PIPE,
    ACTIONS(385), 1,
      anon_sym_RPAREN,
    ACTIONS(369), 2,
      anon_sym_EQ,
      anon_sym_BANG,
    ACTIONS(371), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(373), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [5950] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_AMP,
    ACTIONS(377), 1,
      anon_sym_PIPE,
    ACTIONS(387), 1,
      anon_sym_RPAREN,
    ACTIONS(369), 2,
      anon_sym_EQ,
      anon_sym_BANG,
    ACTIONS(371), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(373), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [5975] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_AMP,
    ACTIONS(377), 1,
      anon_sym_PIPE,
    ACTIONS(389), 1,
      anon_sym_RPAREN,
    ACTIONS(369), 2,
      anon_sym_EQ,
      anon_sym_BANG,
    ACTIONS(371), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(373), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [6000] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(381), 7,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_PIPE,
  [6017] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_AMP,
    ACTIONS(377), 1,
      anon_sym_PIPE,
    ACTIONS(391), 1,
      anon_sym_RPAREN,
    ACTIONS(369), 2,
      anon_sym_EQ,
      anon_sym_BANG,
    ACTIONS(371), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(373), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [6042] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_AMP,
    ACTIONS(377), 1,
      anon_sym_PIPE,
    ACTIONS(393), 1,
      anon_sym_RPAREN,
    ACTIONS(369), 2,
      anon_sym_EQ,
      anon_sym_BANG,
    ACTIONS(371), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(373), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [6067] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(379), 7,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_PIPE,
  [6084] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 2,
      anon_sym_EQ,
      anon_sym_BANG,
    ACTIONS(371), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(373), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(379), 3,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
  [6105] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_AMP,
    ACTIONS(377), 1,
      anon_sym_PIPE,
    ACTIONS(397), 1,
      anon_sym_RPAREN,
    ACTIONS(369), 2,
      anon_sym_EQ,
      anon_sym_BANG,
    ACTIONS(371), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(373), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [6130] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_AMP,
    ACTIONS(369), 2,
      anon_sym_EQ,
      anon_sym_BANG,
    ACTIONS(371), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(373), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(379), 2,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [6153] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(379), 7,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_PIPE,
  [6170] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_AMP,
    ACTIONS(377), 1,
      anon_sym_PIPE,
    ACTIONS(399), 1,
      anon_sym_RPAREN,
    ACTIONS(369), 2,
      anon_sym_EQ,
      anon_sym_BANG,
    ACTIONS(371), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(373), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [6195] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_AMP,
    ACTIONS(377), 1,
      anon_sym_PIPE,
    ACTIONS(401), 1,
      anon_sym_RPAREN,
    ACTIONS(369), 2,
      anon_sym_EQ,
      anon_sym_BANG,
    ACTIONS(371), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(373), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [6220] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_RPAREN,
    ACTIONS(405), 1,
      anon_sym_AMP,
    ACTIONS(407), 1,
      anon_sym_PIPE,
    ACTIONS(411), 1,
      anon_sym_SLASH,
    ACTIONS(409), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(413), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6244] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_SLASH,
    ACTIONS(415), 7,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6260] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_SLASH,
    ACTIONS(409), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(415), 5,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6278] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_AMP,
    ACTIONS(407), 1,
      anon_sym_PIPE,
    ACTIONS(411), 1,
      anon_sym_SLASH,
    ACTIONS(419), 1,
      anon_sym_RPAREN,
    ACTIONS(409), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(413), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6302] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_SLASH,
    ACTIONS(409), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(413), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(415), 3,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
  [6322] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_SLASH,
    ACTIONS(421), 7,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6338] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_AMP,
    ACTIONS(411), 1,
      anon_sym_SLASH,
    ACTIONS(409), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(413), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(415), 2,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [6360] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_SLASH,
    ACTIONS(415), 7,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6376] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_SLASH,
    ACTIONS(421), 7,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6392] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      anon_sym_LT,
    ACTIONS(427), 1,
      anon_sym_DQUOTE,
    STATE(183), 2,
      sym_string_interpolation,
      aux_sym_string_literal_repeat1,
    ACTIONS(429), 3,
      sym__string_chars,
      sym_escape_sequence,
      sym_string_tag,
  [6411] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_LT,
    ACTIONS(434), 1,
      anon_sym_DQUOTE,
    STATE(182), 2,
      sym_string_interpolation,
      aux_sym_string_literal_repeat1,
    ACTIONS(436), 3,
      sym__string_chars,
      sym_escape_sequence,
      sym_string_tag,
  [6430] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      anon_sym_LT,
    ACTIONS(439), 1,
      anon_sym_DQUOTE,
    STATE(182), 2,
      sym_string_interpolation,
      aux_sym_string_literal_repeat1,
    ACTIONS(441), 3,
      sym__string_chars,
      sym_escape_sequence,
      sym_string_tag,
  [6449] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_DOLLAR,
    STATE(233), 1,
      sym_assignable_variable,
    ACTIONS(84), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    STATE(234), 3,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
  [6468] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_COMMA,
    STATE(188), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(445), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON,
  [6483] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_COMMA,
    STATE(186), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(450), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON,
  [6498] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LT,
    ACTIONS(454), 4,
      sym__string_chars,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym_string_tag,
  [6511] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_COMMA,
    STATE(186), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(456), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON,
  [6526] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_RBRACE,
    ACTIONS(460), 1,
      anon_sym_case,
    STATE(192), 2,
      sym_switch_case,
      aux_sym_switch_statement_repeat1,
  [6540] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    ACTIONS(462), 1,
      anon_sym_SEMI,
    ACTIONS(464), 1,
      anon_sym_EQ,
    STATE(258), 1,
      sym_parenthesis,
  [6556] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      ts_builtin_sym_end,
    ACTIONS(468), 1,
      anon_sym_LBRACK,
    STATE(191), 2,
      sym_script,
      aux_sym_source_file_repeat1,
  [6570] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_case,
    ACTIONS(471), 1,
      anon_sym_RBRACE,
    STATE(203), 2,
      sym_switch_case,
      aux_sym_switch_statement_repeat1,
  [6584] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_case,
    ACTIONS(473), 1,
      anon_sym_RBRACE,
    STATE(195), 2,
      sym_switch_case,
      aux_sym_switch_statement_repeat1,
  [6598] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_case,
    ACTIONS(475), 1,
      anon_sym_RBRACE,
    STATE(203), 2,
      sym_switch_case,
      aux_sym_switch_statement_repeat1,
  [6612] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_case,
    ACTIONS(477), 1,
      anon_sym_RBRACE,
    STATE(203), 2,
      sym_switch_case,
      aux_sym_switch_statement_repeat1,
  [6626] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_case,
    ACTIONS(479), 1,
      anon_sym_RBRACE,
    STATE(203), 2,
      sym_switch_case,
      aux_sym_switch_statement_repeat1,
  [6640] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      anon_sym_SEMI,
    ACTIONS(483), 1,
      anon_sym_EQ,
    STATE(261), 1,
      sym_parenthesis,
  [6656] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(485), 1,
      ts_builtin_sym_end,
    STATE(191), 2,
      sym_script,
      aux_sym_source_file_repeat1,
  [6670] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_case,
    ACTIONS(487), 1,
      anon_sym_RBRACE,
    STATE(196), 2,
      sym_switch_case,
      aux_sym_switch_statement_repeat1,
  [6684] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    ACTIONS(489), 1,
      anon_sym_SEMI,
    ACTIONS(491), 1,
      anon_sym_EQ,
    STATE(272), 1,
      sym_parenthesis,
  [6700] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_case,
    ACTIONS(493), 1,
      anon_sym_RBRACE,
    STATE(194), 2,
      sym_switch_case,
      aux_sym_switch_statement_repeat1,
  [6714] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    ACTIONS(495), 1,
      anon_sym_SEMI,
    ACTIONS(497), 1,
      anon_sym_EQ,
    STATE(244), 1,
      sym_parenthesis,
  [6730] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_RBRACE,
    ACTIONS(501), 1,
      anon_sym_case,
    STATE(203), 2,
      sym_switch_case,
      aux_sym_switch_statement_repeat1,
  [6744] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON,
  [6754] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_COMMA,
    ACTIONS(506), 1,
      anon_sym_EQ,
    STATE(222), 1,
      aux_sym_assignable_variable_list_repeat1,
  [6767] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_COMMA,
    ACTIONS(510), 1,
      anon_sym_RPAREN,
    STATE(209), 1,
      aux_sym_parameter_list_repeat1,
  [6780] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_COMMA,
    ACTIONS(515), 1,
      anon_sym_RPAREN,
    STATE(207), 1,
      aux_sym_type_list_repeat1,
  [6793] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      aux_sym_parameter_token2,
    ACTIONS(517), 1,
      aux_sym_parameter_token1,
    STATE(231), 1,
      sym_parameter,
  [6806] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_COMMA,
    ACTIONS(519), 1,
      anon_sym_RPAREN,
    STATE(221), 1,
      aux_sym_parameter_list_repeat1,
  [6819] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      sym_identifier,
    ACTIONS(523), 1,
      aux_sym__advanced_identifier_token1,
    STATE(154), 1,
      sym__advanced_identifier,
  [6832] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      sym_identifier,
    ACTIONS(523), 1,
      aux_sym__advanced_identifier_token1,
    STATE(155), 1,
      sym__advanced_identifier,
  [6845] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      sym_identifier,
    ACTIONS(523), 1,
      aux_sym__advanced_identifier_token1,
    STATE(197), 1,
      sym__advanced_identifier,
  [6858] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      sym_identifier,
    ACTIONS(523), 1,
      aux_sym__advanced_identifier_token1,
    STATE(140), 1,
      sym__advanced_identifier,
  [6871] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_SEMI,
    ACTIONS(525), 2,
      anon_sym_COMMA,
      anon_sym_EQ,
  [6882] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_COMMA,
    ACTIONS(529), 1,
      anon_sym_RPAREN,
    STATE(207), 1,
      aux_sym_type_list_repeat1,
  [6895] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      sym_identifier,
    ACTIONS(523), 1,
      aux_sym__advanced_identifier_token1,
    STATE(200), 1,
      sym__advanced_identifier,
  [6908] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      anon_sym_COMMA,
    ACTIONS(534), 1,
      anon_sym_EQ,
    STATE(217), 1,
      aux_sym_assignable_variable_list_repeat1,
  [6921] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_COMMA,
    ACTIONS(536), 1,
      anon_sym_RPAREN,
    STATE(215), 1,
      aux_sym_type_list_repeat1,
  [6934] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      sym_identifier,
    ACTIONS(523), 1,
      aux_sym__advanced_identifier_token1,
    STATE(202), 1,
      sym__advanced_identifier,
  [6947] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      sym_identifier,
    ACTIONS(523), 1,
      aux_sym__advanced_identifier_token1,
    STATE(190), 1,
      sym__advanced_identifier,
  [6960] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      anon_sym_COMMA,
    ACTIONS(541), 1,
      anon_sym_RPAREN,
    STATE(221), 1,
      aux_sym_parameter_list_repeat1,
  [6973] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_COMMA,
    ACTIONS(543), 1,
      anon_sym_EQ,
    STATE(217), 1,
      aux_sym_assignable_variable_list_repeat1,
  [6986] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      sym_identifier,
    ACTIONS(523), 1,
      aux_sym__advanced_identifier_token1,
    STATE(230), 1,
      sym__advanced_identifier,
  [6999] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7007] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      anon_sym_LPAREN,
    ACTIONS(547), 1,
      anon_sym_SEMI,
  [7017] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_LPAREN,
    ACTIONS(551), 1,
      anon_sym_SEMI,
  [7027] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7035] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_LPAREN,
    ACTIONS(557), 1,
      anon_sym_SEMI,
  [7045] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      aux_sym_parameter_token1,
    STATE(224), 1,
      sym_type,
  [7055] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7063] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7071] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_LPAREN,
    ACTIONS(565), 1,
      anon_sym_SEMI,
  [7081] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 2,
      anon_sym_COMMA,
      anon_sym_EQ,
  [7089] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 2,
      anon_sym_COMMA,
      anon_sym_EQ,
  [7097] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    STATE(262), 1,
      sym_parenthesis,
  [7107] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    STATE(270), 1,
      sym_parenthesis,
  [7117] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    STATE(278), 1,
      sym_parenthesis,
  [7127] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    STATE(264), 1,
      sym_parenthesis,
  [7137] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_RPAREN,
  [7144] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_SEMI,
  [7151] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_SEMI,
  [7158] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_GT,
  [7165] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_LPAREN,
  [7172] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      anon_sym_SEMI,
  [7179] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_SEMI,
  [7186] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      anon_sym_LPAREN,
  [7193] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      anon_sym_LPAREN,
  [7200] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_SEMI,
  [7207] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      ts_builtin_sym_end,
  [7214] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_SEMI,
  [7221] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_RPAREN,
  [7228] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_SEMI,
  [7235] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      sym_identifier,
  [7242] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_SEMI,
  [7249] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      anon_sym_SEMI,
  [7256] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_RPAREN,
  [7263] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_SEMI,
  [7270] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_SEMI,
  [7277] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_SEMI,
  [7284] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      anon_sym_SEMI,
  [7291] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_SEMI,
  [7298] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_LBRACE,
  [7305] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_DOLLAR,
  [7312] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_LBRACE,
  [7319] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_RPAREN,
  [7326] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_SEMI,
  [7333] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      anon_sym_RPAREN,
  [7340] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_RPAREN,
  [7347] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_SEMI,
  [7354] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      anon_sym_LBRACE,
  [7361] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      anon_sym_RBRACK,
  [7368] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      anon_sym_SEMI,
  [7375] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      anon_sym_RPAREN,
  [7382] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      sym_identifier,
  [7389] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_COLON,
  [7396] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 1,
      anon_sym_DOLLAR,
  [7403] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_SEMI,
  [7410] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      anon_sym_LBRACE,
  [7417] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      sym_identifier,
  [7424] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      anon_sym_SEMI,
  [7431] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 1,
      anon_sym_RPAREN,
  [7438] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 1,
      anon_sym_RPAREN,
  [7445] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 1,
      anon_sym_SEMI,
  [7452] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      anon_sym_LPAREN,
  [7459] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_COMMA,
  [7466] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      anon_sym_DOLLAR,
  [7473] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      anon_sym_EQ,
  [7480] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      anon_sym_SEMI,
  [7487] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      anon_sym_LPAREN,
  [7494] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 1,
      anon_sym_SEMI,
  [7501] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 1,
      anon_sym_DOLLAR,
  [7508] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 1,
      anon_sym_EQ,
  [7515] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 1,
      anon_sym_RPAREN,
  [7522] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 1,
      anon_sym_LPAREN,
  [7529] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 1,
      anon_sym_SEMI,
  [7536] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_DOLLAR,
  [7543] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 1,
      anon_sym_EQ,
  [7550] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(683), 1,
      anon_sym_EQ,
  [7557] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 1,
      anon_sym_LPAREN,
  [7564] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 1,
      anon_sym_LPAREN,
  [7571] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 1,
      anon_sym_LPAREN,
  [7578] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(26)] = 0,
  [SMALL_STATE(27)] = 96,
  [SMALL_STATE(28)] = 192,
  [SMALL_STATE(29)] = 288,
  [SMALL_STATE(30)] = 384,
  [SMALL_STATE(31)] = 480,
  [SMALL_STATE(32)] = 576,
  [SMALL_STATE(33)] = 672,
  [SMALL_STATE(34)] = 768,
  [SMALL_STATE(35)] = 864,
  [SMALL_STATE(36)] = 960,
  [SMALL_STATE(37)] = 1027,
  [SMALL_STATE(38)] = 1093,
  [SMALL_STATE(39)] = 1159,
  [SMALL_STATE(40)] = 1219,
  [SMALL_STATE(41)] = 1279,
  [SMALL_STATE(42)] = 1339,
  [SMALL_STATE(43)] = 1399,
  [SMALL_STATE(44)] = 1459,
  [SMALL_STATE(45)] = 1519,
  [SMALL_STATE(46)] = 1579,
  [SMALL_STATE(47)] = 1636,
  [SMALL_STATE(48)] = 1693,
  [SMALL_STATE(49)] = 1750,
  [SMALL_STATE(50)] = 1807,
  [SMALL_STATE(51)] = 1864,
  [SMALL_STATE(52)] = 1921,
  [SMALL_STATE(53)] = 1978,
  [SMALL_STATE(54)] = 2035,
  [SMALL_STATE(55)] = 2092,
  [SMALL_STATE(56)] = 2149,
  [SMALL_STATE(57)] = 2206,
  [SMALL_STATE(58)] = 2243,
  [SMALL_STATE(59)] = 2278,
  [SMALL_STATE(60)] = 2313,
  [SMALL_STATE(61)] = 2348,
  [SMALL_STATE(62)] = 2383,
  [SMALL_STATE(63)] = 2440,
  [SMALL_STATE(64)] = 2475,
  [SMALL_STATE(65)] = 2510,
  [SMALL_STATE(66)] = 2545,
  [SMALL_STATE(67)] = 2580,
  [SMALL_STATE(68)] = 2615,
  [SMALL_STATE(69)] = 2650,
  [SMALL_STATE(70)] = 2685,
  [SMALL_STATE(71)] = 2720,
  [SMALL_STATE(72)] = 2755,
  [SMALL_STATE(73)] = 2790,
  [SMALL_STATE(74)] = 2825,
  [SMALL_STATE(75)] = 2860,
  [SMALL_STATE(76)] = 2917,
  [SMALL_STATE(77)] = 2974,
  [SMALL_STATE(78)] = 3031,
  [SMALL_STATE(79)] = 3088,
  [SMALL_STATE(80)] = 3145,
  [SMALL_STATE(81)] = 3202,
  [SMALL_STATE(82)] = 3259,
  [SMALL_STATE(83)] = 3316,
  [SMALL_STATE(84)] = 3373,
  [SMALL_STATE(85)] = 3430,
  [SMALL_STATE(86)] = 3487,
  [SMALL_STATE(87)] = 3541,
  [SMALL_STATE(88)] = 3575,
  [SMALL_STATE(89)] = 3609,
  [SMALL_STATE(90)] = 3663,
  [SMALL_STATE(91)] = 3697,
  [SMALL_STATE(92)] = 3731,
  [SMALL_STATE(93)] = 3765,
  [SMALL_STATE(94)] = 3799,
  [SMALL_STATE(95)] = 3833,
  [SMALL_STATE(96)] = 3867,
  [SMALL_STATE(97)] = 3901,
  [SMALL_STATE(98)] = 3955,
  [SMALL_STATE(99)] = 3991,
  [SMALL_STATE(100)] = 4025,
  [SMALL_STATE(101)] = 4059,
  [SMALL_STATE(102)] = 4093,
  [SMALL_STATE(103)] = 4127,
  [SMALL_STATE(104)] = 4161,
  [SMALL_STATE(105)] = 4195,
  [SMALL_STATE(106)] = 4229,
  [SMALL_STATE(107)] = 4263,
  [SMALL_STATE(108)] = 4297,
  [SMALL_STATE(109)] = 4331,
  [SMALL_STATE(110)] = 4365,
  [SMALL_STATE(111)] = 4399,
  [SMALL_STATE(112)] = 4433,
  [SMALL_STATE(113)] = 4467,
  [SMALL_STATE(114)] = 4501,
  [SMALL_STATE(115)] = 4535,
  [SMALL_STATE(116)] = 4569,
  [SMALL_STATE(117)] = 4603,
  [SMALL_STATE(118)] = 4637,
  [SMALL_STATE(119)] = 4671,
  [SMALL_STATE(120)] = 4725,
  [SMALL_STATE(121)] = 4779,
  [SMALL_STATE(122)] = 4833,
  [SMALL_STATE(123)] = 4867,
  [SMALL_STATE(124)] = 4921,
  [SMALL_STATE(125)] = 4955,
  [SMALL_STATE(126)] = 4988,
  [SMALL_STATE(127)] = 5021,
  [SMALL_STATE(128)] = 5054,
  [SMALL_STATE(129)] = 5087,
  [SMALL_STATE(130)] = 5120,
  [SMALL_STATE(131)] = 5153,
  [SMALL_STATE(132)] = 5186,
  [SMALL_STATE(133)] = 5219,
  [SMALL_STATE(134)] = 5252,
  [SMALL_STATE(135)] = 5285,
  [SMALL_STATE(136)] = 5318,
  [SMALL_STATE(137)] = 5351,
  [SMALL_STATE(138)] = 5384,
  [SMALL_STATE(139)] = 5417,
  [SMALL_STATE(140)] = 5450,
  [SMALL_STATE(141)] = 5481,
  [SMALL_STATE(142)] = 5509,
  [SMALL_STATE(143)] = 5535,
  [SMALL_STATE(144)] = 5561,
  [SMALL_STATE(145)] = 5589,
  [SMALL_STATE(146)] = 5614,
  [SMALL_STATE(147)] = 5639,
  [SMALL_STATE(148)] = 5664,
  [SMALL_STATE(149)] = 5689,
  [SMALL_STATE(150)] = 5714,
  [SMALL_STATE(151)] = 5739,
  [SMALL_STATE(152)] = 5764,
  [SMALL_STATE(153)] = 5789,
  [SMALL_STATE(154)] = 5814,
  [SMALL_STATE(155)] = 5839,
  [SMALL_STATE(156)] = 5864,
  [SMALL_STATE(157)] = 5889,
  [SMALL_STATE(158)] = 5908,
  [SMALL_STATE(159)] = 5925,
  [SMALL_STATE(160)] = 5950,
  [SMALL_STATE(161)] = 5975,
  [SMALL_STATE(162)] = 6000,
  [SMALL_STATE(163)] = 6017,
  [SMALL_STATE(164)] = 6042,
  [SMALL_STATE(165)] = 6067,
  [SMALL_STATE(166)] = 6084,
  [SMALL_STATE(167)] = 6105,
  [SMALL_STATE(168)] = 6130,
  [SMALL_STATE(169)] = 6153,
  [SMALL_STATE(170)] = 6170,
  [SMALL_STATE(171)] = 6195,
  [SMALL_STATE(172)] = 6220,
  [SMALL_STATE(173)] = 6244,
  [SMALL_STATE(174)] = 6260,
  [SMALL_STATE(175)] = 6278,
  [SMALL_STATE(176)] = 6302,
  [SMALL_STATE(177)] = 6322,
  [SMALL_STATE(178)] = 6338,
  [SMALL_STATE(179)] = 6360,
  [SMALL_STATE(180)] = 6376,
  [SMALL_STATE(181)] = 6392,
  [SMALL_STATE(182)] = 6411,
  [SMALL_STATE(183)] = 6430,
  [SMALL_STATE(184)] = 6449,
  [SMALL_STATE(185)] = 6468,
  [SMALL_STATE(186)] = 6483,
  [SMALL_STATE(187)] = 6498,
  [SMALL_STATE(188)] = 6511,
  [SMALL_STATE(189)] = 6526,
  [SMALL_STATE(190)] = 6540,
  [SMALL_STATE(191)] = 6556,
  [SMALL_STATE(192)] = 6570,
  [SMALL_STATE(193)] = 6584,
  [SMALL_STATE(194)] = 6598,
  [SMALL_STATE(195)] = 6612,
  [SMALL_STATE(196)] = 6626,
  [SMALL_STATE(197)] = 6640,
  [SMALL_STATE(198)] = 6656,
  [SMALL_STATE(199)] = 6670,
  [SMALL_STATE(200)] = 6684,
  [SMALL_STATE(201)] = 6700,
  [SMALL_STATE(202)] = 6714,
  [SMALL_STATE(203)] = 6730,
  [SMALL_STATE(204)] = 6744,
  [SMALL_STATE(205)] = 6754,
  [SMALL_STATE(206)] = 6767,
  [SMALL_STATE(207)] = 6780,
  [SMALL_STATE(208)] = 6793,
  [SMALL_STATE(209)] = 6806,
  [SMALL_STATE(210)] = 6819,
  [SMALL_STATE(211)] = 6832,
  [SMALL_STATE(212)] = 6845,
  [SMALL_STATE(213)] = 6858,
  [SMALL_STATE(214)] = 6871,
  [SMALL_STATE(215)] = 6882,
  [SMALL_STATE(216)] = 6895,
  [SMALL_STATE(217)] = 6908,
  [SMALL_STATE(218)] = 6921,
  [SMALL_STATE(219)] = 6934,
  [SMALL_STATE(220)] = 6947,
  [SMALL_STATE(221)] = 6960,
  [SMALL_STATE(222)] = 6973,
  [SMALL_STATE(223)] = 6986,
  [SMALL_STATE(224)] = 6999,
  [SMALL_STATE(225)] = 7007,
  [SMALL_STATE(226)] = 7017,
  [SMALL_STATE(227)] = 7027,
  [SMALL_STATE(228)] = 7035,
  [SMALL_STATE(229)] = 7045,
  [SMALL_STATE(230)] = 7055,
  [SMALL_STATE(231)] = 7063,
  [SMALL_STATE(232)] = 7071,
  [SMALL_STATE(233)] = 7081,
  [SMALL_STATE(234)] = 7089,
  [SMALL_STATE(235)] = 7097,
  [SMALL_STATE(236)] = 7107,
  [SMALL_STATE(237)] = 7117,
  [SMALL_STATE(238)] = 7127,
  [SMALL_STATE(239)] = 7137,
  [SMALL_STATE(240)] = 7144,
  [SMALL_STATE(241)] = 7151,
  [SMALL_STATE(242)] = 7158,
  [SMALL_STATE(243)] = 7165,
  [SMALL_STATE(244)] = 7172,
  [SMALL_STATE(245)] = 7179,
  [SMALL_STATE(246)] = 7186,
  [SMALL_STATE(247)] = 7193,
  [SMALL_STATE(248)] = 7200,
  [SMALL_STATE(249)] = 7207,
  [SMALL_STATE(250)] = 7214,
  [SMALL_STATE(251)] = 7221,
  [SMALL_STATE(252)] = 7228,
  [SMALL_STATE(253)] = 7235,
  [SMALL_STATE(254)] = 7242,
  [SMALL_STATE(255)] = 7249,
  [SMALL_STATE(256)] = 7256,
  [SMALL_STATE(257)] = 7263,
  [SMALL_STATE(258)] = 7270,
  [SMALL_STATE(259)] = 7277,
  [SMALL_STATE(260)] = 7284,
  [SMALL_STATE(261)] = 7291,
  [SMALL_STATE(262)] = 7298,
  [SMALL_STATE(263)] = 7305,
  [SMALL_STATE(264)] = 7312,
  [SMALL_STATE(265)] = 7319,
  [SMALL_STATE(266)] = 7326,
  [SMALL_STATE(267)] = 7333,
  [SMALL_STATE(268)] = 7340,
  [SMALL_STATE(269)] = 7347,
  [SMALL_STATE(270)] = 7354,
  [SMALL_STATE(271)] = 7361,
  [SMALL_STATE(272)] = 7368,
  [SMALL_STATE(273)] = 7375,
  [SMALL_STATE(274)] = 7382,
  [SMALL_STATE(275)] = 7389,
  [SMALL_STATE(276)] = 7396,
  [SMALL_STATE(277)] = 7403,
  [SMALL_STATE(278)] = 7410,
  [SMALL_STATE(279)] = 7417,
  [SMALL_STATE(280)] = 7424,
  [SMALL_STATE(281)] = 7431,
  [SMALL_STATE(282)] = 7438,
  [SMALL_STATE(283)] = 7445,
  [SMALL_STATE(284)] = 7452,
  [SMALL_STATE(285)] = 7459,
  [SMALL_STATE(286)] = 7466,
  [SMALL_STATE(287)] = 7473,
  [SMALL_STATE(288)] = 7480,
  [SMALL_STATE(289)] = 7487,
  [SMALL_STATE(290)] = 7494,
  [SMALL_STATE(291)] = 7501,
  [SMALL_STATE(292)] = 7508,
  [SMALL_STATE(293)] = 7515,
  [SMALL_STATE(294)] = 7522,
  [SMALL_STATE(295)] = 7529,
  [SMALL_STATE(296)] = 7536,
  [SMALL_STATE(297)] = 7543,
  [SMALL_STATE(298)] = 7550,
  [SMALL_STATE(299)] = 7557,
  [SMALL_STATE(300)] = 7564,
  [SMALL_STATE(301)] = 7571,
  [SMALL_STATE(302)] = 7578,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [14] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(213),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(226),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(91),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(247),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(246),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(238),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(263),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(243),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(210),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(253),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(211),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(149),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(149),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(181),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 5, 0, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 7, 0, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 9, 0, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 6, 0, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 8, 0, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 10, 0, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 11, 0, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_case, 3, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 12, 0, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_case, 4, 0, 0),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(232),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(129),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(300),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(289),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(236),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(291),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_statement, 1, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_statement, 1, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement, 2, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_statement, 2, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 2, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 2, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement, 3, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_statement, 3, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 4, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 4, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_statement, 4, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_statement, 4, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_statement, 4, 0, 5),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_statement, 4, 0, 5),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 4, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_statement, 4, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 5, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 5, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 5, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 5, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_statement, 5, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_statement, 5, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_declaration_statement, 5, 0, 5),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_declaration_statement, 5, 0, 5),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_statement, 6, 0, 5),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_statement, 6, 0, 5),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variable, 2, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_variable, 2, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__advanced_identifier, 1, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__advanced_identifier, 1, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesis, 3, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesis, 3, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 2, 0, 2),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 2, 0, 2),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_calc, 4, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_calc, 4, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 5, 0, 2),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 5, 0, 2),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_array_variable, 3, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_array_variable, 3, 0, 0),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4, 0, 2),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 4, 0, 2),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3, 0, 3),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3, 0, 3),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4, 0, 3),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 4, 0, 3),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game_variable, 2, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game_variable, 2, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_variable, 2, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant_variable, 2, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 1, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 1, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 3, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arithmetic, 3, 0, 0),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arithmetic, 3, 0, 0),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arithmetic, 1, 0, 0),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arithmetic, 1, 0, 0),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [431] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0),
  [436] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(182),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1, 0, 0),
  [447] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2, 0, 0), SHIFT_REPEAT(119),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2, 0, 0),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_interpolation, 3, 0, 0),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_interpolation, 3, 0, 0),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2, 0, 0),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [468] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(279),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_statement_repeat1, 2, 0, 0),
  [501] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignable_variable_list, 1, 0, 0),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 1, 0, 0),
  [512] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_list_repeat1, 2, 0, 0), SHIFT_REPEAT(229),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_list_repeat1, 2, 0, 0),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignable_variable, 1, 0, 0),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_list, 2, 0, 0),
  [531] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignable_variable_list_repeat1, 2, 0, 0), SHIFT_REPEAT(184),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignable_variable_list_repeat1, 2, 0, 0),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_list, 1, 0, 0),
  [538] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0), SHIFT_REPEAT(208),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignable_variable_list, 2, 0, 0),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, 0, 4),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [587] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__string_chars = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__string_chars] = sym__string_chars,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__string_chars] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_runescript_external_scanner_create(void);
void tree_sitter_runescript_external_scanner_destroy(void *);
bool tree_sitter_runescript_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_runescript_external_scanner_serialize(void *, char *);
void tree_sitter_runescript_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_runescript(void) {
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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_runescript_external_scanner_create,
      tree_sitter_runescript_external_scanner_destroy,
      tree_sitter_runescript_external_scanner_scan,
      tree_sitter_runescript_external_scanner_serialize,
      tree_sitter_runescript_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
