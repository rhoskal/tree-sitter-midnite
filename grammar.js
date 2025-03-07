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
      choice($.foreign_function_declaration, $.function_declaration),

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
        $.lower_identifier,
        optional($.type_annotation),
        repeat(seq(",", $.lower_identifier, optional($.type_annotation))),
      ),

    type_annotation: ($) => seq(":", $.upper_identifier),

    return_type: ($) => seq("->", $.upper_identifier),

    _expression: ($) =>
      choice(
        $.unary_expression,
        $.binary_expression,
        $.lower_identifier,
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
      ),

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
