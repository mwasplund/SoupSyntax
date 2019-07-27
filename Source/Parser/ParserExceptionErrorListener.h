
namespace Soup::Syntax
{
/// <summary>
/// Exception based error listener
/// </summary>
export class ParserExceptionErrorListener : public antlr4::BaseErrorListener
{
  public:
    /// <summary>
    /// Report ambiguity
    /// </summary>
    virtual void reportAmbiguity(
        antlr4::Parser *recognizer,
        const antlr4::dfa::DFA &dfa,
        size_t startIndex,
        size_t stopIndex,
        bool exact,
        const antlrcpp::BitSet &ambigAlts,
        antlr4::atn::ATNConfigSet *configs) override final;

    /// <summary>
    /// Report attempting full context
    /// </summary>
    virtual void reportAttemptingFullContext(
        antlr4::Parser *recognizer,
        const antlr4::dfa::DFA &dfa,
        size_t startIndex,
        size_t stopIndex,
        const antlrcpp::BitSet &conflictingAlts,
        antlr4::atn::ATNConfigSet *configs) override final;

    /// <summary>
    /// Report context sensitivity
    /// </summary>
    virtual void reportContextSensitivity(
        antlr4::Parser *recognizer,
        const antlr4::dfa::DFA &dfa,
        size_t startIndex,
        size_t stopIndex,
        size_t prediction,
        antlr4::atn::ATNConfigSet *configs) override final;

    /// <summary>
    /// Syntax error
    /// </summary>
    virtual void syntaxError(
        antlr4::Recognizer *recognizer,
        antlr4::Token *offendingSymbol,
        size_t line,
        size_t charPositionInLine,
        const std::string &msg,
        std::exception_ptr e) override final;
};
} // namespace Soup::Syntax
