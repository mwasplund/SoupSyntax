
namespace Soup::Syntax
{
    /// <summary>
    /// Exception based error listener
    /// </summary>
    class LexerExceptionErrorListener : IAntlrErrorListener<int>
    {
    public:
        /// <summary>
        /// Syntax error
        /// </summary>
        void SyntaxError(
            [NotNull] IRecognizer recognizer,
            [Nullable] int offendingSymbol,
            int line,
            int charPositionInLine,
            [NotNull] string msg,
            [Nullable] RecognitionException e);
    }
}
