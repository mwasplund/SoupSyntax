#pragma once

namespace Soup::Syntax::InnerTree::UnitTests
{
	class InnerTreePointerDeclaratorTests
	{
	public:
		[[Fact]]
		void Initialize()
		{
			auto uut = SyntaxFactory::CreatePointerDeclarator(
				SyntaxFactory::CreatePointerOperator(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Ampersand)),
				SyntaxFactory::CreateSimpleIdentifier(
					SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value")));

			Assert::AreEqual(
				SyntaxNodeType::PointerDeclarator,
				uut->GetType(),
				"Verify has correct type.");
			TestUtils::AreEqual(
				*SyntaxFactory::CreatePointerOperator(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Ampersand)),
				uut->GetPointerOperator(),
				"Verify pointer operator matches.");
			TestUtils::AreEqual(
				*SyntaxFactory::CreateSimpleIdentifier(
					SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value")),
				uut->GetDeclarator(),
				"Verify declarator matches.");
		}

		[[Fact]]
		void OperatorEqual()
		{
			auto uut = SyntaxFactory::CreatePointerDeclarator(
				SyntaxFactory::CreatePointerOperator(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Ampersand)),
				SyntaxFactory::CreateSimpleIdentifier(
					SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value")));

			TestUtils::AreEqual(
				SyntaxFactory::CreatePointerDeclarator(
					SyntaxFactory::CreatePointerOperator(
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Ampersand)),
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))),
				uut,
				"Verify matches.");
		}

		[[Fact]]
		void OperatorNotEqualPointerOperator()
		{
			auto uut = SyntaxFactory::CreatePointerDeclarator(
				SyntaxFactory::CreatePointerOperator(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Ampersand)),
				SyntaxFactory::CreateSimpleIdentifier(
					SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value")));

			TestUtils::AreNotEqual(
				SyntaxFactory::CreatePointerDeclarator(
					SyntaxFactory::CreatePointerOperator(
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Asterisk)),
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))),
				uut,
				"Verify do not match.");
		}

		[[Fact]]
		void OperatorNotEqualDeclarator()
		{
			auto uut = SyntaxFactory::CreatePointerDeclarator(
				SyntaxFactory::CreatePointerOperator(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Ampersand)),
				SyntaxFactory::CreateSimpleIdentifier(
					SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value")));

			TestUtils::AreNotEqual(
				SyntaxFactory::CreatePointerDeclarator(
					SyntaxFactory::CreatePointerOperator(
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Ampersand)),
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value2"))),
				uut,
				"Verify do not match.");
		}
	};
}
