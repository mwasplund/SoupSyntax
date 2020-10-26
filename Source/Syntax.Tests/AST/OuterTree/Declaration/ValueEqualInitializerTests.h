#pragma once
#include "TestUtils.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
	class OuterTreeValueEqualInitializerTests
	{
	public:
		// [[Fact]]
		void InitializeSimple()
		{
			// = 1
			auto uut = SyntaxFactory::CreateValueEqualInitializer(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
				SyntaxFactory::CreateLiteralExpression(
					LiteralType::Integer,
					SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1")))->CreateOuter(nullptr);

			Assert::AreEqual(
				SyntaxNodeType::ValueEqualInitializer,
				uut->GetType(),
				"Verify has correct type.");
			TestUtils::AreEqual(
				*SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
				uut->GetEqualToken(),
				"Verify equal token matches.");
			TestUtils::AreEqual(
				*SyntaxFactory::CreateLiteralExpression(
					LiteralType::Integer,
					SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1")),
				uut->GetExpression(),
				"Verify expression matches.");
		}

		// [[Fact]]
		void GetChildren()
		{
			// = 1
			auto uut = SyntaxFactory::CreateValueEqualInitializer(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
				SyntaxFactory::CreateLiteralExpression(
					LiteralType::Integer,
					SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1")))->CreateOuter(nullptr);

			Assert::AreEqual(
				std::vector<OuterTree::SyntaxNodeChild>({
					TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal)),
					TestUtils::CreateChild(
						SyntaxFactory::CreateLiteralExpression(
							LiteralType::Integer,
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1"))),
				}),
				uut->GetChildren(),
				"Verify children match.");
		}

		// [[Fact]]
		void OperatorEqual()
		{
			// = 1
			auto uut = SyntaxFactory::CreateValueEqualInitializer(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
				SyntaxFactory::CreateLiteralExpression(
					LiteralType::Integer,
					SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1")))->CreateOuter(nullptr);

			TestUtils::AreEqual(
				SyntaxFactory::CreateValueEqualInitializer(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
					SyntaxFactory::CreateLiteralExpression(
						LiteralType::Integer,
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1"))),
				uut,
				"Verify matches.");
		}

		// [[Fact]]
		void OperatorNotEqualEqualToken()
		{
			// = 1
			auto uut = SyntaxFactory::CreateValueEqualInitializer(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
				SyntaxFactory::CreateLiteralExpression(
					LiteralType::Integer,
					SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1")))->CreateOuter(nullptr);

			TestUtils::AreNotEqual(
				SyntaxFactory::CreateValueEqualInitializer(
					SyntaxFactory::CreateKeywordToken(
						SyntaxTokenType::Equal,
						{
							SyntaxFactory::CreateTrivia(" "),
						},
						{}),
					SyntaxFactory::CreateLiteralExpression(
						LiteralType::Integer,
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1"))),
				uut,
				"Verify does not match.");
		}

		// [[Fact]]
		void OperatorNotEqualExpression()
		{
			// = 1
			auto uut = SyntaxFactory::CreateValueEqualInitializer(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
				SyntaxFactory::CreateLiteralExpression(
					LiteralType::Integer,
					SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1")))->CreateOuter(nullptr);

			TestUtils::AreNotEqual(
				SyntaxFactory::CreateValueEqualInitializer(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
					SyntaxFactory::CreateLiteralExpression(
						LiteralType::Integer,
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2"))),
				uut,
				"Verify does not match.");
		}
	};
}
