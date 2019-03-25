#pragma once
#include "TestUtils.h"
#include "../SoupAssert.h"

namespace Soup::Syntax::UnitTests
{
    class ElseClauseTests
    {
    public:
        // [[Fact]]
        void InitializeSimple()
        {
            auto uut = SyntaxFactory::CreateElseClause(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Else),
                SyntaxFactory::CreateEmptyStatement(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)));

            Assert::AreEqual(
                SyntaxNodeType::ElseClause,
                uut->GetType(),
                L"Verify has correct type.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Else),
                uut->GetElseToken(),
                L"Verify else token matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateEmptyStatement(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                uut->GetStatement(),
                L"Verify statement matches.");
        }

        // [[Fact]]
        void GetChildren()
        {
            auto uut = SyntaxFactory::CreateElseClause(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Else),
                SyntaxFactory::CreateEmptyStatement(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)));

            Assert::AreEqual(
                std::vector<SyntaxNodeChild>({
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Else)),
                    SyntaxNodeChild(SyntaxFactory::CreateEmptyStatement(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))),
                }),
                uut->GetChildren(),
                L"Verify children match.");
        }

        // [[Fact]]
        void OperatorEqual()
        {
            auto uut = SyntaxFactory::CreateElseClause(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Else),
                SyntaxFactory::CreateEmptyStatement(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)));

            TestUtils::AreEqual(
                SyntaxFactory::CreateElseClause(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Else),
                    SyntaxFactory::CreateEmptyStatement(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))),
                uut,
                L"Verify matches.");
        }

        // [[Fact]]
        void OperatorNotEqualElseToken()
        {
            auto uut = SyntaxFactory::CreateElseClause(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Else),
                SyntaxFactory::CreateEmptyStatement(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateElseClause(
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::Else,
                        {
                            SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 1)),
                        },
                        {
                        }),
                    SyntaxFactory::CreateEmptyStatement(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualStatement()
        {
            auto uut = SyntaxFactory::CreateElseClause(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Else),
                SyntaxFactory::CreateEmptyStatement(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateElseClause(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Else),
                    SyntaxFactory::CreateEmptyStatement(
                        SyntaxFactory::CreateKeywordToken(
                            SyntaxTokenType::Semicolon,
                            {
                                SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 1)),
                            },
                            {
                            }))),
                uut,
                L"Verify do not match.");
        }
    };
}
