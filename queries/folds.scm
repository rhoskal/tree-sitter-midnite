;; Main module declaration

(module_declaration) @fold

;; Type declarations

(type_declaration) @fold
(type_alias_declaration) @fold

;; Function declarations

(function_declaration) @fold
(foreign_function_declaration) @fold
(anonymous_function) @fold

;; Comments

(doc_comment) @fold

;; Expressions

(match_expression) @fold
(if_expression) @fold

;; Containers

(tuple_expression) @fold
(list_expression) @fold
(record_type) @fold

;; Lists with multiple items

(export_list) @fold
(type_parameters) @fold
(parameter_list) @fold
(type_variants) @fold

;; Function calls with arguments

(function_call) @fold
