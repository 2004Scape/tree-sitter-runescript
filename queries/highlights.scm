; Variables
[
  (identifier)
  (local_variable)
  (game_variable)
  (constant_variable)
  (parameter_variable)
  (declaration_variable)
] @variable

; Scripts
(script
  trigger: (identifier) @keyword.directive
  subject: (identifier) @function)

; Calls
(call
  [
    "~"
    "@"
  ]? @function
  callee: (identifier) @function)

; Literals
((literal) @boolean
  (#any-of? @boolean "true" "false"))

(literal
  "null" @constant.builtin)

(integer_literal) @number

(coord_literal) @string.special

(comment) @comment @spell

(string_fragment) @string

(string_interpolation
  [
    "<"
    ">"
  ] @punctuation.special)

(string_tag) @punctuation.special

; Types
(type) @type

(parameter_type) @type

; Tokens
[
  ";"
  ":"
  ","
] @punctuation.delimiter

[
  "("
  ")"
  "{"
  "}"
] @punctuation.bracket

[
  "*"
  "/"
  "+"
  "-"
  "&"
  "|"
  ">"
  ">="
  "<"
  "<="
  "="
  "!"
] @operator

(arithmetic
  "%" @operator)

[
  (def_type_keyword)
  (switch_type_keyword)
] @keyword.modifier

"return" @keyword.return

"while" @keyword.repeat

[
  "default"
  "if"
  "else"
  "case"
] @keyword.conditional

"calc" @keyword
