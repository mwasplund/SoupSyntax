#pragma once
#include "TestUtils.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
	class OuterTreeUsingDirectiveTests
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
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))->CreateOuter(nullptr);

			Assert::AreEqual(
				SyntaxNodeType::UsingDirective,
				uut->GetType(),
				"Verify has correct type.");
			TestUtils::AreEqual(
				*SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Using),
				uut->GetUsingToken(),
				"Verify using token matches.");
			TestUtils::AreEqual(
				*SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Namespace),
				uut->GetNamespaceToken(),
				"Verify namespace token matches.");
			TestUtils::AreEqual(
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
			TestUtils::AreEqual(
				*SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon),
				uut->GetSemicolonToken(),
				"Verify semicolon token matches.");
		}

		[[Fact]]
		void GetChildren()
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
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))->CreateOuter(nullptr);

			Assert::AreEqual(
				std::vector<OuterTree::SyntaxNodeChild>(
				{
					TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Using)),
					TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Namespace)),
					TestUtils::CreateChild(SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "BaseNamespace")),
					TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon)),
					TestUtils::CreateChild(SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "SubNamespace")),
					TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
				}),
				uut->GetChildren(),
				"Verify children match.");
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
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))->CreateOuter(nullptr);

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
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))->CreateOuter(nullptr);

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
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))->CreateOuter(nullptr);

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
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))->CreateOuter(nullptr);

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
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))->CreateOuter(nullptr);

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
