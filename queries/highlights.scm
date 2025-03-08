;; Section - Module Structure

(module_declaration
  "module" @keyword
  "exposing" @keyword
  "end" @keyword)

(exposing_list
  "(" @punctuation.bracket
  ")" @punctuation.bracket)

(expose_all) @operator

(exposed_item
  (lower_identifier) @function)

(exposed_item
  (upper_identifier) @type)

;; Section - Imports

(include_statement
  "include" @keyword)

(open_statement
  "open" @keyword)

(open_statement
  "as" @keyword
  (upper_identifier) @namespace)

(open_statement
  "open" @keyword
  "using" @keyword
  (import_list
    "(" @punctuation.bracket
    ")" @punctuation.bracket))

(open_statement
  "open" @keyword
  "hiding" @keyword
  (hiding_list
    "(" @punctuation.bracket
    ")" @punctuation.bracket))

(import_item
  (lower_identifier) @function)

(import_item
  (lower_identifier) @function
  "as" @keyword
  (lower_identifier) @function)

(import_item
  (upper_identifier) @type)

(import_item
  (upper_identifier) @type
  (expose_all) @operator)

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

(type_parameters
  "(" @punctuation.bracket
  ")" @punctuation.bracket)

(type_declaration
  "type" @keyword
  "=" @operator)

(type_variant) @constructor

(type_variable) @variable.parameter

(record_type
  "{" @punctuation.bracket
  "}" @punctuation.bracket)

(record_pair
  (lower_identifier) @property
  ":" @operator)

(tuple_type
  "(" @punctuation.bracket
  ")" @punctuation.bracket)

;; Section - Functions

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

(function_call
  (lower_identifier) @function)

(function_call
  (qualified_identifier) @function)

;; Section - Expressions

(unary_expression
  "-" @operator)

(binary_expression
  operator: _ @operator)

(qualified_identifier
  (upper_identifier) @namespace
  "." @punctuation.delimiter
  (lower_identifier) @function)

(group_expression
  "(" @punctuation.bracket
  ")" @punctuation.bracket)

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

;; Section - Match Expressions

(match_expression
  "match" @keyword
  "on" @keyword)

(match_case
  "|" @punctuation.delimiter
  "=>" @operator)

(wildcard_pattern) @variable.builtin

(literal_pattern) @constant

(variable_pattern) @variable

(constructor_pattern
  (upper_identifier) @constructor)

(tuple_pattern
  "(" @punctuation.bracket
  ")" @punctuation.bracket)

(cons_pattern
  "::" @operator)

(when_clause
  "when" @keyword)

;; Section - Identifiers and Literals

"_" @variable.builtin

(upper_identifier) @type
(lower_identifier) @variable
(upper_qid) @namespace

(integer_literal) @number
(float_literal) @number

(char_literal) @string
(string_literal) @string

;; Section - Comments

(doc_comment) @comment.doc
(line_comment) @comment
