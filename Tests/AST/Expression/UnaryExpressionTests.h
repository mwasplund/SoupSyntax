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
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1")));

            Assert::AreEqual(
                SyntaxNodeType::UnaryExpression,
                uut->GetType(),
                "Verify has correct type.");
            Assert::AreEqual(UnaryOperator::PostIncrement, uut->GetOperator(), "Verify operator matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoublePlus),
                uut->GetOperatorToken(),
                "Verify operator token matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateLiteralExpression(LiteralType::Integer, SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1")),
                uut->GetOperand(),
                "Verify left expression matches.");
        }

        // [[Fact]]
        void PostfixOperatorGetChildren()
        {
            auto uut = SyntaxFactory::CreateUnaryExpression(
                UnaryOperator::PostIncrement,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoublePlus),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1")));

            Assert::AreEqual(
                std::vector<SyntaxNodeChild>({
                    SyntaxNodeChild(
                        SyntaxFactory::CreateLiteralExpression(
                            LiteralType::Integer,
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1"))),
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoublePlus)),
                }),
                uut->GetChildren(),
                "Verify children match.");
        }

        // [[Fact]]
        void PrefixOperatorGetChildren()
        {
            auto uut = SyntaxFactory::CreateUnaryExpression(
                UnaryOperator::PreIncrement,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoublePlus),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1")));

            Assert::AreEqual(
                std::vector<SyntaxNodeChild>({
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoublePlus)),
                    SyntaxNodeChild(
                        SyntaxFactory::CreateLiteralExpression(
                            LiteralType::Integer,
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1"))),
                }),
                uut->GetChildren(),
                "Verify children match.");
        }

        // [[Fact]]
        void OperatorEqual()
        {
            auto uut = SyntaxFactory::CreateUnaryExpression(
                UnaryOperator::PostIncrement,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoublePlus),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1")));

            TestUtils::AreEqual(
                SyntaxFactory::CreateUnaryExpression(
                    UnaryOperator::PostIncrement,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoublePlus),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1"))),
                uut,
                "Verify matches.");
        }

        // [[Fact]]
        void OperatorNotEqualOperator()
        {
            auto uut = SyntaxFactory::CreateUnaryExpression(
                UnaryOperator::PostIncrement,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoublePlus),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1")));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateUnaryExpression(
                    UnaryOperator::PreIncrement,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoublePlus),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1"))),
                uut,
                "Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualOperand()
        {
            auto uut = SyntaxFactory::CreateUnaryExpression(
                UnaryOperator::PostIncrement,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoublePlus),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1")));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateUnaryExpression(
                    UnaryOperator::PostIncrement,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoublePlus),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2"))),
                uut,
                "Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualOperatorToken()
        {
            auto uut = SyntaxFactory::CreateUnaryExpression(
                UnaryOperator::PostIncrement,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoublePlus),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1")));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateUnaryExpression(
                    UnaryOperator::PostIncrement,
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::DoublePlus,
                        {
                            SyntaxFactory::CreateTrivia(" ", TextSpan()),
                        },
                        {}),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1"))),
                uut,
                "Verify do not match.");
        }
    };
}
