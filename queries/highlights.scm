(comment) @comment
((comment) @doc_comment
  (#match? @doc_comment "^##"))

(identifier) @variable
(type_annotation) @type
(boolean) @constant.builtin
(function_definition name: (identifier) @function)
(module_declaration name: (identifier) @module)
(match_expression) @conditional
