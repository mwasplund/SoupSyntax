#pragma once
#include "TestUtils.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
	class OuterTreeClassSpecifierTests
	{
	public:
		// [[Fact]]
		void InitializeNoIdentifier()
		{
			auto uut = SyntaxFactory::CreateClassSpecifier(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
				nullptr,
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
				SyntaxFactory::CreateSyntaxList<Declaration>({}),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace))->CreateOuter(nullptr);

			Assert::AreEqual(
				SyntaxNodeType::ClassSpecifier,
				uut->GetType(),
				"Verify has correct type.");
			TestUtils::AreEqual(
				*SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
				uut->GetClassToken(),
				"Verify class token matches.");
			Assert::IsFalse(
				uut->HasIdentifierToken(),
				"Verify has no identifier token.");
			TestUtils::AreEqual(
				*SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
				uut->GetOpenBraceToken(),
				"Verify left brace token matches.");
			TestUtils::AreEqual(
				*SyntaxFactory::CreateSyntaxList<Declaration>({}),
				uut->GetMemberDeclarations(),
				"Verify member declarations list matches.");
			TestUtils::AreEqual(
				*SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace),
				uut->GetCloseBraceToken(),
				"Verify right brace token matches.");
		}

		// [[Fact]]
		void InitializeWithIdentifier()
		{
			auto uut = SyntaxFactory::CreateClassSpecifier(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
				SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass"),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
				SyntaxFactory::CreateSyntaxList<Declaration>(
					{
						SyntaxFactory::CreateAccessorSpecifier(
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Public),
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Colon)),
						SyntaxFactory::CreateEmptyDeclaration(
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
					}),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace))->CreateOuter(nullptr);

			Assert::AreEqual(
				SyntaxNodeType::ClassSpecifier,
				uut->GetType(),
				"Verify has correct type.");
			TestUtils::AreEqual(
				*SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
				uut->GetClassToken(),
				"Verify class token matches.");
			Assert::IsTrue(
				uut->HasIdentifierToken(),
				"Verify has identifier token.");
			TestUtils::AreEqual(
				*SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass"),
				uut->GetIdentifierToken(),
				"Verify identifier token matches.");
			TestUtils::AreEqual(
				*SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
				uut->GetOpenBraceToken(),
				"Verify left brace token matches.");
			TestUtils::AreEqual(
				*SyntaxFactory::CreateSyntaxList<Declaration>(
					{
						SyntaxFactory::CreateAccessorSpecifier(
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Public),
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Colon)),
						SyntaxFactory::CreateEmptyDeclaration(
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
					}),
				uut->GetMemberDeclarations(),
				"Verify member declarations list matches.");
			TestUtils::AreEqual(
				*SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace),
				uut->GetCloseBraceToken(),
				"Verify right brace token matches.");
		}

		// [[Fact]]
		void GetChildrenNoIdentifier()
		{
			auto uut = SyntaxFactory::CreateClassSpecifier(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
				nullptr,
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
				SyntaxFactory::CreateSyntaxList<Declaration>({}),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace))->CreateOuter(nullptr);

			Assert::AreEqual(
				std::vector<OuterTree::SyntaxNodeChild>(
				{
					TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class)),
					TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace)),
					TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
				}),
				uut->GetChildren(),
				"Verify children match.");
		}

		// [[Fact]]
		void GetChildrenWithIdentifier()
		{
			auto uut = SyntaxFactory::CreateClassSpecifier(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
				SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass"),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
				SyntaxFactory::CreateSyntaxList<Declaration>(
					{
						SyntaxFactory::CreateAccessorSpecifier(
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Public),
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Colon)),
						SyntaxFactory::CreateEmptyDeclaration(
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
					}),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace))->CreateOuter(nullptr);

			Assert::AreEqual(
				std::vector<OuterTree::SyntaxNodeChild>(
				{
					TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class)),
					TestUtils::CreateChild(SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass")),
					TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace)),
					TestUtils::CreateChild(
						SyntaxFactory::CreateAccessorSpecifier(
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Public),
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Colon))),
					TestUtils::CreateChild(
						SyntaxFactory::CreateEmptyDeclaration(
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))),
					TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
				}),
				uut->GetChildren(),
				"Verify children match.");
		}

		// [[Fact]]
		void OperatorEqualNoIdentifier()
		{
			auto uut = SyntaxFactory::CreateClassSpecifier(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
				nullptr,
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
				SyntaxFactory::CreateSyntaxList<Declaration>({}),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace))->CreateOuter(nullptr);

			TestUtils::AreEqual(
				SyntaxFactory::CreateClassSpecifier(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
					nullptr,
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
					SyntaxFactory::CreateSyntaxList<Declaration>({}),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
				uut,
				"Verify matches.");
		}

		// [[Fact]]
		void OperatorEqualWithIdentifier()
		{
			auto uut = SyntaxFactory::CreateClassSpecifier(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
				SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass"),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
				SyntaxFactory::CreateSyntaxList<Declaration>(
					{
						SyntaxFactory::CreateAccessorSpecifier(
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Public),
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Colon)),
						SyntaxFactory::CreateEmptyDeclaration(
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
					}),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace))->CreateOuter(nullptr);

			TestUtils::AreEqual(
				SyntaxFactory::CreateClassSpecifier(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
					SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass"),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
					SyntaxFactory::CreateSyntaxList<Declaration>(
						{
							SyntaxFactory::CreateAccessorSpecifier(
								SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Public),
								SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Colon)),
							SyntaxFactory::CreateEmptyDeclaration(
								SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
						}),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
				uut,
				"Verify matches.");
		}

		// [[Fact]]
		void OperatorNotEqualClassToken()
		{
			auto uut = SyntaxFactory::CreateClassSpecifier(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
				SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass"),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
				SyntaxFactory::CreateSyntaxList<Declaration>(
					{
						SyntaxFactory::CreateAccessorSpecifier(
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Public),
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Colon)),
						SyntaxFactory::CreateEmptyDeclaration(
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
					}),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace))->CreateOuter(nullptr);

			TestUtils::AreNotEqual(
				SyntaxFactory::CreateClassSpecifier(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Struct),
				SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass"),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
				SyntaxFactory::CreateSyntaxList<Declaration>(
					{
						SyntaxFactory::CreateAccessorSpecifier(
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Public),
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Colon)),
						SyntaxFactory::CreateEmptyDeclaration(
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
					}),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
				uut,
				"Verify do not match.");
		}

		// [[Fact]]
		void OperatorNotEqualNoIdentifier()
		{
			auto uut = SyntaxFactory::CreateClassSpecifier(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
				SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass"),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
				SyntaxFactory::CreateSyntaxList<Declaration>(
					{
						SyntaxFactory::CreateEmptyDeclaration(
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
					}),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace))->CreateOuter(nullptr);

			TestUtils::AreNotEqual(
				SyntaxFactory::CreateClassSpecifier(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
					nullptr,
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
					SyntaxFactory::CreateSyntaxList<Declaration>(
						{
							SyntaxFactory::CreateEmptyDeclaration(
								SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
						}),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
				uut,
				"Verify do not match.");
		}

		// [[Fact]]
		void OperatorNotEqualWithIdentifier()
		{
			auto uut = SyntaxFactory::CreateClassSpecifier(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
				SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass"),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
				SyntaxFactory::CreateSyntaxList<Declaration>(
					{
						SyntaxFactory::CreateEmptyDeclaration(
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
					}),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace))->CreateOuter(nullptr);

			TestUtils::AreNotEqual(
				SyntaxFactory::CreateClassSpecifier(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
					SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass2"),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
					SyntaxFactory::CreateSyntaxList<Declaration>(
						{
							SyntaxFactory::CreateEmptyDeclaration(
								SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
						}),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
				uut,
				"Verify do not match.");
		}

		// [[Fact]]
		void OperatorNotEqualOpenBraceToken()
		{
			auto uut = SyntaxFactory::CreateClassSpecifier(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
				SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass"),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
				SyntaxFactory::CreateSyntaxList<Declaration>(
					{
						SyntaxFactory::CreateEmptyDeclaration(
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
					}),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace))->CreateOuter(nullptr);

			TestUtils::AreNotEqual(
				SyntaxFactory::CreateClassSpecifier(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
					SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass"),
					SyntaxFactory::CreateKeywordToken(
						SyntaxTokenType::OpenBrace,
						{
							SyntaxFactory::CreateTrivia(" "),
						},
						{}),
					SyntaxFactory::CreateSyntaxList<Declaration>(
						{
							SyntaxFactory::CreateEmptyDeclaration(
								SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
						}),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
				uut,
				"Verify do not match.");
		}

		// [[Fact]]
		void OperatorNotEqualMemberDeclarations()
		{
			auto uut = SyntaxFactory::CreateClassSpecifier(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
				SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass"),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
				SyntaxFactory::CreateSyntaxList<Declaration>(
					{
						SyntaxFactory::CreateEmptyDeclaration(
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
					}),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace))->CreateOuter(nullptr);

			TestUtils::AreNotEqual(
				SyntaxFactory::CreateClassSpecifier(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
					SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass"),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
					SyntaxFactory::CreateSyntaxList<Declaration>({}),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
				uut,
				"Verify do not match.");
		}

		// [[Fact]]
		void OperatorNotEqualCloseBraceToken()
		{
			auto uut = SyntaxFactory::CreateClassSpecifier(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
				SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass"),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
				SyntaxFactory::CreateSyntaxList<Declaration>(
					{
						SyntaxFactory::CreateEmptyDeclaration(
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
					}),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace))->CreateOuter(nullptr);

			TestUtils::AreNotEqual(
				SyntaxFactory::CreateClassSpecifier(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
					SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass"),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
					SyntaxFactory::CreateSyntaxList<Declaration>(
						{
							SyntaxFactory::CreateEmptyDeclaration(
								SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
						}),
					SyntaxFactory::CreateKeywordToken(
						SyntaxTokenType::CloseBrace,
						{
							SyntaxFactory::CreateTrivia(" "),
						},
						{})),
				uut,
				"Verify do not match.");
		}
	};
}
