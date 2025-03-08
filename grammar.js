/**
 * @file Midnite grammar for tree-sitter
 * @author Hans Hoffman
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "midnite",

  extras: ($) => [/\s/, $.doc_comment, $.line_comment],

  rules: {
    source_file: ($) => $.module_declaration,

    module_declaration: ($) =>
      seq(
        "module",
        $.module_path,
        "exposing",
        $.export_list,
        repeat($.statement),
        "end",
      ),

    module_path: ($) => sepBy1(".", $.upper_identifier),

    export_list: ($) =>
      choice($.expose_all, seq("(", sepBy1(",", $.exposed_item), ")")),

    expose_all: (_) => "(..)",

    exposed_item: ($) =>
      seq(
        choice($.lower_identifier, $.upper_identifier),
        optional($.expose_all),
      ),

    statement: ($) =>
      choice(
        $.include_statement,
        $.open_statement,
        $.type_alias_declaration,
        $.type_declaration,
        $.foreign_function_declaration,
        $.function_declaration,
      ),

    // Section - Imports

    include_statement: ($) => seq("include", $.module_path),

    open_statement: ($) =>
      seq(
        "open",
        $.module_path,
        optional(
          choice(
            seq("as", $.upper_identifier),
            seq("using", "(", sepBy1(",", $.import_item), ")"),
            seq("hiding", "(", sepBy1(",", $.lower_identifier), ")"),
          ),
        ),
      ),

    import_item: ($) =>
      choice(
        $.lower_identifier,
        seq($.lower_identifier, "as", $.lower_identifier),
        $.upper_identifier,
        seq($.upper_identifier, optional($.expose_all)),
      ),

    // Section - Types

    type_alias_declaration: ($) =>
      seq(
        "type",
        "alias",
        $.upper_identifier,
        optional($.type_parameters),
        "=",
        $.type_expression,
      ),

    type_parameters: ($) => seq("(", sepBy1(",", $.type_variable), ")"),

    type_variable: ($) => choice($.lower_identifier, $.upper_identifier),

    type_expression: ($) =>
      choice(
        choice($.lower_identifier, $.upper_identifier),
        seq($.upper_identifier, "(", sepBy1(",", $.type_expression), ")"),
        $.record_type,
        $.tuple_type,
      ),

    type_declaration: ($) =>
      seq(
        "type",
        $.upper_identifier,
        optional($.type_parameters),
        "=",
        choice($.type_variants, $.record_type),
      ),

    type_variants: ($) =>
      choice(
        seq("|", $.type_variant, repeat(seq("|", $.type_variant))),
        seq($.type_variant, repeat(seq("|", $.type_variant))),
      ),

    type_variant: ($) =>
      choice(
        seq(
          $.upper_identifier,
          optional(
            choice(
              seq(
                "(",
                $.type_expression,
                repeat(seq(",", $.type_expression)),
                ")",
              ),
              $.record_type,
            ),
          ),
        ),
        seq($.type_expression, "::", $.type_expression),
      ),

    record_type: ($) => seq("{", sepBy1(",", $.record_pair), "}"),

    record_pair: ($) => seq($.lower_identifier, ":", $.type_expression),

    tuple_type: ($) => seq("(", sepBy1(",", $.type_expression), ")"),

    foreign_function_declaration: ($) =>
      seq(
        "foreign",
        $.lower_identifier,
        "(",
        $.parameter_list,
        ")",
        $.return_type,
        "=",
        $.string_literal,
      ),

    function_declaration: ($) =>
      seq(
        "let",
        $.lower_identifier,
        "(",
        optional($.parameter_list),
        ")",
        optional($.return_type),
        "=",
        $._expression,
      ),

    parameter_list: ($) =>
      sepBy1(
        ",",
        seq(choice($.lower_identifier, "_"), optional($.type_annotation)),
      ),

    type_annotation: ($) => seq(":", $.type_expression),

    return_type: ($) => seq("->", $.type_expression),

    anonymous_function: ($) =>
      seq(
        "fn",
        "(",
        optional($.parameter_list),
        ")",
        optional($.return_type),
        "=>",
        $._expression,
      ),

    _expression: ($) =>
      choice(
        $.match_expression,
        $.unary_expression,
        $.binary_expression,
        $.function_call,
        $.anonymous_function,
        $.if_expression,
        $.tuple_expression,
        $.list_expression,
        $.lower_identifier,
        $.qualified_identifier,
        $.upper_identifier,
        $._literal,
      ),

    unary_expression: ($) => choice(seq("-", $._expression)),

    binary_expression: ($) =>
      choice(
        prec.left(
          12,
          seq($._expression, field("operator", "**"), $._expression),
        ),
        prec.left(
          10,
          seq($._expression, field("operator", "+."), $._expression),
        ),
        prec.left(
          10,
          seq($._expression, field("operator", "-."), $._expression),
        ),
        prec.left(
          11,
          seq($._expression, field("operator", "/."), $._expression),
        ),
        prec.left(
          11,
          seq($._expression, field("operator", "*."), $._expression),
        ),
        prec.left(
          10,
          seq($._expression, field("operator", "+"), $._expression),
        ),
        prec.left(
          10,
          seq($._expression, field("operator", "-"), $._expression),
        ),
        prec.left(
          11,
          seq($._expression, field("operator", "/"), $._expression),
        ),
        prec.left(
          11,
          seq($._expression, field("operator", "*"), $._expression),
        ),
        prec.right(
          9,
          seq($._expression, field("operator", "::"), $._expression),
        ),
        prec.right(
          7,
          seq($._expression, field("operator", "<>"), $._expression),
        ),
        prec.right(
          6,
          seq($._expression, field("operator", "++"), $._expression),
        ),
        prec.left(
          5,
          seq($._expression, field("operator", "=="), $._expression),
        ),
        prec.left(
          5,
          seq($._expression, field("operator", "/="), $._expression),
        ),
        prec.left(5, seq($._expression, field("operator", "<"), $._expression)),
        prec.left(
          5,
          seq($._expression, field("operator", "<="), $._expression),
        ),
        prec.left(5, seq($._expression, field("operator", ">"), $._expression)),
        prec.left(
          5,
          seq($._expression, field("operator", ">="), $._expression),
        ),
        prec.right(
          4,
          seq($._expression, field("operator", "&&"), $._expression),
        ),
        prec.right(
          3,
          seq($._expression, field("operator", "||"), $._expression),
        ),
        prec.left(
          1,
          seq($._expression, field("operator", "|>"), $._expression),
        ),
      ),

    qualified_identifier: ($) =>
      seq($.upper_identifier, ".", $.lower_identifier),

    function_call: ($) =>
      prec(
        2,
        seq(
          choice($.lower_identifier, $.qualified_identifier),
          "(",
          optional(seq($._expression, repeat(seq(",", $._expression)))),
          ")",
        ),
      ),

    tuple_expression: ($) =>
      seq(
        "(",
        optional(seq($._expression, repeat(seq(",", $._expression)))),
        ")",
      ),

    list_expression: ($) =>
      seq(
        "[",
        optional(seq($._expression, repeat(seq(",", $._expression)))),
        "]",
      ),

    if_expression: ($) =>
      seq("if", $._expression, "then", $._expression, "else", $._expression),

    // Section - Pattern Matching

    match_expression: ($) =>
      prec.right(1, seq("match", $._expression, "on", repeat1($.match_case))),

    match_case: ($) =>
      seq("|", $.pattern, optional($.when_clause), "=>", $._expression),

    pattern: ($) =>
      choice(
        $.wildcard_pattern,
        $.literal_pattern,
        $.variable_pattern,
        $.constructor_pattern,
        $.tuple_pattern,
        $.cons_pattern,
      ),

    wildcard_pattern: (_) => "_",

    literal_pattern: ($) => $._literal,

    variable_pattern: ($) => $.lower_identifier,

    constructor_pattern: ($) =>
      seq(
        $.upper_identifier,
        optional(
          seq("(", optional(seq($.pattern, repeat(seq(",", $.pattern)))), ")"),
        ),
      ),

    tuple_pattern: ($) =>
      seq("(", $.pattern, repeat1(seq(",", $.pattern)), ")"),

    cons_pattern: ($) => prec.left(9, seq($.pattern, "::", $.pattern)),

    when_clause: ($) => seq("when", $._expression),

    // Section - Identifiers

    upper_identifier: (_) => /[A-Z][a-zA-Z0-9]*/,

    lower_identifier: (_) => /[a-z][a-zA-Z0-9_?]*/,

    // Section - Literals

    _literal: ($) =>
      choice(
        $.integer_literal,
        $.float_literal,
        $.char_literal,
        $.string_literal,
      ),

    integer_literal: (_) =>
      choice(
        /[1-9][0-9_]*/, // decimal
        /0x[0-9a-fA-F_]+/, // hexadecimal
        /0b[01_]+/, // binary
        /0o[0-7_]+/, // octal
      ),

    float_literal: (_) =>
      token(
        seq(
          optional("-"),
          choice(
            seq(/[0-9][0-9_]*/, ".", /[0-9][0-9_]*/), // Regular float: 123.456
            seq(
              /[0-9][0-9_]*/,
              ".",
              optional(/[0-9][0-9_]*/),
              "e",
              optional(/[+-]/),
              /[0-9][0-9_]*/,
            ), // Float with exponent: 1.23e4
            seq(/[0-9][0-9_]*/, "e", optional(/[+-]/), /[0-9][0-9_]*/), // Scientific notation without a decimal: 5e10
          ),
        ),
      ),

    string_literal: ($) =>
      seq(
        '"',
        repeat(choice($._escape_sequence, /[^"\\\n]/)), // String content excluding unescaped quotes and newlines
        '"',
      ),

    _escape_sequence: (_) =>
      token.immediate(
        seq(
          "\\",
          choice(
            /[nrt\\'"0]/,
            /u\{[0-9a-fA-F]{1,6}\}/, // Unicode \u{XXXXXX} (up to 6 hex digits)
          ),
        ),
      ),

    char_literal: (_) =>
      token(
        seq(
          "'",
          optional(
            choice(
              seq("\\", choice(/[^nrt]/, /u\{[0-9a-fA-F]{1,6}\}/)), // Unicode \u{XXXXXX} (up to 6 hex digits)
              /[^\\']/,
            ),
          ),
          "'",
        ),
      ),

    // Section - Comments

    doc_comment: ($) => seq("##", /[^\n]*/),

    line_comment: ($) => seq("#", /[^\n]*/),
  },
});

/**
 * Creates a rule to match one or more of the rules separated by the separator.
 * @param {RuleOrLiteral} sep - The separator to use.
 * @param {RuleOrLiteral} rule
 * @returns {SeqRule}
 */
function sepBy1(sep, rule) {
  return seq(rule, repeat(seq(sep, rule)));
}

/**
 * Creates a rule to optionally match one or more of the rules separated by the separator.
 * @param {RuleOrLiteral} sep - The separator to use.
 * @param {RuleOrLiteral} rule
 * @returns {ChoiceRule}
 */
function sepBy(sep, rule) {
  return optional(sepBy1(sep, rule));
}
