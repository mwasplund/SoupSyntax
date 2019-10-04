#pragma once
#include "TestUtils.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
	class ParseLiteralExpressionTests
	{
	public:
		[[Theory]]
		[[InlineData("0")]]
		[[InlineData("1")]]
		void SingleIntegerLiteralType(std::string sourceCode)
		{
			auto expression = ParseLiteralExpression(sourceCode);

			Assert::NotNull(expression, "Verify cast.");
			Assert::AreEqual(LiteralType::Integer, expression->GetLiteralType(), "Verify type matches expected.");
			Assert::AreEqual(
				*SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, sourceCode),
				expression->GetToken(),
				"Verify value matches entire source.");
		}

		[[Theory]]
		[[InlineData("0.0f")]]
		void SingleFloatingLiteralType(std::string sourceCode)
		{
			auto expression = ParseLiteralExpression(sourceCode);

			Assert::NotNull(expression, "Verify cast.");
			Assert::AreEqual(LiteralType::Floating, expression->GetLiteralType(), "Verify type matches expected.");
			Assert::AreEqual(
				*SyntaxFactory::CreateUniqueToken(SyntaxTokenType::FloatingPointLiteral, sourceCode),
				expression->GetToken(),
				"Verify value matches entire source.");
		}

		[[Theory]]
		[[InlineData("'1'")]]
		void SingleCharacterLiteralType(std::string sourceCode)
		{
			auto expression = ParseLiteralExpression(sourceCode);

			Assert::NotNull(expression, "Verify cast.");
			Assert::AreEqual(LiteralType::Character, expression->GetLiteralType(), "Verify type matches expected.");
			Assert::AreEqual(
				*SyntaxFactory::CreateUniqueToken(SyntaxTokenType::CharacterLiteral, sourceCode),
				expression->GetToken(),
				"Verify value matches entire source.");
		}

		[[Theory]]
		[[InlineData("nullptr")]]
		void SinglePointerLiteralType(std::string sourceCode)
		{
			auto expression = ParseLiteralExpression(sourceCode);

			Assert::NotNull(expression, "Verify cast.");
			Assert::AreEqual(LiteralType::Pointer, expression->GetLiteralType(), "Verify type matches expected.");
			Assert::AreEqual(
				*SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Nullptr),
				expression->GetToken(),
				"Verify value matches entire source.");
		}

		[[Theory]]
		[[InlineData("\" \"")]]
		void SingleStringLiteralType(std::string sourceCode)
		{
			auto expression = ParseLiteralExpression(sourceCode);

			Assert::NotNull(expression, "Verify cast.");
			Assert::AreEqual(LiteralType::String, expression->GetLiteralType(), "Verify type matches expected.");
			Assert::AreEqual(
				*SyntaxFactory::CreateUniqueToken(SyntaxTokenType::StringLiteral, sourceCode),
				expression->GetToken(),
				"Verify value matches entire source.");
		}

		// TODO: Remove namespaces when inline data theories have correct scope
		[[Theory]]
		[[InlineData("true", Soup::Syntax::SyntaxTokenType::True)]]
		[[InlineData("false", Soup::Syntax::SyntaxTokenType::False)]]
		void SingleBooleanLiteralType(std::string sourceCode, SyntaxTokenType type)
		{
			auto expression = ParseLiteralExpression(sourceCode);

			Assert::NotNull(expression, "Verify cast.");
			Assert::AreEqual(LiteralType::Boolean, expression->GetLiteralType(), "Verify type matches expected.");
			Assert::AreEqual(
				*SyntaxFactory::CreateKeywordToken(type),
				expression->GetToken(),
				"Verify value matches entire source.");
		}

		[[Theory]]
		[[InlineData("2h")]]
		void SingleUserDefinedLiteralType(std::string sourceCode)
		{
			auto expression = ParseLiteralExpression(sourceCode);

			Assert::NotNull(expression, "Verify cast.");
			Assert::AreEqual(LiteralType::UserDefined, expression->GetLiteralType(), "Verify type matches expected.");
			Assert::AreEqual(
				*SyntaxFactory::CreateUniqueToken(SyntaxTokenType::UserDefinedLiteral, sourceCode),
				expression->GetToken(),
				"Verify value matches entire source.");
		}

	private:
		std::shared_ptr<const LiteralExpression> ParseLiteralExpression(const std::string& sourceCode)
		{
			auto uut = TestUtils::BuildParser(sourceCode);
			auto context = uut.Parser->primaryExpression();

			// Convert the the abstract syntax tree
			auto node = uut.Visitor->visit(context)
				.as<std::shared_ptr<const SyntaxNode>>();

			return std::dynamic_pointer_cast<const LiteralExpression>(node);
		}
	};
}
