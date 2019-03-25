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
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"1"));

            Assert::AreEqual(
                SyntaxNodeType::LiteralExpression,
                uut->GetType(),
                L"Verify has correct type.");
            Assert::AreEqual(LiteralType::Integer, uut->GetLiteralType(), L"Verify type matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"1"),
                uut->GetToken(),
                L"Verify value matches.");
        }

        // [[Fact]]
        void GetChildren()
        {
            auto uut = SyntaxFactory::CreateLiteralExpression(
                LiteralType::Integer,
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"1"));

            Assert::AreEqual(
                std::vector<SyntaxNodeChild>({
                    SyntaxNodeChild(SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"1")),
                }),
                uut->GetChildren(),
                L"Verify children match.");
        }

        // [[Fact]]
        void OperatorEqual()
        {
            auto uut = SyntaxFactory::CreateLiteralExpression(
                LiteralType::Integer,
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"1"));

            TestUtils::AreEqual(
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"1")),
                uut,
                L"Verify matches.");
        }

        // [[Fact]]
        void OperatorNotEqualType()
        {
            auto uut = SyntaxFactory::CreateLiteralExpression(
                LiteralType::Integer,
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"1"));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Floating,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"1")),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualToken()
        {
            auto uut = SyntaxFactory::CreateLiteralExpression(
                LiteralType::Integer,
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"1"));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"2")),
                uut,
                L"Verify do not match.");
        }
    };
}
