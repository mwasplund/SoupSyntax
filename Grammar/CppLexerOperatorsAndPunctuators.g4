
lexer grammar CppLexerOperatorsAndPunctuators;

// Define all of the C++ operator and punctuator tokens
OpenBrace: '{';
CloseBrace: '}';
OpenBracket: '[';
CloseBracket: ']';
OpenParenthesis: '(';
CloseParenthesis: ')';
Semicolon: ';';
Colon: ':';
Ellipsis: '...';
New: 'new';
Delete: 'delete';
QuestionMark: '?';
DoubleColon: '::';
Period: '.';
PeriodAsterisk: '.*';
Plus: '+';
Minus: '-';
Asterisk: '*';
ForwardSlash: '/';
Percent: '%';
Caret: '^';
Ampersand: '&';
VerticalBar: '|';
Tilde: '~';
ExclamationMark: '!';
Equal: '=';
LessThan: '<';
GreaterThan: '>';
PlusEqual: '+=';
MinusEqual: '-=';
AsteriskEqual: '*=';
ForwardSlashEqual: '/=';
PercentEqual: '%=';
CaretEqual: '^=';
AmpersandEqual: '&=';
VerticalBarEqual: '|=';
DoubleLessThan: '<<';
// Ambiguous with end of template
// Will be resolved in the parser
// DoubleGreaterThan: '>>';
DoubleLessThanEqual: '<<=';
DoubleGreaterThanEqual: '>>=';
DoubleEqual: '==';
ExclamationMarkEqual: '!=';
LessThanEqual: '<=';
GreaterThanEqual: '>=';
DoubleAmpersand: '&&';
DoubleVerticalBar: '||'; 
DoublePlus: '++';
DoubleMinus: '--';
Comma: ',';
ArrowAsterisk: '->*';
Arrow: '->';
