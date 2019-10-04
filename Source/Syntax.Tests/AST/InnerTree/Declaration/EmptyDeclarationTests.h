#pragma once
#include "TestUtils.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
	class InnerTreeEmptyDeclarationTests
	{
	public:
		[[Fact]]
		void InitializeSimple()
		{
			auto uut = SyntaxFactory::CreateEmptyDeclaration(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

			Assert::AreEqual(
				SyntaxNodeType::EmptyDeclaration,
				uut->GetType(),
				"Verify has correct type.");
			Assert::AreEqual(
				*SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon),
				uut->GetSemicolonToken(),
				"Verify semicolon token matches.");
		}

		[[Fact]]
		void OperatorEqual()
		{
			auto uut = SyntaxFactory::CreateEmptyDeclaration(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

			TestUtils::AreEqual(
				SyntaxFactory::CreateEmptyDeclaration(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
				uut,
				"Verify matches.");
		}

		[[Fact]]
		void OperatorNotEqualSemicolonToken()
		{
			auto uut = SyntaxFactory::CreateEmptyDeclaration(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

			TestUtils::AreNotEqual(
				SyntaxFactory::CreateEmptyDeclaration(
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
