#include "ParserExceptionErrorListener.h";

using namespace Soup::Syntax;

void ParserExceptionErrorListener::ReportAmbiguity(
    Parser recognizer,
    DFA dfa,
    int startIndex,
    int stopIndex,
    bool exact,
    BitSet ambigAlts,
    ATNConfigSet configs)
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

void ParserExceptionErrorListenerReportContextSensitivity(
    Parser recogni::zer, DFA dfa, int startIndex, int stopIndex, int prediction, SimulatorState acceptState)
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
