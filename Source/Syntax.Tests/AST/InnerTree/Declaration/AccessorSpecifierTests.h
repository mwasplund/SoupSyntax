#pragma once
#include "TestUtils.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
	class InnerTreeAccessorSpecifierTests
	{
	public:
		// [[Fact]]
		void Initialize()
		{
			auto uut = SyntaxFactory::CreateAccessorSpecifier(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Public),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Colon));

			Assert::AreEqual(
				SyntaxNodeType::AccessorSpecifier,
				uut->GetType(),
				"Verify has correct type.");
			Assert::AreEqual(
				*SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Public),
				uut->GetAccessorToken(),
				"Verify accessor token matches.");
			Assert::AreEqual(
				*SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Colon),
				uut->GetColonToken(),
				"Verify colon token matches.");
		}

		// [[Fact]]
		void OperatorEqual()
		{
			auto uut = SyntaxFactory::CreateAccessorSpecifier(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Public),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Colon));

			TestUtils::AreEqual(
				SyntaxFactory::CreateAccessorSpecifier(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Public),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Colon)),
				uut,
				"Verify matches.");
		}

		// [[Fact]]
		void OperatorNotEqualAccessorToken()
		{
			auto uut = SyntaxFactory::CreateAccessorSpecifier(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Public),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Colon));

			TestUtils::AreNotEqual(
				SyntaxFactory::CreateAccessorSpecifier(
					SyntaxFactory::CreateKeywordToken(
						SyntaxTokenType::Public,
						{
							SyntaxFactory::CreateTrivia(" "),
						},
						{}),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Colon)),
				uut,
				"Verify do not match.");
		}

		// [[Fact]]
		void OperatorNotEqualColonToken()
		{
			auto uut = SyntaxFactory::CreateAccessorSpecifier(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Public),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Colon));

			TestUtils::AreNotEqual(
				SyntaxFactory::CreateAccessorSpecifier(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Public),
					SyntaxFactory::CreateKeywordToken(
						SyntaxTokenType::Colon,
						{
							SyntaxFactory::CreateTrivia(" "),
						},
						{})),
				uut,
				"Verify do not match.");
		}
	};
}
