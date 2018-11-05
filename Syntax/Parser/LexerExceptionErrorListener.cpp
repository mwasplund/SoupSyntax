#include "LexerExceptionErrorListener.h"
using namespace Soup::Syntax;

void LexerExceptionErrorListener::SyntaxError(
    IRecognizer recognizer,
    int offendingSymbol,
    int line,
    int charPositionInLine,
    string msg,
    RecognitionException e)
{
    throw new ParseCanceledException("line " + line + ":" + charPositionInLine + " " + msg);
}
