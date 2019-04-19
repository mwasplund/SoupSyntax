#pragma once
#include "SoupAssert.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
    class InnerTreeLiteralExpressionTests
    {
    public:
        [[Fact]]
        void InitializeSimple()
        {
            auto uut = SyntaxFactory::CreateLiteralExpression(
                LiteralType::Integer,
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1"));

            Assert::AreEqual(
                SyntaxNodeType::LiteralExpression,
                uut->GetType(),
                "Verify has correct type.");
            Assert::AreEqual(LiteralType::Integer, uut->GetLiteralType(), "Verify type matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1"),
                uut->GetToken(),
                "Verify value matches.");
        }

        [[Fact]]
        void OperatorEqual()
        {
            auto uut = SyntaxFactory::CreateLiteralExpression(
                LiteralType::Integer,
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1"));

            TestUtils::AreEqual(
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1")),
                uut,
                "Verify matches.");
        }

        [[Fact]]
        void OperatorNotEqualType()
        {
            auto uut = SyntaxFactory::CreateLiteralExpression(
                LiteralType::Integer,
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1"));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Floating,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1")),
                uut,
                "Verify do not match.");
        }

        [[Fact]]
        void OperatorNotEqualToken()
        {
            auto uut = SyntaxFactory::CreateLiteralExpression(
                LiteralType::Integer,
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1"));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2")),
                uut,
                "Verify do not match.");
        }
    };
}
