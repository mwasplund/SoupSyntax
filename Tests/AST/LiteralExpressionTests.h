#pragma once
#include "../SoupAssert.h"

namespace Soup::Syntax::UnitTests
{
    class LiteralExressionTests
    {
    public:
        // [[Fact]]
        void InitializeSimple()
        {
            auto uut = SyntaxFactory::CreateLiteralExpression(
                LiteralType::Integer,
                std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "1"));

            Assert::AreEqual(LiteralType::Integer, uut->GetType(), "Verify type matches.");
            Assert::AreEqual(SyntaxToken(SyntaxTokenType::IntegerLiteral, "1"), uut->GetToken(), "Verify value matches.");
        }

        // [[Fact]]
        void OperatorEqual()
        {
            auto uut = SyntaxFactory::CreateLiteralExpression(
                LiteralType::Integer,
                std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "1"));

            Assert::AreEqual(
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "1")),
                uut,
                "Verify matches.");
        }

        // [[Fact]]
        void OperatorNotEqualType()
        {
            auto uut = SyntaxFactory::CreateLiteralExpression(
                LiteralType::Integer,
                std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "1"));

            Assert::AreNotEqual(
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Floating,
                    std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "1")),
                uut,
                "Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualToken()
        {
            auto uut = SyntaxFactory::CreateLiteralExpression(
                LiteralType::Integer,
                std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "1"));

            Assert::AreNotEqual(
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "2")),
                uut,
                "Verify do not match.");
        }
    };
}
