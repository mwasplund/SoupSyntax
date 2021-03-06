#pragma once
#include "TestUtils.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
	class ParseEmptyStatementTests
	{
	public:
		// [[Fact]]
		void Simple()
		{
			auto sourceCode = std::string(";");
			auto actual = ParseEmptyStatement(sourceCode);

			auto expected = SyntaxFactory::CreateEmptyStatement(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

			TestUtils::AreEqual(expected, actual, "Verify matches expected.");
		}

	private:
		std::shared_ptr<const EmptyStatement> ParseEmptyStatement(const std::string& sourceCode)
		{
			// An empty statement is actually an expression statement with no expression
			auto uut = TestUtils::BuildParser(sourceCode);
			auto context = uut.Parser->expressionStatement();

			// Convert the the abstract syntax tree
			auto node = uut.Visitor->visit(context)
				.as<std::shared_ptr<const SyntaxNode>>();

			return std::dynamic_pointer_cast<const EmptyStatement>(node);
		}
	};
}
