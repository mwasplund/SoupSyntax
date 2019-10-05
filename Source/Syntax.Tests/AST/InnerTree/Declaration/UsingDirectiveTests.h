#pragma once
#include "TestUtils.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
	class InnerTreeUsingDirectiveTests
	{
	public:
		[[Fact]]
		void Initialize()
		{
			auto uut = SyntaxFactory::CreateUsingDirective(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Using),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Namespace),
				SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
					{
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "BaseNamespace"),
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "SubNamespace"),
					},
					{
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
					}),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

			Assert::AreEqual(
				SyntaxNodeType::UsingDirective,
				uut->GetType(),
				"Verify has correct type.");
			Assert::AreEqual(
				*SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Using),
				uut->GetUsingToken(),
				"Verify using token matches.");
			Assert::AreEqual(
				*SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Namespace),
				uut->GetNamespaceToken(),
				"Verify namespace token matches.");
			Assert::AreEqual(
				*SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
					{
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "BaseNamespace"),
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "SubNamespace"),
					},
					{
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
					}),
				uut->GetNameIdentifierList(),
				"Verify name identifier list matches.");
			Assert::AreEqual(
				*SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon),
				uut->GetSemicolonToken(),
				"Verify semicolon token matches.");
		}

		[[Fact]]
		void OperatorEqual()
		{
			auto uut = SyntaxFactory::CreateUsingDirective(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Using),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Namespace),
				SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
					{
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "BaseNamespace"),
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "SubNamespace"),
					},
					{
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
					}),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

			TestUtils::AreEqual(
				SyntaxFactory::CreateUsingDirective(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Using),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Namespace),
					SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
						{
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "BaseNamespace"),
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "SubNamespace"),
						},
						{
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
						}),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
				uut,
				"Verify matches.");
		}

		[[Fact]]
		void OperatorNotEqualUsingToken()
		{
			auto uut = SyntaxFactory::CreateUsingDirective(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Using),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Namespace),
				SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
					{
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "BaseNamespace"),
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "SubNamespace"),
					},
					{
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
					}),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

			TestUtils::AreNotEqual(
				SyntaxFactory::CreateUsingDirective(
					SyntaxFactory::CreateKeywordToken(
						SyntaxTokenType::Using,
						{
							SyntaxFactory::CreateTrivia(" "),
						},
						{}),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Namespace),
					SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
						{
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "BaseNamespace"),
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "SubNamespace"),
						},
						{
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
						}),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
				uut,
				"Verify do not match.");
		}

		[[Fact]]
		void OperatorNotEqualNamespaceToken()
		{
			auto uut = SyntaxFactory::CreateUsingDirective(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Using),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Namespace),
				SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
					{
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "BaseNamespace"),
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "SubNamespace"),
					},
					{
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
					}),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

			TestUtils::AreNotEqual(
				SyntaxFactory::CreateUsingDirective(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Using),
					SyntaxFactory::CreateKeywordToken(
						SyntaxTokenType::Namespace,
						{
							SyntaxFactory::CreateTrivia(" "),
						},
						{}),
					SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
						{
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "BaseNamespace"),
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "SubNamespace"),
						},
						{
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
						}),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
				uut,
				"Verify do not match.");
		}

		[[Fact]]
		void OperatorNotEqualNameIdentifierList()
		{
			auto uut = SyntaxFactory::CreateUsingDirective(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Using),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Namespace),
				SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
					{
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "BaseNamespace"),
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "SubNamespace"),
					},
					{
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
					}),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

			TestUtils::AreNotEqual(
				SyntaxFactory::CreateUsingDirective(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Using),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Namespace),
					SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
						{
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "BaseNamespace2"),
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "SubNamespace"),
						},
						{
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
						}),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
				uut,
				"Verify do not match.");
		}

		[[Fact]]
		void OperatorNotEqualSemicolonToken()
		{
			auto uut = SyntaxFactory::CreateUsingDirective(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Using),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Namespace),
				SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
					{
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "BaseNamespace"),
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "SubNamespace"),
					},
					{
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
					}),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

			TestUtils::AreNotEqual(
				SyntaxFactory::CreateUsingDirective(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Using),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Namespace),
					SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
						{
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "BaseNamespace"),
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "SubNamespace"),
						},
						{
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
						}),
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
