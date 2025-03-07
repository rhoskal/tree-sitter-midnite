/**
 * @file Midnite grammar for tree-sitter
 * @author Hans Hoffman
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "midnite",

  extras: ($) => [$.doc_comment, $.comment, /\s/],

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

    expose_all: ($) => "(..)",

    exposed_item: ($) => choice($.lower_identifier, $.exposed_type),

    exposed_type: ($) => seq($.upper_identifier, optional("(..)")),

    statement: ($) => choice($.doc_comment, $.comment),

    function_declaration: ($) =>
      seq(
        "let",
        $.lower_identifier,
        "(",
        optional($.parameter_list),
        ")",
        optional(seq("->", $.upper_identifier)),
        "=",
        $._expression,
      ),

    parameter_list: ($) => seq($.lower_identifier, optional($.type_annotation)),

    type_annotation: ($) => seq(":", $.upper_identifier),

    _expression: ($) => choice($.unary_expression, $.binary_expression),

    unary_expression: ($) => choice(seq("-", $._expression)),

    binary_expression: ($) =>
      choice(
        seq($._expression, "+.", $._expression),
        seq($._expression, "/-", $._expression),
        seq($._expression, "/*", $._expression),
        seq($._expression, "/.", $._expression),
        seq($._expression, "+", $._expression),
        seq($._expression, "-", $._expression),
        seq($._expression, "*", $._expression),
        seq($._expression, ".", $._expression),
      ),

    upper_identifier: ($) => /[A-Z][a-zA-Z0-9]*/,

    lower_identifier: ($) => /[a-z][a-zA-Z0-9_?]*/,

    doc_comment: ($) => seq("##", /[^\n]*/),

    comment: ($) => seq("#", /[^\n]*/),
  },
});
