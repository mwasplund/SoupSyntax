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
            auto uut = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::Addition,
                std::make_shared<SyntaxToken>(SyntaxTokenType::Plus, "+"),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "1")),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "2")));

            Assert::AreEqual(BinaryOperator::Addition, uut->GetOperator(), "Verify operator matches.");
            Assert::AreEqual(SyntaxToken(SyntaxTokenType::Plus, "+"), uut->GetOperatorToken(), "Verify operator token matches.");
            Assert::AreEqual<Expression>(
                *SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "1")),
                uut->GetLeftOperand(),
                "Verify left expression matches.");
            Assert::AreEqual<Expression>(
                *SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "2")),
                uut->GetRightOperand(),
                "Verify right expression matches.");
        }

        // [[Fact]]
        void OperatorEqual()
        {
            auto uut = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::Addition,
                std::make_shared<SyntaxToken>(SyntaxTokenType::Plus, "+"),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "1")),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "2")));

            Assert::AreEqual(
                SyntaxFactory::CreateBinaryExpression(
                    BinaryOperator::Addition,
                    std::make_shared<SyntaxToken>(SyntaxTokenType::Plus, "+"),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "1")),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "2"))),
                uut,
                "Verify matches.");
        }

        // [[Fact]]
        void OperatorNotEqualOperatorType()
        {
            auto uut = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::Addition,
                std::make_shared<SyntaxToken>(SyntaxTokenType::Plus, "+"),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "1")),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "2")));

            Assert::AreNotEqual(
                SyntaxFactory::CreateBinaryExpression(
                    BinaryOperator::Subtraction,
                    std::make_shared<SyntaxToken>(SyntaxTokenType::Plus, "+"),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "1")),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "2"))),
                uut,
                "Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualLeft()
        {
            auto uut = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::Addition,
                std::make_shared<SyntaxToken>(SyntaxTokenType::Plus, "+"),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "1")),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "2")));

            Assert::AreNotEqual(
                SyntaxFactory::CreateBinaryExpression(
                    BinaryOperator::Addition,
                    std::make_shared<SyntaxToken>(SyntaxTokenType::Plus, "+"),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "11")),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "2"))),
                uut,
                "Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualOperatorToken()
        {
            auto uut = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::Addition,
                std::make_shared<SyntaxToken>(SyntaxTokenType::Minus, "-"),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "1")),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "2")));

            Assert::AreNotEqual(
                SyntaxFactory::CreateBinaryExpression(
                    BinaryOperator::Addition,
                    std::make_shared<SyntaxToken>(SyntaxTokenType::Plus, "+"),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "1")),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "2"))),
                uut,
                "Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualRight()
        {
            auto uut = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::Addition,
                std::make_shared<SyntaxToken>(SyntaxTokenType::Plus, "+"),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "1")),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "2")));

            Assert::AreNotEqual(
                SyntaxFactory::CreateBinaryExpression(
                    BinaryOperator::Addition,
                    std::make_shared<SyntaxToken>(SyntaxTokenType::Plus, "+"),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "1")),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "22"))),
                uut,
                "Verify do not match.");
        }
    };
}
