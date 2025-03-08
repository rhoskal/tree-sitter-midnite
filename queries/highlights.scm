(module_declaration
  "module" @keyword
  "exposing" @keyword
  "end" @keyword)

(include_statement
  "include" @keyword)

(type_alias_declaration
  "type" @keyword
  "alias" @keyword
  "=" @operator)

(type_declaration
  "type" @keyword
  "=" @operator)

(type_variant) @constructor

(type_variable) @variable.parameter

(record_field
  ":" @operator)

(tuple_type
  "(" @punctuation.bracket
  ")" @punctuation.bracket)

(foreign_function_declaration
  "foreign" @keyword
  "=" @operator)

(function_declaration
  "let" @keyword
  "=" @operator)

(type_annotation
  ":" @operator)

(return_type
  "->" @operator)

(anonymous_function
  "fn" @keyword
  "=>" @operator)

(binary_expression
  operator: _ @operator)

(qualified_identifier
  (upper_identifier) @namespace
  "." @punctuation.delimiter)

(function_call
  (qualified_identifier) @function)

(tuple_expression
  "(" @punctuation.bracket
  ")" @punctuation.bracket)

(list_expression
  "[" @punctuation.bracket
  "]" @punctuation.bracket)

(if_expression
  "if" @keyword
  "then" @keyword
  "else" @keyword)

"(" @punctuation.bracket
")" @punctuation.bracket
"{" @punctuation.bracket
"}" @punctuation.bracket
"[" @punctuation.bracket
"]" @punctuation.bracket
"," @punctuation.delimiter
"." @punctuation.delimiter
"|" @punctuation.delimiter

"_" @variable.builtin

; Literals

(integer_literal) @number
(float_literal) @number

(char_literal) @string
(string_literal) @string

; Identifiers

(upper_identifier) @type
(lower_identifier) @variable

; Comments

(doc_comment) @comment.doc
(line_comment) @comment
