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

    module_path: ($) =>
      seq($.upper_identifier, repeat(seq(".", $.upper_identifier))),

    export_list: ($) =>
      choice(
        $.expose_all,
        seq("(", $.exposed_item, repeat(seq(",", $.exposed_item)), ")"),
      ),

    expose_all: (_) => "(..)",

    exposed_item: ($) => choice($.lower_identifier, $.exposed_type),

    exposed_type: ($) => seq($.upper_identifier, optional($.expose_all)),

    statement: ($) =>
      choice(
        $.include_statement,
        $.type_alias_declaration,
        $.type_declaration,
        $.foreign_function_declaration,
        $.function_declaration,
      ),

    include_statement: ($) => seq("include", $.module_path),

    type_alias_declaration: ($) =>
      seq(
        "type",
        "alias",
        $.upper_identifier,
        optional($.type_parameters),
        "=",
        $.type_expression,
      ),

    type_parameters: ($) =>
      seq("(", $.type_variable, repeat(seq(",", $.type_variable)), ")"),

    type_variable: ($) => choice($.lower_identifier, $.upper_identifier),

    type_expression: ($) =>
      choice(
        $.upper_identifier,
        $.lower_identifier,
        seq(
          $.upper_identifier,
          "(",
          $.type_expression,
          repeat(seq(",", $.type_expression)),
          ")",
        ),
        $.record_type,
        $.tuple_type,
      ),

    type_declaration: ($) =>
      seq(
        "type",
        $.upper_identifier,
        optional($.type_parameters),
        "=",
        $.type_variants,
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

    record_type: ($) =>
      seq(
        "{",
        optional(seq($.record_field, repeat(seq(",", $.record_field)))),
        "}",
      ),

    tuple_type: ($) =>
      seq("(", $.type_expression, repeat1(seq(",", $.type_expression)), ")"),

    record_field: ($) => seq($.lower_identifier, ":", $.type_expression),

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
      seq(
        choice($.lower_identifier, "_"),
        optional($.type_annotation),
        repeat(
          seq(
            ",",
            choice($.lower_identifier, "_"),
            optional($.type_annotation),
          ),
        ),
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

    upper_identifier: (_) => /[A-Z][a-zA-Z0-9]*/,

    lower_identifier: (_) => /[a-z][a-zA-Z0-9_?]*/,

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
        repeat(choice($.escape_sequence, /[^"\\\n]/)), // String content excluding unescaped quotes and newlines
        '"',
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

    escape_sequence: (_) =>
      token.immediate(
        seq(
          "\\",
          choice(
            /[nrt\\'"0]/,
            /u\{[0-9a-fA-F]{1,6}\}/, // Unicode \u{XXXXXX} (up to 6 hex digits)
          ),
        ),
      ),

    doc_comment: ($) => seq("##", /[^\n]*/),

    line_comment: ($) => seq("#", /[^\n]*/),
  },
});
