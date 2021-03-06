#pragma once
#include "TestUtils.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
	class InnerTreeInitializerDeclaratorTests
	{
	public:
		// [[Fact]]
		void InitializeSimpleNoInitializer()
		{
			// a
			auto uut = SyntaxFactory::CreateInitializerDeclarator(
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
				nullptr);

			Assert::AreEqual(
				SyntaxNodeType::InitializerDeclarator,
				uut->GetType(),
				"Verify has correct type.");
			TestUtils::AreEqual(
				*SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
				uut->GetDeclarator(),
				"Verify declarator matches.");
			Assert::IsFalse(
				uut->HasInitializer(),
				"Verify has no initializer.");
		}

		// [[Fact]]
		void InitializeSimpleWithInitializer()
		{
			// a = 2
			auto uut = SyntaxFactory::CreateInitializerDeclarator(
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
				SyntaxFactory::CreateValueEqualInitializer(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
					SyntaxFactory::CreateLiteralExpression(
						LiteralType::Integer,
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2"))));

			Assert::AreEqual(
				SyntaxNodeType::InitializerDeclarator,
				uut->GetType(),
				"Verify has correct type.");
			TestUtils::AreEqual(
				*SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
				uut->GetDeclarator(),
				"Verify declarator matches.");
			Assert::IsTrue(
				uut->HasInitializer(),
				"Verify has initializer.");
			TestUtils::AreEqual(
				*SyntaxFactory::CreateValueEqualInitializer(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
					SyntaxFactory::CreateLiteralExpression(
						LiteralType::Integer,
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2"))),
				uut->GetInitializer(),
				"Verify initializer matches.");
		}

		// [[Fact]]
		void OperatorEqualNoInitializer()
		{
			// a
			auto uut = SyntaxFactory::CreateInitializerDeclarator(
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
				nullptr);

			TestUtils::AreEqual(
				SyntaxFactory::CreateInitializerDeclarator(
					SyntaxFactory::CreateIdentifierExpression(
						SyntaxFactory::CreateSimpleIdentifier(
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
					nullptr),
				uut,
				"Verify matches.");
		}

		// [[Fact]]
		void OperatorEqualWithInitializer()
		{
			// a = 2
			auto uut = SyntaxFactory::CreateInitializerDeclarator(
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
				SyntaxFactory::CreateValueEqualInitializer(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
					SyntaxFactory::CreateLiteralExpression(
						LiteralType::Integer,
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2"))));

			TestUtils::AreEqual(
				SyntaxFactory::CreateInitializerDeclarator(
					SyntaxFactory::CreateIdentifierExpression(
						SyntaxFactory::CreateSimpleIdentifier(
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
					SyntaxFactory::CreateValueEqualInitializer(
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
						SyntaxFactory::CreateLiteralExpression(
							LiteralType::Integer,
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2")))),
				uut,
				"Verify matches.");
		}

		// [[Fact]]
		void OperatorNotEqualDeclarator()
		{
			// a = 2
			auto uut = SyntaxFactory::CreateInitializerDeclarator(
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
				SyntaxFactory::CreateValueEqualInitializer(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
					SyntaxFactory::CreateLiteralExpression(
						LiteralType::Integer,
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2"))));

			TestUtils::AreNotEqual(
				SyntaxFactory::CreateInitializerDeclarator(
					SyntaxFactory::CreateIdentifierExpression(
						SyntaxFactory::CreateSimpleIdentifier(
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"))),
					SyntaxFactory::CreateValueEqualInitializer(
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
						SyntaxFactory::CreateLiteralExpression(
							LiteralType::Integer,
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2")))),
				uut,
				"Verify does not match.");
		}

		// [[Fact]]
		void OperatorNotEqualNoInitializer()
		{
			// a = 2
			auto uut = SyntaxFactory::CreateInitializerDeclarator(
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
				SyntaxFactory::CreateValueEqualInitializer(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
					SyntaxFactory::CreateLiteralExpression(
						LiteralType::Integer,
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2"))));

			TestUtils::AreNotEqual(
				SyntaxFactory::CreateInitializerDeclarator(
					SyntaxFactory::CreateIdentifierExpression(
						SyntaxFactory::CreateSimpleIdentifier(
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
					nullptr),
				uut,
				"Verify does not match.");
		}

		// [[Fact]]
		void OperatorNotEqualWithInitializer()
		{
			// a = 2
			auto uut = SyntaxFactory::CreateInitializerDeclarator(
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
				SyntaxFactory::CreateValueEqualInitializer(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
					SyntaxFactory::CreateLiteralExpression(
						LiteralType::Integer,
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2"))));

			TestUtils::AreNotEqual(
				SyntaxFactory::CreateInitializerDeclarator(
					SyntaxFactory::CreateIdentifierExpression(
						SyntaxFactory::CreateSimpleIdentifier(
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
					SyntaxFactory::CreateValueEqualInitializer(
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
						SyntaxFactory::CreateLiteralExpression(
							LiteralType::Integer,
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "3")))),
				uut,
				"Verify does not match.");
		}
	};
}
