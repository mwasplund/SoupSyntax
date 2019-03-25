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
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"1")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Plus),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"2")));

            Assert::AreEqual(
                SyntaxNodeType::BinaryExpression,
                uut->GetType(),
                L"Verify has correct type.");
            Assert::AreEqual(BinaryOperator::Addition, uut->GetOperator(), L"Verify operator matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Plus),
                uut->GetOperatorToken(),
                L"Verify operator token matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"1")),
                uut->GetLeftOperand(),
                L"Verify left expression matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"2")),
                uut->GetRightOperand(),
                L"Verify right expression matches.");
        }

        // [[Fact]]
        void GetChildren()
        {
            auto uut = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::Addition,
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"1")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Plus),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"2")));

            Assert::AreEqual(
                std::vector<SyntaxNodeChild>({
                    SyntaxNodeChild(
                        SyntaxFactory::CreateLiteralExpression(
                            LiteralType::Integer,
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"1"))),
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Plus)),
                    SyntaxNodeChild(
                        SyntaxFactory::CreateLiteralExpression(
                            LiteralType::Integer,
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"2"))),
                }),
                uut->GetChildren(),
                L"Verify children match.");
        }

        // [[Fact]]
        void OperatorEqual()
        {
            auto uut = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::Addition,
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"1")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Plus),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"2")));

            TestUtils::AreEqual(
                SyntaxFactory::CreateBinaryExpression(
                    BinaryOperator::Addition,
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"1")),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Plus),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"2"))),
                uut,
                L"Verify matches.");
        }

        // [[Fact]]
        void OperatorNotEqualOperatorType()
        {
            auto uut = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::Addition,
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"1")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Plus),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"2")));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateBinaryExpression(
                    BinaryOperator::Subtraction,
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"1")),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Plus),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"2"))),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualLeft()
        {
            auto uut = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::Addition,
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"1")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Plus),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"2")));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateBinaryExpression(
                    BinaryOperator::Addition,
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"11")),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Plus),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"2"))),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualOperatorToken()
        {
            auto uut = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::Addition,
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"1")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Minus),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"2")));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateBinaryExpression(
                    BinaryOperator::Addition,
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"1")),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Plus),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"2"))),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualRight()
        {
            auto uut = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::Addition,
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"1")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Plus),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"2")));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateBinaryExpression(
                    BinaryOperator::Addition,
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"1")),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Plus),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"22"))),
                uut,
                L"Verify do not match.");
        }
    };
}
