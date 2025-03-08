;; Block-level indentation
[
  "module"
  "let"
  "foreign"
  "type"
  "if"
  "then"
  "else"
  "match"
  "on"
  "exposing"
] @indent

;; Pattern matching
(match_case) @indent
(when_clause) @indent

;; Function bodies indent after =>
(anonymous_function "=>" @indent)
(match_case "=>" @indent)

;; Type definitions
(type_declaration "=" @indent)
(type_alias_declaration "=" @indent)
(function_declaration "=" @indent)
(foreign_function_declaration "=" @indent)

;; Brackets for indentation
[
  "("
  "["
  "{"
] @indent

;; End blocks and closing brackets for dedentation
[
  "end"
  ")"
  "]"
  "}"
] @dedent

;; Align these with their opening counterparts
(parameter_list) @align
(tuple_expression) @align
(list_expression) @align
(record_type) @align
(export_list) @align
(type_parameters) @align

;; Doc comments
(doc_comment) @indent.always
