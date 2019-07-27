call antlr4 -Dlanguage=Cpp Grammar\CppLexer.g4 -o Source\Parser\
call antlr4 -Dlanguage=Cpp Grammar\CppParser.g4 -visitor -lib Source\Parser\Grammar\ -o Source\Parser\