;; Section - Module Structure

(module_declaration
  "module" @keyword
  "exposing" @keyword
  "end" @keyword)

(module_declaration
  name: (qualified_module) @module.name)

(qualified_module
  (upper_identifier) @namespace)

(exposing_list
  "(" @punctuation.bracket
  ")" @punctuation.bracket)

(expose_everything
  "(" @punctuation.bracket
  ".." @operator
  ")" @punctuation.bracket)

(exposed_item
  (lower_identifier) @function)

(exposed_item
  (upper_identifier) @type)

;; Section - Imports

(include_statement
  "include" @keyword)

(include_statement
  (qualified_module) @namespace)

(open_statement
  "open" @keyword)

(open_statement
  (qualified_module) @namespace)

(open_statement
  "as" @keyword)

(open_statement
  "as" @keyword
  (upper_identifier) @namespace)

(open_statement
  "using" @keyword)

(open_statement
  "hiding" @keyword)

(import_list
  "(" @punctuation.bracket
  ")" @punctuation.bracket)

(import_item
  (lower_identifier) @function)

(import_item
  "as" @keyword)

(import_item
  "as" @keyword
  (lower_identifier) @function)

(import_item
  (upper_identifier) @type)

(import_item
  (upper_identifier) @type
  (expose_everything) @operator)

(hiding_list
  "(" @punctuation.bracket
  ")" @punctuation.bracket)

(hiding_list
  (lower_identifier) @variable)

;; Section - Types

(type_alias_declaration
  "type" @keyword
  "alias" @keyword
  "=" @operator)

(type_alias_declaration
  (upper_identifier) @type.definition)

(type_parameters
  "(" @punctuation.bracket
  ")" @punctuation.bracket)

(type_declaration
  "type" @keyword
  "=" @operator)

(type_declaration
  (upper_identifier) @type.definition)

(type_variants
  "|" @punctuation.delimiter)

(type_variant
  (upper_identifier) @constructor)

(type_variable
  (lower_identifier) @variable.parameter)

(type_variable
  (upper_identifier) @type.parameter)

(record_type
  "{" @punctuation.bracket
  "}" @punctuation.bracket)

(record_field
  (lower_identifier) @property
  ":" @punctuation.type)

(tuple_type
  "(" @punctuation.bracket
  ")" @punctuation.bracket)

(type_expression
  (upper_identifier) @type)

(type_expression
  (lower_identifier) @type.parameter)

;; Section - Functions

(foreign_function_declaration
  "foreign" @keyword
  "=" @operator)

(foreign_function_declaration
  (lower_identifier) @function)

(foreign_function_declaration
  "(" @punctuation.bracket
  ")" @punctuation.bracket)

(foreign_function_declaration
  (string_literal) @string)

(function_declaration
  "let" @keyword
  "=" @operator)

(function_declaration
  (lower_identifier) @function)

(function_declaration
  "(" @punctuation.bracket
  ")" @punctuation.bracket)

(parameter_list
  "," @punctuation.delimiter)

(parameter_list
  (lower_identifier) @parameter)

(parameter_list
  "_" @variable.builtin)

(type_annotation
  ":" @punctuation.type)

(return_type
  "->" @punctuation.type)

(lambda_expression
  "fn" @keyword
  "=>" @operator)

(lambda_expression
  "(" @punctuation.bracket
  ")" @punctuation.bracket)

(call_expression
  function: (lower_identifier) @function
  "(" @punctuation.bracket
  ")" @punctuation.bracket)

(call_expression
  function: (qualified_function) @function
  "(" @punctuation.bracket
  ")" @punctuation.bracket)

(call_expression
  function: (upper_identifier) @constructor
  "(" @punctuation.bracket
  ")" @punctuation.bracket)

(call_expression
  arguments: (
    ((_) "," @punctuation.delimiter _)
  ))

;; Section - Expressions

(unary_expression
  "-" @operator)

(binary_expression
  operator: _ @operator)

(parenthesized_expression
  "(" @punctuation.bracket
  ")" @punctuation.bracket)

(record_expression
  "{" @punctuation.bracket
  "}" @punctuation.bracket)

(record_field_value
  (lower_identifier) @property
  "=" @operator)

(record_field_shorthand
  (lower_identifier) @property)

(tuple_expression
  "(" @punctuation.bracket
  "," @punctuation.delimiter
  ")" @punctuation.bracket)

(list_expression
  "[" @punctuation.bracket
  "]" @punctuation.bracket)

(list_expression
  "," @punctuation.delimiter)

(if_expression
  "if" @keyword
  "then" @keyword
  "else" @keyword)

;; Section - Pattern Matching

(match_expression
  "match" @keyword
  "on" @keyword)

(match_case
  "|" @punctuation.delimiter
  "=>" @operator)

(match_case
  body: (upper_identifier) @constructor)

(ignore_pattern) @variable.builtin

(constant_pattern
  (integer_literal) @number)

(constant_pattern
  (float_literal) @number)

(constant_pattern
  (char_literal) @string)

(constant_pattern
  (string_literal) @string)

(variable_pattern
  (lower_identifier) @variable)

(constructor_pattern
  (upper_identifier) @constructor)

(constructor_pattern
  "(" @punctuation.bracket
  ")" @punctuation.bracket)

(constructor_pattern
  "," @punctuation.delimiter)

(tuple_pattern
  "(" @punctuation.bracket
  "," @punctuation.delimiter
  ")" @punctuation.bracket)

(cons_pattern
  "::" @operator)

(guard_condition
  "when" @keyword)

;; Section - Identifiers

"_" @variable.builtin

(qualified_function
  (upper_identifier) @namespace
  "." @punctuation.delimiter
  (lower_identifier) @function)

;; Section - Literals

(integer_literal) @number
(float_literal) @number

(char_literal) @string
(string_literal) @string
(multiline_string_literal) @string

;; Section - Comments

(doc_comment) @comment.doc
(line_comment) @comment
