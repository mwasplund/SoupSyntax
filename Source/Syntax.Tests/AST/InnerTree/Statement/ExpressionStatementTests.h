#pragma once
#include "TestUtils.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
	class InnerTreeExpressionStatementTests
	{
	public:
		[[Fact]]
		void InitializeSimple()
		{
			// a;
			auto uut = SyntaxFactory::CreateExpressionStatement(
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

			Assert::AreEqual(
				SyntaxNodeType::ExpressionStatement,
				uut->GetType(),
				"Verify has correct type.");
			TestUtils::AreEqual(
				*SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
				uut->GetExpression(),
				"Verify expression matches.");
			Assert::AreEqual(
				*SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon),
				uut->GetSemicolonToken(),
				"Verify semicolon token matches.");
		}

		[[Fact]]
		void OperatorEqual()
		{
			// a;
			auto uut = SyntaxFactory::CreateExpressionStatement(
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

			TestUtils::AreEqual(
				SyntaxFactory::CreateExpressionStatement(
					SyntaxFactory::CreateIdentifierExpression(
						SyntaxFactory::CreateSimpleIdentifier(
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
				uut,
				"Verify matches.");
		}

		[[Fact]]
		void OperatorNotEqualExpression()
		{
			// a;
			auto uut = SyntaxFactory::CreateExpressionStatement(
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

			TestUtils::AreNotEqual(
				SyntaxFactory::CreateExpressionStatement(
					SyntaxFactory::CreateIdentifierExpression(
						SyntaxFactory::CreateSimpleIdentifier(
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"))),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
				uut,
				"Verify do not match.");
		}

		[[Fact]]
		void OperatorNotEqualSemicolonToken()
		{
			// a;
			auto uut = SyntaxFactory::CreateExpressionStatement(
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

			TestUtils::AreNotEqual(
				SyntaxFactory::CreateExpressionStatement(
					SyntaxFactory::CreateIdentifierExpression(
						SyntaxFactory::CreateSimpleIdentifier(
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
					SyntaxFactory::CreateKeywordToken(
						SyntaxTokenType::Semicolon,
						{
							SyntaxFactory::CreateTrivia(" "),
						},
						{
						})),
				uut,
				"Verify do not match.");
		}
	};
}
