call antlr4 -Dlanguage=Cpp Grammar\CppLexer.g4 -o Syntax\
call antlr4 -Dlanguage=Cpp Grammar\CppParser.g4 -lib Syntax\Grammar\ -o Syntax\