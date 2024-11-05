/**
 * @file Runescript grammar for tree-sitter
 * @author David Lysenko <lysenkodavid@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const LEFT_BRACKET = "[";
const RIGHT_BRACKET = "]";
const COMMA = ",";
const LEFT_BRACE = "{";
const RIGHT_BRACE = "}";
const SEMICOLON = ";";
const LEFT_PAREN = "(";
const RIGHT_PAREN = ")";
const DOLLAR = "$";
const TILDE = "~";
const AT = "@";
const CARET = "^";
const COLON = ":";
const QUOTE = '"';

const MUL = "*";
const DIV = "/";
const MOD = "%";
const DOTMOD = ".%";
const PLUS = "+";
const MINUS = "-";
const AND = "&";
const OR = "|";
const GT = ">";
const GTE = ">=";
const LT = "<";
const LTE = "<=";
const EQ = "=";
const EXCL = "!";

const NULL_LITERAL = "null";
const DEFAULT = "default";
const IF = "if";
const ELSE = "else";
const WHILE = "while";
const CALC = "calc";
const RETURN = "return";
const CASE = "case";

const IDENTIFIER = /[a-zA-Z0-9_+.:]+/;
const HEX_LITERAL = /0[xX][0-9a-fA-F]+/;
const BOOLEAN_LITERAL = /true|false/;
const COORD_LITERAL = /\d+_\d+_\d+_\d+_\d+/;
const MAPZONE_LITERAL = /\d+_\d+_\d+/;
const INTEGER_LITERAL = /-?\d+/;
const CHAR_LITERAL = /'(\\(\\|')|[^\\\r\n])'/;
const TYPE_ARRAY = new RegExp(IDENTIFIER.source + /array/.source);
const SWITCH_TYPE = new RegExp(/switch_/.source + IDENTIFIER.source);
const DEF_TYPE = new RegExp(/def_/.source + IDENTIFIER.source);

const PREC = {
  LITERAL: 2,
  OR: 3,
  AND: 4,
  EQUAL: 5,
  COMPARE: 6,
  PLUS: 7,
  MUL: 8,
  PARENS: 9,

  TYPE_LIST: 10,
};

const TAGS = ["br", "col", "str", "shad", "u", "img", "gt", "lt"];

module.exports = grammar({
  name: "runescript",

  externals: ($) => [$._string_chars],

  extras: ($) => [$.comment, /[\s\t\r\n]/],

  word: ($) => $.identifier,

  rules: {
    source_file: ($) => repeat($.script),

    // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
    comment: () =>
      token(
        choice(
          seq("//", /[^\r\n\u2028\u2029]*/),
          seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/"),
        ),
      ),

    script: ($) =>
      seq(
        LEFT_BRACKET,
        field("trigger", $.identifier),
        COMMA,
        field("subject", $.identifier),
        RIGHT_BRACKET,
        optional(
          seq(
            LEFT_PAREN,
            optional($.parameter_list),
            RIGHT_PAREN,
            optional(seq(LEFT_PAREN, optional($.type_list), RIGHT_PAREN)),
          ),
        ),
        repeat($._statement),
      ),

    parameter_list: ($) => seq($.parameter, repeat(seq(COMMA, $.parameter))),

    parameter: ($) =>
      seq(
        alias(choice(IDENTIFIER, TYPE_ARRAY), $.parameter_type),
        $.local_variable,
      ),

    type_list: ($) =>
      prec(PREC.TYPE_LIST, seq($.type, repeat(seq(COMMA, $.type)))),

    type: () => IDENTIFIER,

    // STATEMENTS
    _statement: ($) =>
      choice(
        $.block_statement,
        $.return_statement,
        $.if_statement,
        $.while_statement,
        $.switch_statement,
        $.declaration_statement,
        $.array_declaration_statement,
        $.assignment_statement,
        $.expression_statement,
        $.empty_statement,
      ),

    block_statement: ($) => seq(LEFT_BRACE, repeat($._statement), RIGHT_BRACE),

    return_statement: ($) =>
      seq(
        RETURN,
        optional(seq(LEFT_PAREN, optional($.expression_list), RIGHT_PAREN)),
        SEMICOLON,
      ),

    if_statement: ($) =>
      prec.left(
        seq(
          IF,
          LEFT_PAREN,
          $.condition,
          RIGHT_PAREN,
          $._statement,
          optional(seq(ELSE, $._statement)),
        ),
      ),

    while_statement: ($) =>
      seq(WHILE, LEFT_PAREN, $.condition, RIGHT_PAREN, $._statement),

    switch_statement: ($) =>
      seq(
        $.switch_type_keyword,
        $.parenthesis,
        LEFT_BRACE,
        repeat($.switch_case),
        RIGHT_BRACE,
      ),

    switch_type_keyword: () => SWITCH_TYPE,

    switch_case: ($) =>
      prec(
        1,
        seq(
          CASE,
          choice(DEFAULT, $.expression_list),
          COLON,
          repeat($._statement),
        ),
      ),

    declaration_statement: ($) =>
      seq(
        $.def_type_keyword,
        $.local_variable,
        optional(seq(EQ, $._expression)),
        SEMICOLON,
      ),

    array_declaration_statement: ($) =>
      seq(
        $.def_type_keyword,
        alias(seq(DOLLAR, $._advanced_identifier), $.declaration_variable),
        $.parenthesis,
        SEMICOLON,
      ),

    def_type_keyword: () => DEF_TYPE,

    assignment_statement: ($) =>
      seq($.assignable_variable_list, EQ, $.expression_list, SEMICOLON),

    expression_statement: ($) => seq($._expression, SEMICOLON),

    empty_statement: () => SEMICOLON,

    expression_list: ($) =>
      seq($._expression, repeat(seq(COMMA, $._expression))),

    parenthesis: ($) => seq(LEFT_PAREN, $._expression, RIGHT_PAREN),

    // EXPRESSIONS
    single_expression: ($) => seq($._expression),

    _expression: ($) =>
      choice(
        $.parenthesis,
        $.calc,
        $.call,
        $.local_variable,
        $.local_array_variable,
        $.game_variable,
        $.constant_variable,
        $.literal,
        $.identifier,
      ),

    condition: ($) =>
      prec.left(
        choice(
          prec.left(PREC.PARENS, seq(LEFT_PAREN, $.condition, RIGHT_PAREN)),
          prec.left(
            PREC.COMPARE,
            seq($.condition, choice(GT, GTE, LT, LTE), $.condition),
          ),
          prec.left(
            PREC.EQUAL,
            seq($.condition, choice(EQ, EXCL), $.condition),
          ),
          prec.left(PREC.AND, seq($.condition, AND, $.condition)),
          prec.left(PREC.OR, seq($.condition, OR, $.condition)),
          $._expression,
        ),
      ),

    calc: ($) => seq(CALC, LEFT_PAREN, $.arithmetic, RIGHT_PAREN),

    arithmetic: ($) =>
      prec.left(
        choice(
          prec.left(PREC.PARENS, seq(LEFT_PAREN, $.arithmetic, RIGHT_PAREN)),
          prec.left(
            PREC.MUL,
            seq($.arithmetic, choice(MUL, DIV, MOD), $.arithmetic),
          ),
          prec.left(
            PREC.PLUS,
            seq($.arithmetic, choice(PLUS, MINUS), $.arithmetic),
          ),
          prec.left(PREC.AND, seq($.arithmetic, AND, $.arithmetic)),
          prec.left(PREC.OR, seq($.arithmetic, OR, $.arithmetic)),
          $._expression,
        ),
      ),

    call: ($) =>
      choice(
        seq(
          field("callee", $.identifier),
          LEFT_PAREN,
          optional($.expression_list),
          RIGHT_PAREN,
        ),
        seq(
          field("callee", seq(TILDE, $.identifier)),
          optional(seq(LEFT_PAREN, optional($.expression_list), RIGHT_PAREN)),
        ),
        seq(
          field("callee", seq(AT, $.identifier)),
          optional(seq(LEFT_PAREN, optional($.expression_list), RIGHT_PAREN)),
        ),
      ),

    assignable_variable_list: ($) =>
      seq($.assignable_variable, repeat(seq(COMMA, $.assignable_variable))),

    assignable_variable: ($) =>
      choice($.local_variable, $.local_array_variable, $.game_variable),

    local_variable: ($) => seq(DOLLAR, field("name", $._advanced_identifier)),

    local_array_variable: ($) =>
      seq(DOLLAR, field("name", $._advanced_identifier), $.parenthesis),

    game_variable: ($) =>
      choice(
        seq(MOD, field("name", $._advanced_identifier)),
        seq(DOTMOD, field("name", $._advanced_identifier)),
      ),

    constant_variable: ($) => seq(CARET, field("name", $._advanced_identifier)),

    literal: ($) =>
      prec(
        PREC.LITERAL,
        choice(
          $.integer_literal,
          HEX_LITERAL,
          $.coord_literal,
          BOOLEAN_LITERAL,
          CHAR_LITERAL,
          NULL_LITERAL,
          $.string_literal,
        ),
      ),

    integer_literal: () => INTEGER_LITERAL,

    coord_literal: () => COORD_LITERAL,

    string_literal: ($) =>
      seq(
        QUOTE,
        repeat(
          choice(
            alias($._string_chars, $.string_fragment),
            $.escape_sequence,
            $.string_tag,
            $.string_interpolation,
          ),
        ),
        QUOTE,
      ),

    escape_sequence: () => token.immediate(seq("\\", choice("\\", QUOTE, LT))),

    string_tag: () =>
      token.immediate(
        seq(
          LT,
          choice(
            seq(optional(DIV), choice(...TAGS), optional(seq(EQ, /[^<>]+/))),
            seq("p,", /[^<>]+/),
          ),
          GT,
        ),
      ),

    string_interpolation: ($) => seq(LT, $._expression, GT),

    identifier: () =>
      token(
        choice(
          IDENTIFIER,
          HEX_LITERAL,
          BOOLEAN_LITERAL,
          NULL_LITERAL,
          COORD_LITERAL,
          MAPZONE_LITERAL,
          TYPE_ARRAY,
          SWITCH_TYPE,
          DEF_TYPE,
          DEFAULT,
        ),
      ),

    _advanced_identifier: ($) =>
      choice(
        $.identifier,
        alias(token(choice(IF, ELSE, WHILE, RETURN, CALC)), $.identifier),
      ),
  },
});
