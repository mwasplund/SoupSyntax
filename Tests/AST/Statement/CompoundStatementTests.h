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
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftBrace),
                {},
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightBrace));

            Assert::AreEqual(
                SyntaxNodeType::CompoundStatement,
                uut->GetType(),
                L"Verify has correct type.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftBrace),
                uut->GetLeftBraceToken(),
                L"Verify left brace token matches.");
            Assert::AreEqual<int>(
                0,
                uut->GetStatements().size(),
                L"Verify condition expression matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightBrace),
                uut->GetRightBraceToken(),
                L"Verify right brace token matches.");
        }

        // [[Fact]]
        void InitializeSingleStatement()
        {
            auto uut = SyntaxFactory::CreateCompoundStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftBrace),
                {
                    SyntaxFactory::CreateReturnStatement(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Return),
                        nullptr,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                },
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightBrace));

            Assert::AreEqual(
                SyntaxNodeType::CompoundStatement,
                uut->GetType(),
                L"Verify has correct type.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftBrace),
                uut->GetLeftBraceToken(),
                L"Verify left brace token matches.");
            Assert::AreEqual<int>(
                1,
                uut->GetStatements().size(),
                L"Verify condition expression matches.");
            TestUtils::AreEqual(
                SyntaxFactory::CreateReturnStatement(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Return),
                    nullptr,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                uut->GetStatements().at(0),
                L"Verify condition expression matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightBrace),
                uut->GetRightBraceToken(),
                L"Verify right brace token matches.");
        }

        // [[Fact]]
        void GetChildrenEmpty()
        {
            auto uut = SyntaxFactory::CreateCompoundStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftBrace),
                {},
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightBrace));

            Assert::AreEqual(
                std::vector<SyntaxNodeChild>(
                {
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftBrace)),
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightBrace)),
                }),
                uut->GetChildren(),
                L"Verify children match.");
        }

        // [[Fact]]
        void GetChildrenSingleStatement()
        {
            auto uut = SyntaxFactory::CreateCompoundStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftBrace),
                {
                    SyntaxFactory::CreateReturnStatement(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Return),
                        nullptr,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                },
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightBrace));

            Assert::AreEqual(
                std::vector<SyntaxNodeChild>(
                {
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftBrace)),
                    SyntaxNodeChild(SyntaxFactory::CreateReturnStatement(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Return),
                        nullptr,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))),
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightBrace)),
                }),
                uut->GetChildren(),
                L"Verify children match.");
        }

        // [[Fact]]
        void OperatorEqualEmpty()
        {
            auto uut = SyntaxFactory::CreateCompoundStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftBrace),
                {},
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightBrace));

            TestUtils::AreEqual(
                SyntaxFactory::CreateCompoundStatement(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftBrace),
                    {},
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightBrace)),
                uut,
                L"Verify matches.");
        }

        // [[Fact]]
        void OperatorEqualSingleStatement()
        {
            auto uut = SyntaxFactory::CreateCompoundStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftBrace),
                {
                    SyntaxFactory::CreateReturnStatement(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Return),
                        nullptr,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                },
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightBrace));

            TestUtils::AreEqual(
                SyntaxFactory::CreateCompoundStatement(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftBrace),
                    {
                        SyntaxFactory::CreateReturnStatement(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Return),
                            nullptr,
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                    },
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightBrace)),
                uut,
                L"Verify matches.");
        }

        // [[Fact]]
        void OperatorNotEqualLeftBraceToken()
        {
            auto uut = SyntaxFactory::CreateCompoundStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftBrace),
                {},
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightBrace));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateCompoundStatement(
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::LeftBrace,
                        {
                            SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 1)),
                        },
                        {}),
                    {},
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightBrace)),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualEmpty()
        {
            auto uut = SyntaxFactory::CreateCompoundStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftBrace),
                {},
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightBrace));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateCompoundStatement(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftBrace),
                    {
                        SyntaxFactory::CreateReturnStatement(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Return),
                            nullptr,
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                    },
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightBrace)),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualSingleStatement()
        {
            auto uut = SyntaxFactory::CreateCompoundStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftBrace),
                {
                    SyntaxFactory::CreateReturnStatement(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Return),
                        nullptr,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                },
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightBrace));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateCompoundStatement(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftBrace),
                    {
                        SyntaxFactory::CreateReturnStatement(
                            SyntaxFactory::CreateKeywordToken(
                                SyntaxTokenType::Return,
                                {
                                    SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 1)),
                                },
                                {}),
                            nullptr,
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                    },
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightBrace)),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualRightBraceToken()
        {
            auto uut = SyntaxFactory::CreateCompoundStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftBrace),
                {},
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightBrace));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateCompoundStatement(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftBrace),
                    {},
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::RightBrace,
                        {
                            SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 1)),
                        },
                        {})),
                uut,
                L"Verify do not match.");
        }
    };
}
