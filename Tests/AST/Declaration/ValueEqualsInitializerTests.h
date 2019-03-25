#pragma once
#include "TestUtils.h"
#include "../SoupAssert.h"

namespace Soup::Syntax::UnitTests
{
    class ValueEqualsInitializerTests
    {
    public:
        // [[Fact]]
        void InitializeSimple()
        {
            // = 1
            auto uut = SyntaxFactory::CreateValueEqualsInitializer(
                SyntaxFactory::CreateToken(SyntaxTokenType::Equal, L"="),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"1")));

            Assert::AreEqual(
                SyntaxNodeType::ValueEqualsInitializer,
                uut->GetType(),
                L"Verify has correct type.");
            Assert::AreEqual(
                *SyntaxFactory::CreateToken(SyntaxTokenType::Equal, L"="),
                uut->GetEqualToken(),
                L"Verify equal token matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"1")),
                uut->GetExpression(),
                L"Verify expression matches.");
        }

        // [[Fact]]
        void GetChildren()
        {
            // = 1
            auto uut = SyntaxFactory::CreateValueEqualsInitializer(
                SyntaxFactory::CreateToken(SyntaxTokenType::Equal, L"="),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"1")));

            Assert::AreEqual(
                std::vector<SyntaxNodeChild>({
                    SyntaxNodeChild(SyntaxFactory::CreateToken(SyntaxTokenType::Equal, L"=")),
                    SyntaxNodeChild(
                        SyntaxFactory::CreateLiteralExpression(
                            LiteralType::Integer,
                            SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"1"))),
                }),
                uut->GetChildren(),
                L"Verify children match.");
        }

        // [[Fact]]
        void OperatorEqual()
        {
            // = 1
            auto uut = SyntaxFactory::CreateValueEqualsInitializer(
                SyntaxFactory::CreateToken(SyntaxTokenType::Equal, L"="),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"1")));

            TestUtils::AreEqual(
                SyntaxFactory::CreateValueEqualsInitializer(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Equal, L"="),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"1"))),
                uut,
                L"Verify matches.");
        }

        // [[Fact]]
        void OperatorNotEqualEqualToken()
        {
            // = 1
            auto uut = SyntaxFactory::CreateValueEqualsInitializer(
                SyntaxFactory::CreateToken(SyntaxTokenType::Equal, L"="),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"1")));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateValueEqualsInitializer(
                    SyntaxFactory::CreateToken(
                        SyntaxTokenType::Equal,
                        L"=",
                        {
                            SyntaxFactory::CreateTrivia(L" ", TextSpan()),
                        },
                        {}),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"1"))),
                uut,
                L"Verify does not match.");
        }

        // [[Fact]]
        void OperatorNotEqualExpression()
        {
            // = 1
            auto uut = SyntaxFactory::CreateValueEqualsInitializer(
                SyntaxFactory::CreateToken(SyntaxTokenType::Equal, L"="),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"1")));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateValueEqualsInitializer(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Equal, L"="),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"2"))),
                uut,
                L"Verify does not match.");
        }
    };
}
