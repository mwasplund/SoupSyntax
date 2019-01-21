module SoupSyntax;

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
    errorMessage << "line " << line << ":" << charPositionInLine << " " << msg;

    throw new ParseCancellationException(errorMessage.str());
}
