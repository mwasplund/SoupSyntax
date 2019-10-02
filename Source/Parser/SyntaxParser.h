
#pragma once

namespace Soup::Syntax
{
	/// <summary>
	/// Syntax parser
	/// </summary>
	export class SyntaxParser
	{
	public:
		/// <summary>
		/// Parse a source file
		/// </summary>
		static std::shared_ptr<const SyntaxTree> Parse(const std::string& source);

		/// <summary>
		/// Parse a source file
		/// </summary>
		static std::shared_ptr<const SyntaxTree> Parse(std::istream& source);

		// TODO: Helper method?
		static void PrintAllTokens(const std::string& source);
		static void PrintAllTokens(std::istream& source);

	private:
		static std::shared_ptr<const SyntaxTree> Parse(antlr4::ANTLRInputStream* input);
		static void PrintAllTokens(antlr4::ANTLRInputStream* input);
	};
}
