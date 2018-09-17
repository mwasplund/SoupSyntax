
namespace Soup::StaticAnalysis
{
    /// <summary>
    /// Exception based error listener
    /// </summary>
    class ParserExceptionErrorListener : BaseErrorListener
    {
    public:
        /// <summary>
        /// Report ambiguity
        /// </summary>
        void ReportAmbiguity(
            Parser recognizer,
            DFA dfa,
            int startIndex,
            int stopIndex,
            bool exact,
            BitSet ambigAlts,
            ATNConfigSet configs) override;

        /// <summary>
        /// Report attempting full context
        /// </summary>
        void ReportAttemptingFullContext(
            Parser recognizer,
            DFA dfa,
            int startIndex,
            int stopIndex,
            BitSet conflictingAlts,
            SimulatorState conflictState) override;

        /// <summary>
        /// Report context sensitivity
        /// </summary>
        void ReportContextSensitivity(
            Parser recognizer,
            DFA dfa,
            int startIndex,
            int stopIndex,
            int prediction,
            SimulatorState acceptState) override;

        /// <summary>
        /// Syntax error
        /// </summary>
        void SyntaxError(
            IRecognizer recognizer,
            IToken offendingSymbol,
            int line,
            int charPositionInLine,
            string msg,
            RecognitionException e) override;
    }
}
