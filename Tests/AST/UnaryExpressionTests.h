#pragma once
#include "../SoupAssert.h"

namespace Soup::Syntax::UnitTests
{
    class UnaryExpressionTests
    {
    public:
        // [[Fact]]
        void InitializeSimple()
        {
            auto uut = SyntaxFactory::CreateUnaryExpression(
                UnaryOperator::PostIncrement,
                std::make_shared<SyntaxToken>(SyntaxTokenType::DoublePlus, "++"),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "1")));

            Assert::AreEqual(UnaryOperator::PostIncrement, uut->GetOperator(), "Verify operator matches.");
            Assert::AreEqual(SyntaxToken(SyntaxTokenType::DoublePlus, "++"), uut->GetOperatorToken(), "Verify operator token matches.");
            Assert::AreEqual<Expression>(
                *SyntaxFactory::CreateLiteralExpression(LiteralType::Integer, std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "1")),
                uut->GetOperand(),
                "Verify left expression matches.");
        }

        // [[Fact]]
        void OperatorEqual()
        {
            auto uut = SyntaxFactory::CreateUnaryExpression(
                UnaryOperator::PostIncrement,
                std::make_shared<SyntaxToken>(SyntaxTokenType::DoublePlus, "++"),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "1")));

            Assert::AreEqual(
                SyntaxFactory::CreateUnaryExpression(
                    UnaryOperator::PostIncrement,
                    std::make_shared<SyntaxToken>(SyntaxTokenType::DoublePlus, "++"),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "1"))),
                uut,
                "Verify matches.");
        }

        // [[Fact]]
        void OperatorNotEqualOperator()
        {
            auto uut = SyntaxFactory::CreateUnaryExpression(
                UnaryOperator::PostIncrement,
                std::make_shared<SyntaxToken>(SyntaxTokenType::DoublePlus, "++"),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "1")));

            Assert::AreNotEqual(
                SyntaxFactory::CreateUnaryExpression(
                    UnaryOperator::PreIncrement,
                    std::make_shared<SyntaxToken>(SyntaxTokenType::DoublePlus, "++"),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "1"))),
                uut,
                "Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualOperand()
        {
            auto uut = SyntaxFactory::CreateUnaryExpression(
                UnaryOperator::PostIncrement,
                std::make_shared<SyntaxToken>(SyntaxTokenType::DoublePlus, "++"),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "1")));

            Assert::AreNotEqual(
                SyntaxFactory::CreateUnaryExpression(
                    UnaryOperator::PostIncrement,
                    std::make_shared<SyntaxToken>(SyntaxTokenType::DoublePlus, "++"),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "2"))),
                uut,
                "Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualOperatorToken()
        {
            auto uut = SyntaxFactory::CreateUnaryExpression(
                UnaryOperator::PostIncrement,
                std::make_shared<SyntaxToken>(SyntaxTokenType::DoublePlus, "++"),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "1")));

            Assert::AreNotEqual(
                SyntaxFactory::CreateUnaryExpression(
                    UnaryOperator::PostIncrement,
                    std::make_shared<SyntaxToken>(SyntaxTokenType::DoublePlus, "--"),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "1"))),
                uut,
                "Verify do not match.");
        }
    };
}
