
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
            [NotNull] Parser recognizer,
            [NotNull] DFA dfa,
            int startIndex,
            int stopIndex,
            bool exact,
            [Nullable] BitSet ambigAlts,
            [NotNull] ATNConfigSet configs) override;

        /// <summary>
        /// Report attempting full context
        /// </summary>
        void ReportAttemptingFullContext(
            [NotNull] Parser recognizer,
            [NotNull] DFA dfa,
            int startIndex,
            int stopIndex,
            [Nullable] BitSet conflictingAlts,
            [NotNull] SimulatorState conflictState) override;

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
            [NotNull] IRecognizer recognizer,
            [Nullable] IToken offendingSymbol,
            int line,
            int charPositionInLine,
            [NotNull] string msg,
            [Nullable] RecognitionException e) override;
    }
}
