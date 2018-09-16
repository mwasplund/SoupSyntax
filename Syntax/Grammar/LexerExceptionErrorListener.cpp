#include "LexerExceptionErrorListener.h"
using Soup::Syntax;

void LexerExceptionErrorListener::SyntaxError(
    [NotNull] IRecognizer recognizer,
    [Nullable] int offendingSymbol,
    int line,
    int charPositionInLine,
    [NotNull] string msg,
    [Nullable] RecognitionException e)
{
    throw new ParseCanceledException("line " + line + ":" + charPositionInLine + " " + msg);
}
