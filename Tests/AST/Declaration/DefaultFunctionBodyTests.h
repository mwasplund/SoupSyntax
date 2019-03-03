#pragma once
#include "TestUtils.h"
#include "../SoupAssert.h"

namespace Soup::Syntax::UnitTests
{
    class DefaultFunctionBodyTests
    {
    public:
        // [[Fact]]
        void InitializeSimple()
        {
            auto uut = SyntaxFactory::CreateDefaultFunctionBody(
                SyntaxFactory::CreateToken(SyntaxTokenType::Equal, L"="),
                SyntaxFactory::CreateToken(SyntaxTokenType::Default, L"default"),
                SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";"));

            Assert::AreEqual(
                *SyntaxFactory::CreateToken(SyntaxTokenType::Equal, L"="),
                uut->GetEqualToken(),
                L"Verify equal token matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateToken(SyntaxTokenType::Default, L"default"),
                uut->GetDefaultToken(),
                L"Verify default token matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";"),
                uut->GetSemicolonToken(),
                L"Verify semicolon token matches.");
        }

        // [[Fact]]
        void OperatorEqual()
        {
            auto uut = SyntaxFactory::CreateDefaultFunctionBody(
                SyntaxFactory::CreateToken(SyntaxTokenType::Equal, L"="),
                SyntaxFactory::CreateToken(SyntaxTokenType::Default, L"default"),
                SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";"));

            TestUtils::AreEqual(
                SyntaxFactory::CreateDefaultFunctionBody(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Equal, L"="),
                    SyntaxFactory::CreateToken(SyntaxTokenType::Default, L"default"),
                    SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";")),
                uut,
                L"Verify matches.");
        }

        // [[Fact]]
        void OperatorNotEqualEqualToken()
        {
            auto uut = SyntaxFactory::CreateDefaultFunctionBody(
                SyntaxFactory::CreateToken(SyntaxTokenType::Equal, L"="),
                SyntaxFactory::CreateToken(SyntaxTokenType::Default, L"default"),
                SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";"));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateDefaultFunctionBody(
                SyntaxFactory::CreateToken(
                    SyntaxTokenType::Equal,
                    L"=",
                    {
                        SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 1)),
                    },
                    {
                    }),
                SyntaxFactory::CreateToken(SyntaxTokenType::Default, L"default"),
                SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";")),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualDefaultToken()
        {
            auto uut = SyntaxFactory::CreateDefaultFunctionBody(
                SyntaxFactory::CreateToken(SyntaxTokenType::Equal, L"="),
                SyntaxFactory::CreateToken(SyntaxTokenType::Default, L"default"),
                SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";"));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateDefaultFunctionBody(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Equal, L"="),
                    SyntaxFactory::CreateToken(
                        SyntaxTokenType::Default,
                        L"default",
                        {
                            SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 1)),
                        },
                        {
                        }),
                    SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";")),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualSemicolonToken()
        {
            auto uut = SyntaxFactory::CreateDefaultFunctionBody(
                SyntaxFactory::CreateToken(SyntaxTokenType::Equal, L"="),
                SyntaxFactory::CreateToken(SyntaxTokenType::Default, L"default"),
                SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";"));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateDefaultFunctionBody(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Equal, L"="),
                    SyntaxFactory::CreateToken(SyntaxTokenType::Default, L"default"),
                    SyntaxFactory::CreateToken(
                        SyntaxTokenType::Semicolon,
                        L";",
                        {
                            SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 1)),
                        },
                        {
                        })),
                uut,
                L"Verify do not match.");
        }
    };
}
