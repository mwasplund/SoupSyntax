/*******************************************************************************
 * C++ 17 Lexer Grammar for ANTLR v4
 *
 * Based on N4659 final working paper
 * http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2017/n4659.pdf
 ******************************************************************************/

lexer grammar CppLexer;
channels { TRIVIA }

// Ensure all keywards and operators come before literals and identifiers
import 
	CppLexerKeywords,
	CppLexerOperatorsAndPunctuators,
	CppLexerIntegerLiterals,
	CppLexerFloatingPointLiterals,
	CppLexerCharacterLiterals,
	CppLexerStringLiterals,
	CppLexerUserDefinedLiterals,
	CppLexerIdentifiers;

BlockComment: '/*' .*? '*/' -> channel(TRIVIA);
LineComment: '//' ~[\r\n]* -> channel(TRIVIA);

Whitespace: (' ' | '\t')+ -> channel(TRIVIA);

// Skip over Preprocessor for now
Preprocessor: '#' ~[\r\n]* -> channel(TRIVIA);

Newline: ('\r' '\n'? | '\n') -> channel(TRIVIA);
