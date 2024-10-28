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
  name: (identifier) @function)

; Calls

(call
  [
   "~"
   "@"
  ]? @function
  callee: (identifier) @function)

; Literals

((literal) @constant.builtin
  (#match? @constant.builtin "^(true|false|null)$"))

((literal) @number
  (#match? @number "^(-?[0-9]+|[0-9]+_[0-9]+_[0-9]+_[0-9]+_[0-9]+)$"))

((literal) @number
  (#match?))

(comment) @comment

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
] @punctuation.delimeter

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
  "%" @module.operator)

[
 "default"
 "if"
 "else"
 "while"
 "calc"
 "return"
 "case"
 (def_type_keyword)
 (switch_type_keyword)
] @keyword

