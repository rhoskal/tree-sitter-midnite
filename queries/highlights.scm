(line_comment) @comment
(doc_comment) @comment.doc

(identifier) @variable
(type_annotation) @type
(boolean) @constant.builtin
(function_definition name: (identifier) @function)
(module_declaration name: (identifier) @module)
(match_expression) @conditional

; Delimiter

"(" @punctuation.bracket
")" @punctuation.bracket
"[" @punctuation.bracket
"]" @punctuation.bracket
"{" @punctuation.bracket
"}" @punctuation.bracket

":" @punctuation.delimiter
"." @punctuation.delimiter
"," @punctuation.delimiter

; Keyword

"alias" @keyword
"as" @keyword
"else" @keyword
"end" @keyword
"exposing" @keyword
"fn" @keyword
"foreign" @keyword
"hiding" @keyword
"include" @keyword
"infixl" @keyword
"infixn" @keyword
"infixr" @keyword
"let" @keyword
"match" @keyword
"module" @keyword
"on" @keyword
"open" @keyword
"then" @keyword
"type" @keyword
"using" @keyword
"when" @keyword

; Operator

"+." @operator
"-." @operator
"/." @operator
"*." @operator
"+" @operator
"-" @operator
"/" @operator
"*" @operator
"::" @operator
"<>" @operator
"==" @operator
"/=" @operator
"<" @operator
"<=" @operator
">" @operator
">=" @operator
"&&" @operator
"||" @operator
