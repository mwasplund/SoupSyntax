#pragma once

namespace Soup::Syntax::InnerTree::UnitTests
{
	class InnerTreeSubscriptExpressionTests
	{
	public:
		[[Fact]]
		void InitializeSimple()
		{
			// a[2]
			auto uut = SyntaxFactory::CreateSubscriptExpression(
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
				SyntaxFactory::CreateLiteralExpression(
					LiteralType::Integer,
					SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2")),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket));

			Assert::AreEqual(
				SyntaxNodeType::SubscriptExpression,
				uut->GetType(),
				"Verify has correct type.");
			TestUtils::AreEqual(
				*SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
				uut->GetLeftExpression(),
				"Verify left expression matches.");
			Assert::AreEqual(
				*SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
				uut->GetOpenBracket(),
				"Verify left bracket token matches.");
			TestUtils::AreEqual(
				*SyntaxFactory::CreateLiteralExpression(
					LiteralType::Integer, 
					SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2")),
				uut->GetRightExpression(),
				"Verify right expression matches.");
			Assert::AreEqual(
				*SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket),
				uut->GetCloseBracket(),
				"Verify right bracket token matches.");
		}

		[[Fact]]
		void OperatorEqual()
		{
			// a[2]
			auto uut = SyntaxFactory::CreateSubscriptExpression(
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
				SyntaxFactory::CreateLiteralExpression(
					LiteralType::Integer,
					SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2")),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket));

			Assert::AreEqual(
				SyntaxFactory::CreateSubscriptExpression(
					SyntaxFactory::CreateIdentifierExpression(
						SyntaxFactory::CreateSimpleIdentifier(
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
					SyntaxFactory::CreateLiteralExpression(
						LiteralType::Integer,
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2")),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket)),
				uut,
				"Verify matches.");
		}

		[[Fact]]
		void OperatorNotEqualLeft()
		{
			// a[2]
			auto uut = SyntaxFactory::CreateSubscriptExpression(
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
				SyntaxFactory::CreateLiteralExpression(
					LiteralType::Integer,
					SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2")),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket));

			TestUtils::AreNotEqual(
				SyntaxFactory::CreateSubscriptExpression(
					SyntaxFactory::CreateIdentifierExpression(
						SyntaxFactory::CreateSimpleIdentifier(
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"))),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
					SyntaxFactory::CreateLiteralExpression(
						LiteralType::Integer,
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2")),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket)),
				uut,
				"Verify do not match.");
		}

		[[Fact]]
		void OperatorNotEqualOpenBracket()
		{
			// a[2]
			auto uut = SyntaxFactory::CreateSubscriptExpression(
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
				SyntaxFactory::CreateLiteralExpression(
					LiteralType::Integer,
					SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2")),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket));

			TestUtils::AreNotEqual(
				SyntaxFactory::CreateSubscriptExpression(
					SyntaxFactory::CreateIdentifierExpression(
						SyntaxFactory::CreateSimpleIdentifier(
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
					SyntaxFactory::CreateKeywordToken(
						SyntaxTokenType::OpenBracket,
						{
							SyntaxFactory::CreateTrivia(" "),
						},
						{}),
					SyntaxFactory::CreateLiteralExpression(
						LiteralType::Integer,
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2")),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket)),
				uut,
				"Verify do not match.");
		}

		[[Fact]]
		void OperatorNotEqualRight()
		{
			// a[2]
			auto uut = SyntaxFactory::CreateSubscriptExpression(
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
				SyntaxFactory::CreateLiteralExpression(
					LiteralType::Integer,
					SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2")),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket));

			TestUtils::AreNotEqual(
				SyntaxFactory::CreateSubscriptExpression(
					SyntaxFactory::CreateIdentifierExpression(
						SyntaxFactory::CreateSimpleIdentifier(
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
					SyntaxFactory::CreateLiteralExpression(
						LiteralType::Integer,
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "3")),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket)),
				uut,
				"Verify do not match.");
		}

		[[Fact]]
		void OperatorNotEqualCloseBracket()
		{
			// a[2]
			auto uut = SyntaxFactory::CreateSubscriptExpression(
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
				SyntaxFactory::CreateLiteralExpression(
					LiteralType::Integer,
					SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2")),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket));

			TestUtils::AreNotEqual(
				SyntaxFactory::CreateSubscriptExpression(
					SyntaxFactory::CreateIdentifierExpression(
						SyntaxFactory::CreateSimpleIdentifier(
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
					SyntaxFactory::CreateLiteralExpression(
						LiteralType::Integer,
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2")),
					SyntaxFactory::CreateKeywordToken(
						SyntaxTokenType::CloseBracket,
						{
							SyntaxFactory::CreateTrivia(" "),
						},
						{})),
				uut,
				"Verify do not match.");
		}
	};
}
