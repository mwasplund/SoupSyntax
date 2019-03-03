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
                SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"1"));

            Assert::AreEqual(LiteralType::Integer, uut->GetLiteralType(), L"Verify type matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"1"),
                uut->GetToken(),
                L"Verify value matches.");
        }

        // [[Fact]]
        void OperatorEqual()
        {
            auto uut = SyntaxFactory::CreateLiteralExpression(
                LiteralType::Integer,
                SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"1"));

            TestUtils::AreEqual(
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"1")),
                uut,
                L"Verify matches.");
        }

        // [[Fact]]
        void OperatorNotEqualType()
        {
            auto uut = SyntaxFactory::CreateLiteralExpression(
                LiteralType::Integer,
                SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"1"));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Floating,
                    SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"1")),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualToken()
        {
            auto uut = SyntaxFactory::CreateLiteralExpression(
                LiteralType::Integer,
                SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"1"));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"2")),
                uut,
                L"Verify do not match.");
        }
    };
}
