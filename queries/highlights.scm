(module_declaration
  "module" @keyword
  "exposing" @keyword
  "end" @keyword)

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

(binary_expression operator: (_) @operator)

(integer_literal @number)
(float_literal @number)
(char_literal @string)
(string_literal @string)

(upper_identifier @type)
(lower_identifier @variable)

(doc_comment @comment.doc)
(line_comment @comment)
