#pragma once
#include "TestUtils.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
	class ParseCompoundStatementTests
	{
	public:
		// [[Fact]]
		void EmptyCompoundStatement()
		{
			auto sourceCode = std::string("{}");
			auto actual = ParseCompoundStatement(sourceCode);

			auto expected = SyntaxFactory::CreateCompoundStatement(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
				SyntaxFactory::CreateSyntaxList<Statement>({}),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

			TestUtils::AreEqual(expected, actual, "Verify matches expected.");
		}

		// [[Fact]]
		void CompoundStatementWithSingleStatment()
		{
			auto sourceCode = std::string("{\n return 1;\n}");
			auto actual = ParseCompoundStatement(sourceCode);

			auto expected = SyntaxFactory::CreateCompoundStatement(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
				SyntaxFactory::CreateSyntaxList<Statement>(
				{
					SyntaxFactory::CreateReturnStatement(
						SyntaxFactory::CreateKeywordToken(
							SyntaxTokenType::Return,
							{
								SyntaxFactory::CreateTrivia("\n"),
								SyntaxFactory::CreateTrivia(" "),
							},
							{}),
						SyntaxFactory::CreateLiteralExpression(
							LiteralType::Integer,
							SyntaxFactory::CreateUniqueToken(
								SyntaxTokenType::IntegerLiteral,
								"1",
								{
									SyntaxFactory::CreateTrivia(" ")
								},
								{})),
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
				}),
				SyntaxFactory::CreateKeywordToken(
					SyntaxTokenType::CloseBrace,
					{
						SyntaxFactory::CreateTrivia("\n"),
					},
					{}));

			TestUtils::AreEqual(expected, actual, "Verify matches expected.");
		}

	private:
		std::shared_ptr<const CompoundStatement> ParseCompoundStatement(const std::string& sourceCode)
		{
			auto uut = TestUtils::BuildParser(sourceCode);
			auto context = uut.Parser->compoundStatement();

			// Convert the the abstract syntax tree
			auto node = uut.Visitor->visit(context)
				.as<std::shared_ptr<const SyntaxNode>>();

			return std::dynamic_pointer_cast<const CompoundStatement>(node);
		}
	};
}
