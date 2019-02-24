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
                    std::make_shared<SyntaxToken>(SyntaxTokenType::Identifier, "a")),
                std::make_shared<SyntaxToken>(SyntaxTokenType::LeftBracket, "["),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "1")),
                std::make_shared<SyntaxToken>(SyntaxTokenType::RightBracket, "]"));

            Assert::AreEqual(expected, actual, "Verify matches expected.");
        }

        // [Theory]
        void SingleLiteralPostIncrement()
        {
            auto sourceCode = std::string("1++");

            auto actual = std::dynamic_pointer_cast<const UnaryExpression>(
                ParsePostfixExpression(sourceCode));

            auto expected = SyntaxFactory::CreateUnaryExpression(
                UnaryOperator::PostIncrement,
                std::make_shared<SyntaxToken>(SyntaxTokenType::DoublePlus, "++"),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "1")));

            Assert::AreEqual(expected, actual, "Verify matches expected.");
        }

        // [Theory]
        void SingleLiteralPostDecrement()
        {
            auto sourceCode = std::string("1--");

            auto actual = std::dynamic_pointer_cast<const UnaryExpression>(
                ParsePostfixExpression(sourceCode));

            auto expected = SyntaxFactory::CreateUnaryExpression(
                UnaryOperator::PostDecrement,
                std::make_shared<SyntaxToken>(SyntaxTokenType::DoubleMinus, "--"),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "1")));

            Assert::AreEqual(expected, actual, "Verify matches expected.");
        }

    private:
        std::shared_ptr<const SyntaxNode> ParsePostfixExpression(std::string& sourceCode)
        {
            auto uut = TestUtils::BuildParser(sourceCode);
            auto context = uut.Parser->postfixExpression();

            // Convert the the abstract syntax tree
            auto visitor = ASTVisitor();
            auto node = visitor.visit(context)
                .as<std::shared_ptr<const SyntaxNode>>();

            return node;
        }
    };
}
