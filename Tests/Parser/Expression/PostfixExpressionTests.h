#pragma once
#include "../../TestUtils.h"
#include "../../SoupAssert.h"

namespace Soup::Syntax::UnitTests
{
    class PostfixExpressionTests
    {
    public:
        // [Fact]
        void SingleSubscriptExpression()
        {
            auto sourceCode = std::string("a[1]");

            auto actual = std::dynamic_pointer_cast<const SubscriptExpression>(
                ParsePostfixExpression(sourceCode));

            auto expected = SyntaxFactory::CreateSubscriptExpression(
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateToken(SyntaxTokenType::LeftBracket, L"["),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"1")),
                SyntaxFactory::CreateToken(SyntaxTokenType::RightBracket, L"]"));

            Assert::AreEqual(expected, actual, L"Verify matches expected.");
        }

        // [Theory]
        void SingleLiteralPostIncrement()
        {
            auto sourceCode = std::string("1++");

            auto actual = std::dynamic_pointer_cast<const UnaryExpression>(
                ParsePostfixExpression(sourceCode));

            auto expected = SyntaxFactory::CreateUnaryExpression(
                UnaryOperator::PostIncrement,
                SyntaxFactory::CreateToken(SyntaxTokenType::DoublePlus, L"++"),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"1")));

            Assert::AreEqual(expected, actual, L"Verify matches expected.");
        }

        // [Theory]
        void SingleLiteralPostDecrement()
        {
            auto sourceCode = std::string("1--");

            auto actual = std::dynamic_pointer_cast<const UnaryExpression>(
                ParsePostfixExpression(sourceCode));

            auto expected = SyntaxFactory::CreateUnaryExpression(
                UnaryOperator::PostDecrement,
                SyntaxFactory::CreateToken(SyntaxTokenType::DoubleMinus, L"--"),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"1")));

            Assert::AreEqual(expected, actual, L"Verify matches expected.");
        }

    private:
        std::shared_ptr<const SyntaxNode> ParsePostfixExpression(std::string& sourceCode)
        {
            auto uut = TestUtils::BuildParser(sourceCode);
            auto context = uut.Parser->postfixExpression();

            // Convert the the abstract syntax tree
            auto node = uut.Visitor->visit(context)
                .as<std::shared_ptr<const SyntaxNode>>();

            return node;
        }
    };
}
