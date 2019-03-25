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
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Default),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            Assert::AreEqual(
                SyntaxNodeType::DefaultFunctionBody,
                uut->GetType(),
                L"Verify has correct type.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                uut->GetEqualToken(),
                L"Verify equal token matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Default),
                uut->GetDefaultToken(),
                L"Verify default token matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon),
                uut->GetSemicolonToken(),
                L"Verify semicolon token matches.");
        }

        // [[Fact]]
        void GetChildren()
        {
            auto uut = SyntaxFactory::CreateDefaultFunctionBody(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Default),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            Assert::AreEqual(
                std::vector<SyntaxNodeChild>({
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal)),
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Default)),
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                }),
                uut->GetChildren(),
                L"Verify children match.");
        }

        // [[Fact]]
        void OperatorEqual()
        {
            auto uut = SyntaxFactory::CreateDefaultFunctionBody(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Default),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            TestUtils::AreEqual(
                SyntaxFactory::CreateDefaultFunctionBody(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Default),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                uut,
                L"Verify matches.");
        }

        // [[Fact]]
        void OperatorNotEqualEqualToken()
        {
            auto uut = SyntaxFactory::CreateDefaultFunctionBody(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Default),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateDefaultFunctionBody(
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::Equal,
                        {
                            SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 1)),
                        },
                        {
                        }),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Default),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualDefaultToken()
        {
            auto uut = SyntaxFactory::CreateDefaultFunctionBody(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Default),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateDefaultFunctionBody(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::Default,
                        {
                            SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 1)),
                        },
                        {
                        }),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualSemicolonToken()
        {
            auto uut = SyntaxFactory::CreateDefaultFunctionBody(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Default),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateDefaultFunctionBody(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Default),
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::Semicolon,
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
