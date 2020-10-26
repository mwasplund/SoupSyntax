#pragma once
#include "TestUtils.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
	class InnerTreeReturnStatementTests
	{
	public:
		// [[Fact]]
		void InitializeNoExpression()
		{
			// return;
			auto uut = SyntaxFactory::CreateReturnStatement(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Return),
				nullptr,
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

			Assert::AreEqual(
				SyntaxNodeType::ReturnStatement,
				uut->GetType(),
				"Verify has correct type.");
			Assert::AreEqual(
				*SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Return),
				uut->GetReturnToken(),
				"Verify return token matches.");
			Assert::IsFalse(
				uut->HasExpression(),
				"Verify has no expression.");
			Assert::AreEqual(
				*SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon),
				uut->GetSemicolonToken(),
				"Verify semicolon token matches.");
		}

		// [[Fact]]
		void InitializeWithExpression()
		{
			// return value;
			auto uut = SyntaxFactory::CreateReturnStatement(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Return),
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

			Assert::AreEqual(
				SyntaxNodeType::ReturnStatement,
				uut->GetType(),
				"Verify has correct type.");
			Assert::AreEqual(
				*SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Return),
				uut->GetReturnToken(),
				"Verify return token matches.");
			Assert::IsTrue(
				uut->HasExpression(),
				"Verify has expression.");
			TestUtils::AreEqual(
				*SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))),
				uut->GetExpression(),
				"Verify expression matches.");
			Assert::AreEqual(
				*SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon),
				uut->GetSemicolonToken(),
				"Verify semicolon token matches.");
		}

		// [[Fact]]
		void OperatorEqualNoExpression()
		{
			// return;
			auto uut = SyntaxFactory::CreateReturnStatement(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Return),
				nullptr,
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

			TestUtils::AreEqual(
				SyntaxFactory::CreateReturnStatement(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Return),
					nullptr,
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
				uut,
				"Verify matches.");
		}

		// [[Fact]]
		void OperatorEqualWithExpression()
		{
			// return value;
			auto uut = SyntaxFactory::CreateReturnStatement(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Return),
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

			TestUtils::AreEqual(
				SyntaxFactory::CreateReturnStatement(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Return),
					SyntaxFactory::CreateIdentifierExpression(
						SyntaxFactory::CreateSimpleIdentifier(
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
				uut,
				"Verify matches.");
		}

		// [[Fact]]
		void OperatorNotEqualReturnToken()
		{
			// return;
			auto uut = SyntaxFactory::CreateReturnStatement(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Return),
				nullptr,
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

			TestUtils::AreNotEqual(
				SyntaxFactory::CreateReturnStatement(
					SyntaxFactory::CreateKeywordToken(
						SyntaxTokenType::Return,
						{
							SyntaxFactory::CreateTrivia(" "),
						},
						{}),
					nullptr,
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
				uut,
				"Verify do not match.");
		}

		// [[Fact]]
		void OperatorNotEqualNoExpression()
		{
			// return;
			auto uut = SyntaxFactory::CreateReturnStatement(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Return),
				nullptr,
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

			TestUtils::AreNotEqual(
				SyntaxFactory::CreateReturnStatement(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Return),
					SyntaxFactory::CreateIdentifierExpression(
						SyntaxFactory::CreateSimpleIdentifier(
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
				uut,
				"Verify do not match.");
		}

		// [[Fact]]
		void OperatorNotEqualWithExpression()
		{
			// return value;
			auto uut = SyntaxFactory::CreateReturnStatement(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Return),
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

			TestUtils::AreNotEqual(
				SyntaxFactory::CreateReturnStatement(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Return),
					SyntaxFactory::CreateIdentifierExpression(
						SyntaxFactory::CreateSimpleIdentifier(
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value2"))),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
				uut,
				"Verify do not match.");
		}

		// [[Fact]]
		void OperatorNotEqualSemicolonToken()
		{
			// return;
			auto uut = SyntaxFactory::CreateReturnStatement(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Return),
				nullptr,
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

			TestUtils::AreNotEqual(
				SyntaxFactory::CreateReturnStatement(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Return),
					nullptr,
					SyntaxFactory::CreateKeywordToken(
						SyntaxTokenType::Semicolon,
						{
							SyntaxFactory::CreateTrivia(" "),
						},
						{})),
				uut,
				"Verify do not match.");
		}
	};
}
