#pragma once
#include "SoupAssert.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
    class OuterTreeLiteralExpressionTests
    {
    public:
        // [[Fact]]
        void InitializeSimple()
        {
            auto uut = SyntaxFactory::CreateLiteralExpression(
                LiteralType::Integer,
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1"))->CreateOuter(nullptr);

            Assert::AreEqual(
                SyntaxNodeType::LiteralExpression,
                uut->GetType(),
                "Verify has correct type.");
            Assert::AreEqual(LiteralType::Integer, uut->GetLiteralType(), "Verify type matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1"),
                uut->GetToken(),
                "Verify value matches.");
        }

        // [[Fact]]
        void GetChildren()
        {
            auto uut = SyntaxFactory::CreateLiteralExpression(
                LiteralType::Integer,
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1"))->CreateOuter(nullptr);

            Assert::AreEqual(
                std::vector<OuterTree::SyntaxNodeChild>({
                    TestUtils::CreateChild(SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1")),
                }),
                uut->GetChildren(),
                "Verify children match.");
        }

        // [[Fact]]
        void OperatorEqual()
        {
            auto uut = SyntaxFactory::CreateLiteralExpression(
                LiteralType::Integer,
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1"))->CreateOuter(nullptr);

            TestUtils::AreEqual(
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1")),
                uut,
                "Verify matches.");
        }

        // [[Fact]]
        void OperatorNotEqualType()
        {
            auto uut = SyntaxFactory::CreateLiteralExpression(
                LiteralType::Integer,
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1"))->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Floating,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1")),
                uut,
                "Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualToken()
        {
            auto uut = SyntaxFactory::CreateLiteralExpression(
                LiteralType::Integer,
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1"))->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2")),
                uut,
                "Verify do not match.");
        }
    };
}
