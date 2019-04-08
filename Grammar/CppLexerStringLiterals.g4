
lexer grammar CppLexerStringLiterals;

import 
	CppLexerFragments;

/****************************************/
/* String Literals
/****************************************/
fragment StringCharacter:
	~["\\\n] |
	EscapeSequence |
	UniversalCharacterName;

fragment StringPrefix: ('L' | 'u8' | 'u' | 'U');
fragment DelimiterCharacter: ~[()\\ \f\n\r\t]; // TODO ? \v
fragment RawCharacter: ~[)];

StringLiteral:
	'L'? DoubleQuote StringCharacter* DoubleQuote |
	('u8' | 'u' | 'U') DoubleQuote StringCharacter* DoubleQuote | // C++ 11
	StringPrefix? 'R' DoubleQuote DelimiterCharacter* '(' RawCharacter* ')' DelimiterCharacter* DoubleQuote; // C++ 11
