#pragma once

namespace Soup::Syntax::InnerTree::UnitTests
{
	class OuterTreeSyntaxNodeChildTests
	{
	public:
		// [[Fact]]
		void TokenInitialize()
		{
			auto uut = OuterTree::SyntaxNodeChild(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Void)->CreateOuter(nullptr));

			Assert::IsFalse(uut.IsNode(), "Verify is not a node.");
			Assert::IsTrue(uut.IsToken(), "Verify is a token.");
			TestUtils::AreEqual(
				*SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Void),
				uut.AsToken(),
				"Verify value matches.");
		}

		// [[Fact]]
		void TokenOperatorEqual()
		{
			auto uut = OuterTree::SyntaxNodeChild(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Void)->CreateOuter(nullptr));

			Assert::AreEqual(
				TestUtils::CreateChild(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Void)),
				uut,
				"Verify matches.");
		}

		// [[Fact]]
		void TokenOperatorNotEqualToken()
		{
			auto uut = OuterTree::SyntaxNodeChild(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Void)->CreateOuter(nullptr));

			Assert::AreNotEqual(
				TestUtils::CreateChild(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
				uut,
				"Verify do not match.");
		}

		// [[Fact]]
		void TokenOperatorNotEqualNode()
		{
			auto uut = OuterTree::SyntaxNodeChild(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Void)->CreateOuter(nullptr));

			Assert::AreNotEqual(
				TestUtils::CreateChild(
					SyntaxFactory::CreateLiteralExpression(
						LiteralType::Integer,
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1"))),
				uut,
				"Verify do not match.");
		}

		// [[Fact]]
		void NodeInitialize()
		{
			auto uut = OuterTree::SyntaxNodeChild(
				SyntaxFactory::CreateLiteralExpression(
					LiteralType::Integer,
					SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1"))->CreateOuter(nullptr));

			Assert::IsTrue(uut.IsNode(), "Verify is a node.");
			Assert::IsFalse(uut.IsToken(), "Verify is not a token.");
			TestUtils::AreEqual(
				*SyntaxFactory::CreateLiteralExpression(
					LiteralType::Integer,
					SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1")),
				uut.AsNode(),
				"Verify value matches.");
		}

		// [[Fact]]
		void NodeOperatorEqual()
		{
			auto uut = OuterTree::SyntaxNodeChild(
				SyntaxFactory::CreateLiteralExpression(
					LiteralType::Integer,
					SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1"))->CreateOuter(nullptr));

			Assert::AreEqual(
				TestUtils::CreateChild(
					SyntaxFactory::CreateLiteralExpression(
						LiteralType::Integer,
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1"))),
				uut,
				"Verify matches.");
		}

		// [[Fact]]
		void NodeOperatorNotEqualToken()
		{
			auto uut = OuterTree::SyntaxNodeChild(
				SyntaxFactory::CreateLiteralExpression(
					LiteralType::Integer,
					SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1"))->CreateOuter(nullptr));

			Assert::AreNotEqual(
				TestUtils::CreateChild(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Void)),
				uut,
				"Verify do not match.");
		}

		// [[Fact]]
		void NodeOperatorNotEqualNode()
		{
			auto uut = OuterTree::SyntaxNodeChild(
				SyntaxFactory::CreateLiteralExpression(
					LiteralType::Integer,
					SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1"))->CreateOuter(nullptr));

			Assert::AreNotEqual(
				TestUtils::CreateChild(
					SyntaxFactory::CreateLiteralExpression(
						LiteralType::Integer,
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2"))),
				uut,
				"Verify do not match.");
		}
	};
}
