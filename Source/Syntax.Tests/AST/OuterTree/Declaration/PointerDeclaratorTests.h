#pragma once

namespace Soup::Syntax::InnerTree::UnitTests
{
	class OuterTreePointerDeclaratorTests
	{
	public:
		// [[Fact]]
		void Initialize()
		{
			auto uut = SyntaxFactory::CreatePointerDeclarator(
				SyntaxFactory::CreatePointerOperator(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Ampersand)),
				SyntaxFactory::CreateSimpleIdentifier(
					SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value")))->CreateOuter(nullptr);

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

		// [[Fact]]
		void GetChildren()
		{
			auto uut = SyntaxFactory::CreatePointerDeclarator(
				SyntaxFactory::CreatePointerOperator(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Ampersand)),
				SyntaxFactory::CreateSimpleIdentifier(
					SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value")))->CreateOuter(nullptr);

			Assert::AreEqual(
				std::vector<OuterTree::SyntaxNodeChild>({
					TestUtils::CreateChild(
						SyntaxFactory::CreatePointerOperator(
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Ampersand))),
					TestUtils::CreateChild(
						SyntaxFactory::CreateSimpleIdentifier(
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))),
				}),
				uut->GetChildren(),
				"Verify children match.");
		}

		// [[Fact]]
		void OperatorEqual()
		{
			auto uut = SyntaxFactory::CreatePointerDeclarator(
				SyntaxFactory::CreatePointerOperator(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Ampersand)),
				SyntaxFactory::CreateSimpleIdentifier(
					SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value")))->CreateOuter(nullptr);

			TestUtils::AreEqual(
				SyntaxFactory::CreatePointerDeclarator(
					SyntaxFactory::CreatePointerOperator(
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Ampersand)),
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))),
				uut,
				"Verify matches.");
		}

		// [[Fact]]
		void OperatorNotEqualPointerOperator()
		{
			auto uut = SyntaxFactory::CreatePointerDeclarator(
				SyntaxFactory::CreatePointerOperator(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Ampersand)),
				SyntaxFactory::CreateSimpleIdentifier(
					SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value")))->CreateOuter(nullptr);

			TestUtils::AreNotEqual(
				SyntaxFactory::CreatePointerDeclarator(
					SyntaxFactory::CreatePointerOperator(
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Asterisk)),
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))),
				uut,
				"Verify do not match.");
		}

		// [[Fact]]
		void OperatorNotEqualDeclarator()
		{
			auto uut = SyntaxFactory::CreatePointerDeclarator(
				SyntaxFactory::CreatePointerOperator(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Ampersand)),
				SyntaxFactory::CreateSimpleIdentifier(
					SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value")))->CreateOuter(nullptr);

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
