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

(guard_condition) @indent

;; Function bodies

(lambda_expression "=>" @indent)

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
  ")"
  "]"
  "}"
] @dedent

;; Align these with their opening counterparts

(parameter_list) @align

(tuple_expression) @align

(list_expression) @align

(record_type) @align

(exposing_list) @align

(type_parameters) @align

;; Doc comments

(doc_comment) @indent.always
