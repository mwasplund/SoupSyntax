#pragma once
#include "TestUtils.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
	class InnerTreeEmptyStatementTests
	{
	public:
		// [[Fact]]
		void InitializeSimple()
		{
			auto uut = SyntaxFactory::CreateEmptyStatement(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

			Assert::AreEqual(
				SyntaxNodeType::EmptyStatement,
				uut->GetType(),
				"Verify has correct type.");
			Assert::AreEqual(
				*SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon),
				uut->GetSemicolonToken(),
				"Verify semicolon token matches.");
		}

		// [[Fact]]
		void OperatorEqual()
		{
			auto uut = SyntaxFactory::CreateEmptyStatement(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

			TestUtils::AreEqual(
				SyntaxFactory::CreateEmptyStatement(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
				uut,
				"Verify matches.");
		}

		// [[Fact]]
		void OperatorNotEqualSemicolonToken()
		{
			auto uut = SyntaxFactory::CreateEmptyStatement(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

			TestUtils::AreNotEqual(
				SyntaxFactory::CreateEmptyStatement(
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
