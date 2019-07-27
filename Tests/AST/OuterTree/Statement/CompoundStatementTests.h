#pragma once
#include "TestUtils.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
    class OuterTreeCompoundStatementTests
    {
    public:
        [[Fact]]
        void InitializeEmpty()
        {
            auto uut = SyntaxFactory::CreateCompoundStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                SyntaxFactory::CreateSyntaxList<Statement>({}),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace))->CreateOuter(nullptr);

            Assert::AreEqual(
                SyntaxNodeType::CompoundStatement,
                uut->GetType(),
                "Verify has correct type.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                uut->GetOpenBraceToken(),
                "Verify left brace token matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateSyntaxList<Statement>({}),
                uut->GetStatements(),
                "Verify statements matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace),
                uut->GetCloseBraceToken(),
                "Verify right brace token matches.");
        }

        [[Fact]]
        void InitializeSingleStatement()
        {
            auto uut = SyntaxFactory::CreateCompoundStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                SyntaxFactory::CreateSyntaxList<Statement>(
                {
                    SyntaxFactory::CreateReturnStatement(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Return),
                        nullptr,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                }),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace))->CreateOuter(nullptr);

            Assert::AreEqual(
                SyntaxNodeType::CompoundStatement,
                uut->GetType(),
                "Verify has correct type.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                uut->GetOpenBraceToken(),
                "Verify left brace token matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateSyntaxList<Statement>(
                {
                    SyntaxFactory::CreateReturnStatement(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Return),
                        nullptr,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                }),
                uut->GetStatements(),
                "Verify statments matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace),
                uut->GetCloseBraceToken(),
                "Verify right brace token matches.");
        }

        [[Fact]]
        void GetChildrenEmpty()
        {
            auto uut = SyntaxFactory::CreateCompoundStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                SyntaxFactory::CreateSyntaxList<Statement>({}),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace))->CreateOuter(nullptr);

            Assert::AreEqual(
                std::vector<OuterTree::SyntaxNodeChild>(
                {
                    TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace)),
                    TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
                }),
                uut->GetChildren(),
                "Verify children match.");
        }

        [[Fact]]
        void GetChildrenSingleStatement()
        {
            auto uut = SyntaxFactory::CreateCompoundStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                SyntaxFactory::CreateSyntaxList<Statement>(
                {
                    SyntaxFactory::CreateReturnStatement(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Return),
                        nullptr,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                }),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace))->CreateOuter(nullptr);

            Assert::AreEqual(
                std::vector<OuterTree::SyntaxNodeChild>(
                {
                    TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace)),
                    TestUtils::CreateChild(SyntaxFactory::CreateReturnStatement(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Return),
                        nullptr,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))),
                    TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
                }),
                uut->GetChildren(),
                "Verify children match.");
        }

        [[Fact]]
        void OperatorEqualEmpty()
        {
            auto uut = SyntaxFactory::CreateCompoundStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                SyntaxFactory::CreateSyntaxList<Statement>({}),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace))->CreateOuter(nullptr);

            TestUtils::AreEqual(
                SyntaxFactory::CreateCompoundStatement(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                    SyntaxFactory::CreateSyntaxList<Statement>({}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
                uut,
                "Verify matches.");
        }

        [[Fact]]
        void OperatorEqualSingleStatement()
        {
            auto uut = SyntaxFactory::CreateCompoundStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                SyntaxFactory::CreateSyntaxList<Statement>(
                {
                    SyntaxFactory::CreateReturnStatement(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Return),
                        nullptr,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                }),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace))->CreateOuter(nullptr);

            TestUtils::AreEqual(
                SyntaxFactory::CreateCompoundStatement(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                    SyntaxFactory::CreateSyntaxList<Statement>(
                    {
                        SyntaxFactory::CreateReturnStatement(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Return),
                            nullptr,
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                    }),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
                uut,
                "Verify matches.");
        }

        [[Fact]]
        void OperatorNotEqualOpenBraceToken()
        {
            auto uut = SyntaxFactory::CreateCompoundStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                SyntaxFactory::CreateSyntaxList<Statement>({}),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace))->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateCompoundStatement(
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::OpenBrace,
                        {
                            SyntaxFactory::CreateTrivia(" "),
                        },
                        {}),
                    SyntaxFactory::CreateSyntaxList<Statement>({}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
                uut,
                "Verify do not match.");
        }

        [[Fact]]
        void OperatorNotEqualEmpty()
        {
            auto uut = SyntaxFactory::CreateCompoundStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                SyntaxFactory::CreateSyntaxList<Statement>({}),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace))->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateCompoundStatement(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                    SyntaxFactory::CreateSyntaxList<Statement>(
                    {
                        SyntaxFactory::CreateReturnStatement(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Return),
                            nullptr,
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                    }),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
                uut,
                "Verify do not match.");
        }

        [[Fact]]
        void OperatorNotEqualSingleStatement()
        {
            auto uut = SyntaxFactory::CreateCompoundStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                SyntaxFactory::CreateSyntaxList<Statement>(
                {
                    SyntaxFactory::CreateReturnStatement(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Return),
                        nullptr,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                }),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace))->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateCompoundStatement(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                    SyntaxFactory::CreateSyntaxList<Statement>(
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
                    }),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
                uut,
                "Verify do not match.");
        }

        [[Fact]]
        void OperatorNotEqualCloseBraceToken()
        {
            auto uut = SyntaxFactory::CreateCompoundStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                SyntaxFactory::CreateSyntaxList<Statement>({}),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace))->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateCompoundStatement(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                    SyntaxFactory::CreateSyntaxList<Statement>({}),
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
