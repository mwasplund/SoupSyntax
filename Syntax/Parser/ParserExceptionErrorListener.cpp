module SoupSyntax;

using namespace antlr4;
using namespace antlr4::atn;
using namespace antlr4::dfa;
using namespace antlrcpp;
using namespace Soup::Syntax;

void ParserExceptionErrorListener::reportAmbiguity(
        Parser *recognizer,
        const DFA &dfa,
        size_t startIndex,
        size_t stopIndex,
        bool exact,
        const BitSet &ambigAlts,
        ATNConfigSet *configs)
{
    throw ParseCancellationException();
}

void ParserExceptionErrorListener::reportAttemptingFullContext(
        Parser *recognizer,
        const DFA &dfa,
        size_t startIndex,
        size_t stopIndex,
        const BitSet &conflictingAlts,
        ATNConfigSet *configs)
{
    throw ParseCancellationException();
}

void ParserExceptionErrorListener::reportContextSensitivity(
        Parser *recognizer,
        const DFA &dfa,
        size_t startIndex,
        size_t stopIndex,
        size_t prediction,
        ATNConfigSet *configs)
{
    // TODO: Debug.WriteLine("Hmm");
    //throw ParseCancellationException();
}

void ParserExceptionErrorListener::syntaxError(
        Recognizer *recognizer,
        Token *offendingSymbol,
        size_t line,
        size_t charPositionInLine,
        const std::string &msg,
        std::exception_ptr e)
{
    std::stringstream errorMessage;
    errorMessage << "line " << line << ":" << charPositionInLine << " " << msg;

    throw ParseCancellationException(errorMessage.str());
}
