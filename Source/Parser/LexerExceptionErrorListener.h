
namespace Soup::Syntax
{
	/// <summary>
	/// Exception based error listener
	/// </summary>
	export class LexerExceptionErrorListener : public antlr4::BaseErrorListener
	{
	public:
		/// <summary>
		/// Syntax error
		/// </summary>
		virtual void syntaxError(
			antlr4::Recognizer* recognizer,
			antlr4::Token* offendingSymbol,
			size_t line,
			size_t charPositionInLine,
			const std::string& msg,
			std::exception_ptr e) override final;
	};
}
