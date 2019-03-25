#pragma once
#include "TestUtils.h"
#include "../SoupAssert.h"

namespace Soup::Syntax::UnitTests
{
    class EmptyStatementTests
    {
    public:
        // [[Fact]]
        void InitializeSimple()
        {
            auto uut = SyntaxFactory::CreateEmptyStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            Assert::AreEqual(
                SyntaxNodeType::EmptyStatement,
                uut->GetType(),
                L"Verify has correct type.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon),
                uut->GetSemicolonToken(),
                L"Verify semicolon token matches.");
        }

        // [[Fact]]
        void GetChildren()
        {
            auto uut = SyntaxFactory::CreateEmptyStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            Assert::AreEqual(
                std::vector<SyntaxNodeChild>({
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                }),
                uut->GetChildren(),
                L"Verify children match.");
        }

        // [[Fact]]
        void OperatorEqual()
        {
            auto uut = SyntaxFactory::CreateEmptyStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            TestUtils::AreEqual(
                SyntaxFactory::CreateEmptyStatement(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                uut,
                L"Verify matches.");
        }

        // [[Fact]]
        void OperatorNotEqualSemicolonToken()
        {
            auto uut = SyntaxFactory::CreateEmptyStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateEmptyStatement(
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
