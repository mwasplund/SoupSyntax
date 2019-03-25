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
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoublePlus),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"1")));

            Assert::AreEqual(
                SyntaxNodeType::UnaryExpression,
                uut->GetType(),
                L"Verify has correct type.");
            Assert::AreEqual(UnaryOperator::PostIncrement, uut->GetOperator(), L"Verify operator matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoublePlus),
                uut->GetOperatorToken(),
                L"Verify operator token matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateLiteralExpression(LiteralType::Integer, SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"1")),
                uut->GetOperand(),
                L"Verify left expression matches.");
        }

        // [[Fact]]
        void PostfixOperatorGetChildren()
        {
            auto uut = SyntaxFactory::CreateUnaryExpression(
                UnaryOperator::PostIncrement,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoublePlus),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"1")));

            Assert::AreEqual(
                std::vector<SyntaxNodeChild>({
                    SyntaxNodeChild(
                        SyntaxFactory::CreateLiteralExpression(
                            LiteralType::Integer,
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"1"))),
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoublePlus)),
                }),
                uut->GetChildren(),
                L"Verify children match.");
        }

        // [[Fact]]
        void PrefixOperatorGetChildren()
        {
            auto uut = SyntaxFactory::CreateUnaryExpression(
                UnaryOperator::PreIncrement,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoublePlus),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"1")));

            Assert::AreEqual(
                std::vector<SyntaxNodeChild>({
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoublePlus)),
                    SyntaxNodeChild(
                        SyntaxFactory::CreateLiteralExpression(
                            LiteralType::Integer,
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"1"))),
                }),
                uut->GetChildren(),
                L"Verify children match.");
        }

        // [[Fact]]
        void OperatorEqual()
        {
            auto uut = SyntaxFactory::CreateUnaryExpression(
                UnaryOperator::PostIncrement,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoublePlus),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"1")));

            TestUtils::AreEqual(
                SyntaxFactory::CreateUnaryExpression(
                    UnaryOperator::PostIncrement,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoublePlus),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"1"))),
                uut,
                L"Verify matches.");
        }

        // [[Fact]]
        void OperatorNotEqualOperator()
        {
            auto uut = SyntaxFactory::CreateUnaryExpression(
                UnaryOperator::PostIncrement,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoublePlus),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"1")));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateUnaryExpression(
                    UnaryOperator::PreIncrement,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoublePlus),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"1"))),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualOperand()
        {
            auto uut = SyntaxFactory::CreateUnaryExpression(
                UnaryOperator::PostIncrement,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoublePlus),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"1")));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateUnaryExpression(
                    UnaryOperator::PostIncrement,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoublePlus),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"2"))),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualOperatorToken()
        {
            auto uut = SyntaxFactory::CreateUnaryExpression(
                UnaryOperator::PostIncrement,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoublePlus),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"1")));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateUnaryExpression(
                    UnaryOperator::PostIncrement,
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::DoublePlus,
                        {
                            SyntaxFactory::CreateTrivia(L" ", TextSpan()),
                        },
                        {}),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"1"))),
                uut,
                L"Verify do not match.");
        }
    };
}
