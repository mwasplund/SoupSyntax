call antlr4 -Dlanguage=Cpp Grammar\CppLexer.g4 -o Syntax\Parser\
call antlr4 -Dlanguage=Cpp Grammar\CppParser.g4 -visitor -lib Syntax\Parser\Grammar\ -o Syntax\Parser\