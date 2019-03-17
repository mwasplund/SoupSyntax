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
                SyntaxFactory::CreateToken(SyntaxTokenType::Else, L"else"),
                SyntaxFactory::CreateEmptyStatement(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";")));

            Assert::AreEqual(
                SyntaxNodeType::ElseClause,
                uut->GetType(),
                L"Verify has correct type.");
            Assert::AreEqual(
                *SyntaxFactory::CreateToken(SyntaxTokenType::Else, L"else"),
                uut->GetElseToken(),
                L"Verify else token matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateEmptyStatement(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";")),
                uut->GetStatement(),
                L"Verify statement matches.");
        }

        // [[Fact]]
        void GetChildren()
        {
            auto uut = SyntaxFactory::CreateElseClause(
                SyntaxFactory::CreateToken(SyntaxTokenType::Else, L"else"),
                SyntaxFactory::CreateEmptyStatement(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";")));

            Assert::AreEqual(
                std::vector<SyntaxNodeChild>({
                    SyntaxNodeChild(SyntaxFactory::CreateToken(SyntaxTokenType::Else, L"else")),
                    SyntaxNodeChild(SyntaxFactory::CreateEmptyStatement(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";"))),
                }),
                uut->GetChildren(),
                L"Verify children match.");
        }

        // [[Fact]]
        void OperatorEqual()
        {
            auto uut = SyntaxFactory::CreateElseClause(
                SyntaxFactory::CreateToken(SyntaxTokenType::Else, L"else"),
                SyntaxFactory::CreateEmptyStatement(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";")));

            TestUtils::AreEqual(
                SyntaxFactory::CreateElseClause(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Else, L"else"),
                    SyntaxFactory::CreateEmptyStatement(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";"))),
                uut,
                L"Verify matches.");
        }

        // [[Fact]]
        void OperatorNotEqualElseToken()
        {
            auto uut = SyntaxFactory::CreateElseClause(
                SyntaxFactory::CreateToken(SyntaxTokenType::Else, L"else"),
                SyntaxFactory::CreateEmptyStatement(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";")));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateElseClause(
                    SyntaxFactory::CreateToken(
                        SyntaxTokenType::Else,
                        L"else",
                        {
                            SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 1)),
                        },
                        {
                        }),
                    SyntaxFactory::CreateEmptyStatement(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";"))),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualStatement()
        {
            auto uut = SyntaxFactory::CreateElseClause(
                SyntaxFactory::CreateToken(SyntaxTokenType::Else, L"else"),
                SyntaxFactory::CreateEmptyStatement(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";")));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateElseClause(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Else, L"else"),
                    SyntaxFactory::CreateEmptyStatement(
                        SyntaxFactory::CreateToken(
                            SyntaxTokenType::Semicolon,
                            L";",
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
