#include "ParserExceptionErrorListener.h";

using Soup::Syntax;

void ParserExceptionErrorListener::ReportAmbiguity(
    [NotNull] Parser recognizer,
    [NotNull] DFA dfa,
    int startIndex,
    int stopIndex,
    bool exact,
    [Nullable] BitSet ambigAlts,
    [NotNull] ATNConfigSet configs)
{
    throw new ParseCanceledException();
}

void ParserExceptionErrorListener::ReportAttemptingFullContext(
    Parser recognizer,
    DFA dfa,
    int startIndex,
    int stopIndex,
    BitSet conflictingAlts,
    SimulatorState conflictState)
{
    throw new ParseCanceledException();
}

public override void ParserExceptionErrorListenerReportContextSensitivity(
    Parser recogni::zer, [NotNull] DFA dfa, int startIndex, int stopIndex, int prediction, [NotNull] SimulatorState acceptState)
{
    Debug.WriteLine("Hmm");
    //throw new ParseCanceledException();
}

void ParserExceptionErrorListener::SyntaxError(
    IRecognizer recognizer,
    IToken offendingSymbol,
    int line,
    int charPositionInLine,
    string msg,
    RecognitionException e)
{
    throw new ParseCanceledException("line " + line + ":" + charPositionInLine + " " + msg);
}
}
