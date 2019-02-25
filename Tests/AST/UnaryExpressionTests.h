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
                SyntaxFactory::CreateToken(SyntaxTokenType::DoublePlus, L"++"),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"1")));

            Assert::AreEqual(UnaryOperator::PostIncrement, uut->GetOperator(), L"Verify operator matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateToken(SyntaxTokenType::DoublePlus, L"++"),
                uut->GetOperatorToken(),
                L"Verify operator token matches.");
            Assert::AreEqual<Expression>(
                *SyntaxFactory::CreateLiteralExpression(LiteralType::Integer, SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"1")),
                uut->GetOperand(),
                L"Verify left expression matches.");
        }

        // [[Fact]]
        void OperatorEqual()
        {
            auto uut = SyntaxFactory::CreateUnaryExpression(
                UnaryOperator::PostIncrement,
                SyntaxFactory::CreateToken(SyntaxTokenType::DoublePlus, L"++"),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"1")));

            Assert::AreEqual(
                SyntaxFactory::CreateUnaryExpression(
                    UnaryOperator::PostIncrement,
                    SyntaxFactory::CreateToken(SyntaxTokenType::DoublePlus, L"++"),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"1"))),
                uut,
                L"Verify matches.");
        }

        // [[Fact]]
        void OperatorNotEqualOperator()
        {
            auto uut = SyntaxFactory::CreateUnaryExpression(
                UnaryOperator::PostIncrement,
                SyntaxFactory::CreateToken(SyntaxTokenType::DoublePlus, L"++"),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"1")));

            Assert::AreNotEqual(
                SyntaxFactory::CreateUnaryExpression(
                    UnaryOperator::PreIncrement,
                    SyntaxFactory::CreateToken(SyntaxTokenType::DoublePlus, L"++"),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"1"))),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualOperand()
        {
            auto uut = SyntaxFactory::CreateUnaryExpression(
                UnaryOperator::PostIncrement,
                SyntaxFactory::CreateToken(SyntaxTokenType::DoublePlus, L"++"),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"1")));

            Assert::AreNotEqual(
                SyntaxFactory::CreateUnaryExpression(
                    UnaryOperator::PostIncrement,
                    SyntaxFactory::CreateToken(SyntaxTokenType::DoublePlus, L"++"),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"2"))),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualOperatorToken()
        {
            auto uut = SyntaxFactory::CreateUnaryExpression(
                UnaryOperator::PostIncrement,
                SyntaxFactory::CreateToken(SyntaxTokenType::DoublePlus, L"++"),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"1")));

            Assert::AreNotEqual(
                SyntaxFactory::CreateUnaryExpression(
                    UnaryOperator::PostIncrement,
                    SyntaxFactory::CreateToken(SyntaxTokenType::DoublePlus, L"--"),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"1"))),
                uut,
                L"Verify do not match.");
        }
    };
}
