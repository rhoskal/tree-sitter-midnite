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
  "," @punctuation.delimiter
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
  (qualified_module
    "." @punctuation.delimiter))

(open_statement
  "open" @keyword)

(open_statement
  (qualified_module) @namespace)

(open_statement
  (qualified_module
    "." @punctuation.delimiter))

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
  "," @punctuation.delimiter
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

(hiding_list
  "(" @punctuation.bracket
  "," @punctuation.delimiter
  ")" @punctuation.bracket)

(hiding_list
  (lower_identifier) @function)

;; Section - Types

(type_alias_declaration
  "type" @keyword
  "alias" @keyword
  "=" @operator)

(type_alias_declaration
  (upper_identifier) @type.definition)

(type_parameters
  "(" @punctuation.bracket
  (type_variable) @type.parameter
  ")" @punctuation.bracket)

(type_parameters
  (type_variable) @type.parameter
  ("," @punctuation.delimiter
   (type_variable) @type.parameter))

(type_declaration
  "type" @keyword
  "=" @operator)

(type_declaration
  (upper_identifier) @type.definition
  (type_parameters
    "(" @punctuation.bracket
    (type_variable) @type.parameter
    ")" @punctuation.bracket))

(type_variants
  "|" @punctuation.delimiter)

(type_variant
  (upper_identifier) @constructor)

(type_variant
  (upper_identifier) @constructor
  "(" @punctuation.bracket
  (type_expression
    (lower_identifier) @type.parameter)
  ")" @punctuation.bracket)

(type_variable
  (upper_identifier) @type.parameter)

(type_expression
  (upper_identifier) @type
  "(" @punctuation.bracket
  (type_expression
    (lower_identifier) @type.parameter)
  ")" @punctuation.bracket)

(tuple_expression
  "(" @punctuation.bracket
  (upper_identifier) @constructor
  ("," @punctuation.delimiter
  (upper_identifier) @constructor)
  ")" @punctuation.bracket)

(record_type
  "{" @punctuation.bracket
  "}" @punctuation.bracket)

(record_type
  (record_field) "," @punctuation.delimiter)

(record_field
  (lower_identifier) @property
  ":" @punctuation.type)

(tuple_type
  "(" @punctuation.bracket
  "," @punctuation.delimiter
  ")" @punctuation.bracket)

(type_expression
  (upper_identifier) @type)

(type_expression
  (lower_identifier) @type.parameter)

(type_expression
  "," @punctuation.delimiter)

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

(function_declaration
  body: (upper_identifier) @constructor)

(parameter_list
  "," @punctuation.delimiter)

(parameter_list
  (lower_identifier) @parameter)

(parameter_list
  "_" @variable.builtin)

(parameter_list
  (type_annotation
    (type_expression
      (upper_identifier)
      "(" @punctuation.bracket
      (type_expression)
      ")" @punctuation.bracket)))

(parameter_list
  (type_annotation
    (type_expression
      (upper_identifier)
      "("
      (type_expression
        (upper_identifier)
        "(" @punctuation.bracket
        (type_expression)
        ")" @punctuation.bracket)
      ")")))

(type_annotation
  ":" @punctuation.type)

(return_type
  "->" @punctuation.type)

(return_type
  (type_expression
    (upper_identifier)
    "(" @punctuation.bracket
    (type_expression)
    ")" @punctuation.bracket))

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
  (qualified_function) @function
  "(" @punctuation.bracket
  (upper_identifier) @constructor
  ")" @punctuation.bracket)

(call_expression
  (upper_identifier) @constructor
  "(" @punctuation.bracket
  (upper_identifier) @constructor
  ")" @punctuation.bracket)

(call_expression
  arguments: (
    ((_) "," @punctuation.delimiter _)
  ))

(qualified_function
  "." @punctuation.delimiter)

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

(record_expression
  (record_field_shorthand) "," @punctuation.delimiter)

(record_expression
  (record_field_value) "," @punctuation.delimiter)

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
  "," @punctuation.delimiter
  "]" @punctuation.bracket)

(if_expression
  "if" @keyword
  "then" @keyword
  "else" @keyword)

(if_expression
  then_branch: (upper_identifier) @constructor)

(if_expression
  else_branch: (upper_identifier) @constructor)

;; Section - Pattern Matching

(match_expression
  "match" @keyword
  "on" @keyword)

(match_case
  "|" @punctuation.delimiter
  "=>" @operator)

(match_case
  body: (upper_identifier) @constructor)

("(" @punctuation.bracket _ ")" @punctuation.bracket)

(match_case
  (pattern
    (constructor_pattern
      (upper_identifier) @constructor
        (pattern
          (ignore_pattern) @variable.builtin))))

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
  "," @punctuation.delimiter
  ")" @punctuation.bracket)

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
