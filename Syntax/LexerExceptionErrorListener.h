
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
            IRecognizer recognizer,
            int offendingSymbol,
            int line,
            int charPositionInLine,
            string msg,
            RecognitionException e);
    }
}
