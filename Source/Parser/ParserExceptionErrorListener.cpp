module Soup.Syntax.Parser;

using namespace antlr4;
using namespace antlr4::atn;
using namespace antlr4::dfa;
using namespace antlrcpp;
using namespace Soup::Syntax;

std::string GetDecisionDescription(Parser *recognizer, const dfa::DFA &dfa)
{
    size_t decision = dfa.decision;
    size_t ruleIndex = (reinterpret_cast<atn::ATNState*>(dfa.atnStartState))->ruleIndex;

    const std::vector<std::string>& ruleNames = recognizer->getRuleNames();
    if (ruleIndex == std::numeric_limits<size_t>::max() || ruleIndex >= ruleNames.size())
    {
        return std::to_string(decision);
    }

    std::string ruleName = ruleNames[ruleIndex];
    if (ruleName == "" || ruleName.empty())
    {
        return std::to_string(decision);
    }

    return std::to_string(decision) + " (" + ruleName + ")";
}

std::string GetAlternatesDescription(
    ATNConfigSet *configs)
{
    return configs->getAlts().toString();
}

void ParserExceptionErrorListener::reportAmbiguity(
        Parser *recognizer,
        const DFA &dfa,
        size_t startIndex,
        size_t stopIndex,
        bool exact,
        const BitSet &ambigAlts,
        ATNConfigSet *configs)
{
    std::stringstream errorMessage;
    errorMessage << "ParserExceptionErrorListener::reportAmbiguity" << " index " << startIndex << ":" << stopIndex;
    errorMessage << "\n" << GetDecisionDescription(recognizer, dfa) << "\n";
    errorMessage << "\n" << const_cast<BitSet&>(ambigAlts).toString() << "\n";
    errorMessage << "\n" << GetAlternatesDescription(configs) << "\n";

    throw ParseCancellationException(errorMessage.str());
}

void ParserExceptionErrorListener::reportAttemptingFullContext(
        Parser *recognizer,
        const DFA &dfa,
        size_t startIndex,
        size_t stopIndex,
        const BitSet &conflictingAlts,
        ATNConfigSet *configs)
{
    std::stringstream errorMessage;
    errorMessage << "ParserExceptionErrorListener::reportAttemptingFullContext" << " index " << startIndex << ":" << stopIndex;
    errorMessage << "\n" << GetDecisionDescription(recognizer, dfa) << "\n";
    errorMessage << "\n" << const_cast<BitSet&>(conflictingAlts).toString() << "\n";
    errorMessage << "\n" << GetAlternatesDescription(configs) << "\n";
    
    // TODO: Add unit tests to verify this
    // throw ParseCancellationException(errorMessage.str());
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
    auto state = recognizer->getState();
    errorMessage << "Parser:SyntaxError: " << state << " line " << line << ":" << charPositionInLine << " " << msg;

    throw ParseCancellationException(errorMessage.str());
}
