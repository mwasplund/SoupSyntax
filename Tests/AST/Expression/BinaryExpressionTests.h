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
                SyntaxFactory::CreateToken(SyntaxTokenType::Plus, L"+"),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"1")),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"2")));

            Assert::AreEqual(BinaryOperator::Addition, uut->GetOperator(), L"Verify operator matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateToken(SyntaxTokenType::Plus, L"+"),
                uut->GetOperatorToken(),
                L"Verify operator token matches.");
            Assert::AreEqual<Expression>(
                *SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"1")),
                uut->GetLeftOperand(),
                L"Verify left expression matches.");
            Assert::AreEqual<Expression>(
                *SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"2")),
                uut->GetRightOperand(),
                L"Verify right expression matches.");
        }

        // [[Fact]]
        void OperatorEqual()
        {
            auto uut = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::Addition,
                SyntaxFactory::CreateToken(SyntaxTokenType::Plus, L"+"),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"1")),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"2")));

            Assert::AreEqual(
                SyntaxFactory::CreateBinaryExpression(
                    BinaryOperator::Addition,
                    SyntaxFactory::CreateToken(SyntaxTokenType::Plus, L"+"),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"1")),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"2"))),
                uut,
                L"Verify matches.");
        }

        // [[Fact]]
        void OperatorNotEqualOperatorType()
        {
            auto uut = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::Addition,
                SyntaxFactory::CreateToken(SyntaxTokenType::Plus, L"+"),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"1")),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"2")));

            Assert::AreNotEqual(
                SyntaxFactory::CreateBinaryExpression(
                    BinaryOperator::Subtraction,
                    SyntaxFactory::CreateToken(SyntaxTokenType::Plus, L"+"),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"1")),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"2"))),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualLeft()
        {
            auto uut = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::Addition,
                SyntaxFactory::CreateToken(SyntaxTokenType::Plus, L"+"),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"1")),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"2")));

            Assert::AreNotEqual(
                SyntaxFactory::CreateBinaryExpression(
                    BinaryOperator::Addition,
                    SyntaxFactory::CreateToken(SyntaxTokenType::Plus, L"+"),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"11")),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"2"))),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualOperatorToken()
        {
            auto uut = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::Addition,
                SyntaxFactory::CreateToken(SyntaxTokenType::Minus, L"-"),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"1")),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"2")));

            Assert::AreNotEqual(
                SyntaxFactory::CreateBinaryExpression(
                    BinaryOperator::Addition,
                    SyntaxFactory::CreateToken(SyntaxTokenType::Plus, L"+"),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"1")),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"2"))),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualRight()
        {
            auto uut = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::Addition,
                SyntaxFactory::CreateToken(SyntaxTokenType::Plus, L"+"),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"1")),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"2")));

            Assert::AreNotEqual(
                SyntaxFactory::CreateBinaryExpression(
                    BinaryOperator::Addition,
                    SyntaxFactory::CreateToken(SyntaxTokenType::Plus, L"+"),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"1")),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"22"))),
                uut,
                L"Verify do not match.");
        }
    };
}
