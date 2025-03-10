;; This file defines variable scopes and references for the language.
;; It helps IDEs with features like "find all references" and "rename symbol".

;; Function definitions and parameters

(function_declaration
  name: (lower_identifier) @definition.function    ;; Marks function names for "go to definition"
  parameters: (parameter_list
    (lower_identifier) @definition.parameter))     ;; Identifies parameters for renaming and scope tracking

;; Lambda expression parameters

(lambda_expression
  parameters: (parameter_list
    (lower_identifier) @definition.parameter))     ;; Parameters in anonymous functions

;; Variables defined in patterns

(variable_pattern) @definition.variable            ;; Variables bound in pattern matching

;; Variables defined in match cases

(match_case
  pattern: (pattern
    (variable_pattern) @definition.variable))      ;; Variables bound in match patterns

;; Variable references

(lower_identifier) @reference                      ;; All other variable usages are references

;; Scope boundaries

(function_declaration) @scope                      ;; Function bodies create scopes

(lambda_expression) @scope                         ;; Lambda bodies create scopes

(match_expression) @scope                          ;; Match expressions create scopes

(match_case) @scope                                ;; Individual match cases create scopes

;; Module definitions

(module_declaration
  name: (qualified_module) @definition.namespace)  ;; Module names for namespace tracking
