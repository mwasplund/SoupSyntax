#pragma once
#include "TestUtils.h"
#include "../SoupAssert.h"

namespace Soup::Syntax::UnitTests
{
    class CompoundStatementTests
    {
    public:
        // [[Fact]]
        void InitializeEmpty()
        {
            auto uut = SyntaxFactory::CreateCompoundStatement(
                SyntaxFactory::CreateToken(SyntaxTokenType::LeftBrace, L"{"),
                {},
                SyntaxFactory::CreateToken(SyntaxTokenType::RightBrace, L"}"));

            Assert::AreEqual(
                SyntaxNodeType::CompoundStatement,
                uut->GetType(),
                L"Verify has correct type.");
            Assert::AreEqual(
                *SyntaxFactory::CreateToken(SyntaxTokenType::LeftBrace, L"{"),
                uut->GetLeftBraceToken(),
                L"Verify left brace token matches.");
            Assert::AreEqual<int>(
                0,
                uut->GetStatements().size(),
                L"Verify condition expression matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateToken(SyntaxTokenType::RightBrace, L"}"),
                uut->GetRightBraceToken(),
                L"Verify right brace token matches.");
        }

        // [[Fact]]
        void InitializeSingleStatement()
        {
            auto uut = SyntaxFactory::CreateCompoundStatement(
                SyntaxFactory::CreateToken(SyntaxTokenType::LeftBrace, L"{"),
                {
                    SyntaxFactory::CreateReturnStatement(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Return, L"return"),
                        nullptr,
                        SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";")),
                },
                SyntaxFactory::CreateToken(SyntaxTokenType::RightBrace, L"}"));

            Assert::AreEqual(
                SyntaxNodeType::CompoundStatement,
                uut->GetType(),
                L"Verify has correct type.");
            Assert::AreEqual(
                *SyntaxFactory::CreateToken(SyntaxTokenType::LeftBrace, L"{"),
                uut->GetLeftBraceToken(),
                L"Verify left brace token matches.");
            Assert::AreEqual<int>(
                1,
                uut->GetStatements().size(),
                L"Verify condition expression matches.");
            TestUtils::AreEqual(
                SyntaxFactory::CreateReturnStatement(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Return, L"return"),
                    nullptr,
                    SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";")),
                uut->GetStatements().at(0),
                L"Verify condition expression matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateToken(SyntaxTokenType::RightBrace, L"}"),
                uut->GetRightBraceToken(),
                L"Verify right brace token matches.");
        }

        // [[Fact]]
        void GetChildrenEmpty()
        {
            auto uut = SyntaxFactory::CreateCompoundStatement(
                SyntaxFactory::CreateToken(SyntaxTokenType::LeftBrace, L"{"),
                {},
                SyntaxFactory::CreateToken(SyntaxTokenType::RightBrace, L"}"));

            Assert::AreEqual(
                std::vector<SyntaxNodeChild>(
                {
                    SyntaxNodeChild(SyntaxFactory::CreateToken(SyntaxTokenType::LeftBrace, L"{")),
                    SyntaxNodeChild(SyntaxFactory::CreateToken(SyntaxTokenType::RightBrace, L"}")),
                }),
                uut->GetChildren(),
                L"Verify children match.");
        }

        // [[Fact]]
        void GetChildrenSingleStatement()
        {
            auto uut = SyntaxFactory::CreateCompoundStatement(
                SyntaxFactory::CreateToken(SyntaxTokenType::LeftBrace, L"{"),
                {
                    SyntaxFactory::CreateReturnStatement(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Return, L"return"),
                        nullptr,
                        SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";")),
                },
                SyntaxFactory::CreateToken(SyntaxTokenType::RightBrace, L"}"));

            Assert::AreEqual(
                std::vector<SyntaxNodeChild>(
                {
                    SyntaxNodeChild(SyntaxFactory::CreateToken(SyntaxTokenType::LeftBrace, L"{")),
                    SyntaxNodeChild(SyntaxFactory::CreateReturnStatement(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Return, L"return"),
                        nullptr,
                        SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";"))),
                    SyntaxNodeChild(SyntaxFactory::CreateToken(SyntaxTokenType::RightBrace, L"}")),
                }),
                uut->GetChildren(),
                L"Verify children match.");
        }

        // [[Fact]]
        void OperatorEqualEmpty()
        {
            auto uut = SyntaxFactory::CreateCompoundStatement(
                SyntaxFactory::CreateToken(SyntaxTokenType::LeftBrace, L"{"),
                {},
                SyntaxFactory::CreateToken(SyntaxTokenType::RightBrace, L"}"));

            TestUtils::AreEqual(
                SyntaxFactory::CreateCompoundStatement(
                    SyntaxFactory::CreateToken(SyntaxTokenType::LeftBrace, L"{"),
                    {},
                    SyntaxFactory::CreateToken(SyntaxTokenType::RightBrace, L"}")),
                uut,
                L"Verify matches.");
        }

        // [[Fact]]
        void OperatorEqualSingleStatement()
        {
            auto uut = SyntaxFactory::CreateCompoundStatement(
                SyntaxFactory::CreateToken(SyntaxTokenType::LeftBrace, L"{"),
                {
                    SyntaxFactory::CreateReturnStatement(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Return, L"return"),
                        nullptr,
                        SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";")),
                },
                SyntaxFactory::CreateToken(SyntaxTokenType::RightBrace, L"}"));

            TestUtils::AreEqual(
                SyntaxFactory::CreateCompoundStatement(
                    SyntaxFactory::CreateToken(SyntaxTokenType::LeftBrace, L"{"),
                    {
                        SyntaxFactory::CreateReturnStatement(
                            SyntaxFactory::CreateToken(SyntaxTokenType::Return, L"return"),
                            nullptr,
                            SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";")),
                    },
                    SyntaxFactory::CreateToken(SyntaxTokenType::RightBrace, L"}")),
                uut,
                L"Verify matches.");
        }

        // [[Fact]]
        void OperatorNotEqualLeftBraceToken()
        {
            auto uut = SyntaxFactory::CreateCompoundStatement(
                SyntaxFactory::CreateToken(SyntaxTokenType::LeftBrace, L"{"),
                {},
                SyntaxFactory::CreateToken(SyntaxTokenType::RightBrace, L"}"));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateCompoundStatement(
                    SyntaxFactory::CreateToken(
                        SyntaxTokenType::LeftBrace,
                        L"{",
                        {
                            SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 1)),
                        },
                        {}),
                    {},
                    SyntaxFactory::CreateToken(SyntaxTokenType::RightBrace, L"}")),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualEmpty()
        {
            auto uut = SyntaxFactory::CreateCompoundStatement(
                SyntaxFactory::CreateToken(SyntaxTokenType::LeftBrace, L"{"),
                {},
                SyntaxFactory::CreateToken(SyntaxTokenType::RightBrace, L"}"));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateCompoundStatement(
                    SyntaxFactory::CreateToken(SyntaxTokenType::LeftBrace, L"{"),
                    {
                        SyntaxFactory::CreateReturnStatement(
                            SyntaxFactory::CreateToken(SyntaxTokenType::Return, L"return"),
                            nullptr,
                            SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";")),
                    },
                    SyntaxFactory::CreateToken(SyntaxTokenType::RightBrace, L"}")),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualSingleStatement()
        {
            auto uut = SyntaxFactory::CreateCompoundStatement(
                SyntaxFactory::CreateToken(SyntaxTokenType::LeftBrace, L"{"),
                {
                    SyntaxFactory::CreateReturnStatement(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Return, L"return"),
                        nullptr,
                        SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";")),
                },
                SyntaxFactory::CreateToken(SyntaxTokenType::RightBrace, L"}"));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateCompoundStatement(
                    SyntaxFactory::CreateToken(SyntaxTokenType::LeftBrace, L"{"),
                    {
                        SyntaxFactory::CreateReturnStatement(
                            SyntaxFactory::CreateToken(
                                SyntaxTokenType::Return,
                                L"return",
                                {
                                    SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 1)),
                                },
                                {}),
                            nullptr,
                            SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";")),
                    },
                    SyntaxFactory::CreateToken(SyntaxTokenType::RightBrace, L"}")),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualRightBraceToken()
        {
            auto uut = SyntaxFactory::CreateCompoundStatement(
                SyntaxFactory::CreateToken(SyntaxTokenType::LeftBrace, L"{"),
                {},
                SyntaxFactory::CreateToken(SyntaxTokenType::RightBrace, L"}"));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateCompoundStatement(
                    SyntaxFactory::CreateToken(SyntaxTokenType::LeftBrace, L"{"),
                    {},
                    SyntaxFactory::CreateToken(
                        SyntaxTokenType::RightBrace,
                        L"}",
                        {
                            SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 1)),
                        },
                        {})),
                uut,
                L"Verify do not match.");
        }
    };
}
