#pragma once
#include "SoupAssert.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
    class OuterTreeUnaryExpressionTests
    {
    public:
        [[Fact]]
        void InitializeSimple()
        {
            auto uut = SyntaxFactory::CreateUnaryExpression(
                UnaryOperator::PostIncrement,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoublePlus),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1")))->CreateOuter(nullptr);

            Assert::AreEqual(
                SyntaxNodeType::UnaryExpression,
                uut->GetType(),
                "Verify has correct type.");
            Assert::AreEqual(UnaryOperator::PostIncrement, uut->GetOperator(), "Verify operator matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoublePlus),
                uut->GetOperatorToken(),
                "Verify operator token matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateLiteralExpression(LiteralType::Integer, SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1")),
                uut->GetOperand(),
                "Verify left expression matches.");
        }

        [[Fact]]
        void PostfixOperatorGetChildren()
        {
            auto uut = SyntaxFactory::CreateUnaryExpression(
                UnaryOperator::PostIncrement,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoublePlus),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1")))->CreateOuter(nullptr);

            Assert::AreEqual(
                std::vector<OuterTree::SyntaxNodeChild>({
                    TestUtils::CreateChild(
                        SyntaxFactory::CreateLiteralExpression(
                            LiteralType::Integer,
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1"))),
                    TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoublePlus)),
                }),
                uut->GetChildren(),
                "Verify children match.");
        }

        [[Fact]]
        void PrefixOperatorGetChildren()
        {
            auto uut = SyntaxFactory::CreateUnaryExpression(
                UnaryOperator::PreIncrement,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoublePlus),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1")))->CreateOuter(nullptr);

            Assert::AreEqual(
                std::vector<OuterTree::SyntaxNodeChild>({
                    TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoublePlus)),
                    TestUtils::CreateChild(
                        SyntaxFactory::CreateLiteralExpression(
                            LiteralType::Integer,
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1"))),
                }),
                uut->GetChildren(),
                "Verify children match.");
        }

        [[Fact]]
        void OperatorEqual()
        {
            auto uut = SyntaxFactory::CreateUnaryExpression(
                UnaryOperator::PostIncrement,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoublePlus),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1")))->CreateOuter(nullptr);

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

        [[Fact]]
        void OperatorNotEqualOperator()
        {
            auto uut = SyntaxFactory::CreateUnaryExpression(
                UnaryOperator::PostIncrement,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoublePlus),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1")))->CreateOuter(nullptr);

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

        [[Fact]]
        void OperatorNotEqualOperand()
        {
            auto uut = SyntaxFactory::CreateUnaryExpression(
                UnaryOperator::PostIncrement,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoublePlus),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1")))->CreateOuter(nullptr);

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

        [[Fact]]
        void OperatorNotEqualOperatorToken()
        {
            auto uut = SyntaxFactory::CreateUnaryExpression(
                UnaryOperator::PostIncrement,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoublePlus),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1")))->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateUnaryExpression(
                    UnaryOperator::PostIncrement,
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::DoublePlus,
                        {
                            SyntaxFactory::CreateTrivia(" "),
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
