#pragma once
#include "../SoupAssert.h"

namespace Soup::Syntax::UnitTests
{
    class BinaryExpressionTests
    {
    public:
        // [[Fact]]
        void InitializeSimple()
        {
            auto uut = std::make_shared<BinaryExpression>(
                BinaryOperator::Addition,
                std::make_shared<SyntaxToken>(SyntaxTokenType::Plus, "+"),
                std::make_shared<LiteralExpression>(
                    LiteralType::Integer,
                    std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "1")),
                std::make_shared<LiteralExpression>(
                    LiteralType::Integer,
                    std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "2")));

            Assert::AreEqual(BinaryOperator::Addition, uut->GetOperator(), "Verify operator matches.");
            Assert::AreEqual(SyntaxToken(SyntaxTokenType::Plus, "+"), uut->GetOperatorToken(), "Verify operator token matches.");
            Assert::AreEqual<Expression>(
                LiteralExpression(
                    LiteralType::Integer,
                    std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "1")),
                uut->GetLeftOperand(),
                "Verify left expression matches.");
            Assert::AreEqual<Expression>(
                LiteralExpression(
                    LiteralType::Integer,
                    std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "2")),
                uut->GetRightOperand(),
                "Verify right expression matches.");
        }

        // [[Fact]]
        void OperatorEqual()
        {
            auto uut = std::make_shared<BinaryExpression>(
                BinaryOperator::Addition,
                std::make_shared<SyntaxToken>(SyntaxTokenType::Plus, "+"),
                std::make_shared<LiteralExpression>(
                    LiteralType::Integer,
                    std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "1")),
                std::make_shared<LiteralExpression>(
                    LiteralType::Integer,
                    std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "2")));

            Assert::AreEqual(
                BinaryExpression(
                    BinaryOperator::Addition,
                    std::make_shared<SyntaxToken>(SyntaxTokenType::Plus, "+"),
                    std::make_shared<LiteralExpression>(
                        LiteralType::Integer,
                        std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "1")),
                    std::make_shared<LiteralExpression>(
                        LiteralType::Integer,
                        std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "2"))),
                *uut,
                "Verify matches.");
        }

        // [[Fact]]
        void OperatorNotEqualOperatorType()
        {
            auto uut = std::make_shared<BinaryExpression>(
                BinaryOperator::Addition,
                std::make_shared<SyntaxToken>(SyntaxTokenType::Plus, "+"),
                std::make_shared<LiteralExpression>(
                    LiteralType::Integer,
                    std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "1")),
                std::make_shared<LiteralExpression>(
                    LiteralType::Integer,
                    std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "2")));

            Assert::AreNotEqual(
                BinaryExpression(
                    BinaryOperator::Subtraction,
                    std::make_shared<SyntaxToken>(SyntaxTokenType::Plus, "+"),
                    std::make_shared<LiteralExpression>(
                        LiteralType::Integer,
                        std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "1")),
                    std::make_shared<LiteralExpression>(
                        LiteralType::Integer,
                        std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "2"))),
                *uut,
                "Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualLeft()
        {
            auto uut = std::make_shared<BinaryExpression>(
                BinaryOperator::Addition,
                std::make_shared<SyntaxToken>(SyntaxTokenType::Plus, "+"),
                std::make_shared<LiteralExpression>(
                    LiteralType::Integer,
                    std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "1")),
                std::make_shared<LiteralExpression>(
                    LiteralType::Integer,
                    std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "2")));

            Assert::AreNotEqual(
                BinaryExpression(
                    BinaryOperator::Addition,
                    std::make_shared<SyntaxToken>(SyntaxTokenType::Plus, "+"),
                    std::make_shared<LiteralExpression>(
                        LiteralType::Integer,
                        std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "11")),
                    std::make_shared<LiteralExpression>(
                        LiteralType::Integer,
                        std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "2"))),
                *uut,
                "Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualOperatorToken()
        {
            auto uut = std::make_shared<BinaryExpression>(
                BinaryOperator::Addition,
                std::make_shared<SyntaxToken>(SyntaxTokenType::Minus, "-"),
                std::make_shared<LiteralExpression>(
                    LiteralType::Integer,
                    std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "1")),
                std::make_shared<LiteralExpression>(
                    LiteralType::Integer,
                    std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "2")));

            Assert::AreNotEqual(
                BinaryExpression(
                    BinaryOperator::Addition,
                    std::make_shared<SyntaxToken>(SyntaxTokenType::Plus, "+"),
                    std::make_shared<LiteralExpression>(
                        LiteralType::Integer,
                        std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "1")),
                    std::make_shared<LiteralExpression>(
                        LiteralType::Integer,
                        std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "2"))),
                *uut,
                "Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualRight()
        {
            auto uut = std::make_shared<BinaryExpression>(
                BinaryOperator::Addition,
                std::make_shared<SyntaxToken>(SyntaxTokenType::Plus, "+"),
                std::make_shared<LiteralExpression>(
                    LiteralType::Integer,
                    std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "1")),
                std::make_shared<LiteralExpression>(
                    LiteralType::Integer,
                    std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "2")));

            Assert::AreNotEqual(
                BinaryExpression(
                    BinaryOperator::Addition,
                    std::make_shared<SyntaxToken>(SyntaxTokenType::Plus, "+"),
                    std::make_shared<LiteralExpression>(
                        LiteralType::Integer,
                        std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "1")),
                    std::make_shared<LiteralExpression>(
                        LiteralType::Integer,
                        std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "22"))),
                *uut,
                "Verify do not match.");
        }
    };
}
