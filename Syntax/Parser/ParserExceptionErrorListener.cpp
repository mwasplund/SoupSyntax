﻿module SoupSyntax;

using namespace antlr4;
using namespace antlr4::atn;
using namespace antlr4::dfa;
using namespace antlrcpp;
using namespace Soup::Syntax;

std::string getDecisionDescription(Parser *recognizer, const dfa::DFA &dfa) {
  size_t decision = dfa.decision;
  size_t ruleIndex = (reinterpret_cast<atn::ATNState*>(dfa.atnStartState))->ruleIndex;

  const std::vector<std::string>& ruleNames = recognizer->getRuleNames();
  if (ruleIndex == std::numeric_limits<size_t>::max() || ruleIndex >= ruleNames.size()) {
    return std::to_string(decision);
  }

  std::string ruleName = ruleNames[ruleIndex];
  if (ruleName == "" || ruleName.empty())  {
    return std::to_string(decision);
  }

  return std::to_string(decision) + " (" + ruleName + ")";
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
    errorMessage << "ParserExceptionErrorListener::reportAmbiguity" << " index " << startIndex << ":" << stopIndex << " - " << ambigAlts;
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
    if (configs != nullptr)
    {
        auto alts = configs->getAlts();
        size_t index = alts.nextSetBit(0);
        while (index != std::numeric_limits<size_t>::max())
        {
            errorMessage << "\n" << index;
            auto config = configs->get(index);
            errorMessage << config->toString();
            index = alts.nextSetBit(index+1);
        }
    }

    errorMessage << "\n" << getDecisionDescription(recognizer, dfa) << std::endl;

    throw ParseCancellationException(errorMessage.str());
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
