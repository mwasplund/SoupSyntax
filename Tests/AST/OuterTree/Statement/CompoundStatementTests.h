#pragma once
#include "TestUtils.h"
#include "SoupAssert.h"

namespace Soup::Syntax::OuterTree::UnitTests
{
    class CompoundStatementTests
    {
    public:
        // [[Fact]]
        void InitializeEmpty()
        {
            auto uut = SyntaxFactory::CreateCompoundStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                {},
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

            Assert::AreEqual(
                SyntaxNodeType::CompoundStatement,
                uut->GetType(),
                "Verify has correct type.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                uut->GetOpenBraceToken(),
                "Verify left brace token matches.");
            Assert::AreEqual<int>(
                0,
                uut->GetStatements().size(),
                "Verify condition expression matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace),
                uut->GetCloseBraceToken(),
                "Verify right brace token matches.");
        }

        // [[Fact]]
        void InitializeSingleStatement()
        {
            auto uut = SyntaxFactory::CreateCompoundStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                {
                    SyntaxFactory::CreateReturnStatement(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Return),
                        nullptr,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                },
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

            Assert::AreEqual(
                SyntaxNodeType::CompoundStatement,
                uut->GetType(),
                "Verify has correct type.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                uut->GetOpenBraceToken(),
                "Verify left brace token matches.");
            Assert::AreEqual<int>(
                1,
                uut->GetStatements().size(),
                "Verify condition expression matches.");
            TestUtils::AreEqual(
                SyntaxFactory::CreateReturnStatement(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Return),
                    nullptr,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                uut->GetStatements().at(0),
                "Verify condition expression matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace),
                uut->GetCloseBraceToken(),
                "Verify right brace token matches.");
        }

        // [[Fact]]
        void GetChildrenEmpty()
        {
            auto uut = SyntaxFactory::CreateCompoundStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                {},
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

            Assert::AreEqual(
                std::vector<SyntaxNodeChild>(
                {
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace)),
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
                }),
                uut->GetChildren(),
                "Verify children match.");
        }

        // [[Fact]]
        void GetChildrenSingleStatement()
        {
            auto uut = SyntaxFactory::CreateCompoundStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                {
                    SyntaxFactory::CreateReturnStatement(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Return),
                        nullptr,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                },
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

            Assert::AreEqual(
                std::vector<SyntaxNodeChild>(
                {
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace)),
                    SyntaxNodeChild(SyntaxFactory::CreateReturnStatement(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Return),
                        nullptr,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))),
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
                }),
                uut->GetChildren(),
                "Verify children match.");
        }

        // [[Fact]]
        void OperatorEqualEmpty()
        {
            auto uut = SyntaxFactory::CreateCompoundStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                {},
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

            TestUtils::AreEqual(
                SyntaxFactory::CreateCompoundStatement(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                    {},
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
                uut,
                "Verify matches.");
        }

        // [[Fact]]
        void OperatorEqualSingleStatement()
        {
            auto uut = SyntaxFactory::CreateCompoundStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                {
                    SyntaxFactory::CreateReturnStatement(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Return),
                        nullptr,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                },
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

            TestUtils::AreEqual(
                SyntaxFactory::CreateCompoundStatement(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                    {
                        SyntaxFactory::CreateReturnStatement(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Return),
                            nullptr,
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                    },
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
                uut,
                "Verify matches.");
        }

        // [[Fact]]
        void OperatorNotEqualOpenBraceToken()
        {
            auto uut = SyntaxFactory::CreateCompoundStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                {},
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateCompoundStatement(
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::OpenBrace,
                        {
                            SyntaxFactory::CreateTrivia(" "),
                        },
                        {}),
                    {},
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
                uut,
                "Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualEmpty()
        {
            auto uut = SyntaxFactory::CreateCompoundStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                {},
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateCompoundStatement(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                    {
                        SyntaxFactory::CreateReturnStatement(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Return),
                            nullptr,
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                    },
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
                uut,
                "Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualSingleStatement()
        {
            auto uut = SyntaxFactory::CreateCompoundStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                {
                    SyntaxFactory::CreateReturnStatement(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Return),
                        nullptr,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                },
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateCompoundStatement(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                    {
                        SyntaxFactory::CreateReturnStatement(
                            SyntaxFactory::CreateKeywordToken(
                                SyntaxTokenType::Return,
                                {
                                    SyntaxFactory::CreateTrivia(" "),
                                },
                                {}),
                            nullptr,
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                    },
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
                uut,
                "Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualCloseBraceToken()
        {
            auto uut = SyntaxFactory::CreateCompoundStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                {},
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateCompoundStatement(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                    {},
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::CloseBrace,
                        {
                            SyntaxFactory::CreateTrivia(" "),
                        },
                        {})),
                uut,
                "Verify do not match.");
        }
    };
}