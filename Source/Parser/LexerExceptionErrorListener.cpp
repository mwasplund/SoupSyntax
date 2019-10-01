module Soup.Syntax.Parser;

using namespace antlr4;
using namespace Soup::Syntax;

void LexerExceptionErrorListener::syntaxError(
    Recognizer* recognizer,
    Token* offendingSymbol,
    size_t line,
    size_t charPositionInLine,
    const std::string& msg,
    std::exception_ptr e)
{
    std::stringstream errorMessage;
    errorMessage << "Lexer:SyntaxError: line " << line << ":" << charPositionInLine << " " << msg;

    throw ParseCancellationException(errorMessage.str());
}
