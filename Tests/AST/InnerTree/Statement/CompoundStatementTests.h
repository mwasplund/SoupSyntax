#pragma once
#include "TestUtils.h"
#include "SoupAssert.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
    class CompoundStatementTests
    {
    public:
        // [[Fact]]
        void InitializeEmpty()
        {
            auto uut = SyntaxFactory::CreateCompoundStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                SyntaxFactory::CreateSyntaxList<Statement>({}),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

            Assert::AreEqual(
                SyntaxNodeType::CompoundStatement,
                uut->GetType(),
                "Verify has correct type.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                uut->GetOpenBraceToken(),
                "Verify left brace token matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateSyntaxList<Statement>({}),
                uut->GetStatements(),
                "Verify statements matches.");
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
                SyntaxFactory::CreateSyntaxList<Statement>(
                {
                    SyntaxFactory::CreateReturnStatement(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Return),
                        nullptr,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                }),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

            Assert::AreEqual(
                SyntaxNodeType::CompoundStatement,
                uut->GetType(),
                "Verify has correct type.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                uut->GetOpenBraceToken(),
                "Verify left brace token matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateSyntaxList<Statement>(
                {
                    SyntaxFactory::CreateReturnStatement(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Return),
                        nullptr,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                }),
                uut->GetStatements(),
                "Verify statements matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace),
                uut->GetCloseBraceToken(),
                "Verify right brace token matches.");
        }

        // [[Fact]]
        void OperatorEqualEmpty()
        {
            auto uut = SyntaxFactory::CreateCompoundStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                SyntaxFactory::CreateSyntaxList<Statement>({}),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

            TestUtils::AreEqual(
                SyntaxFactory::CreateCompoundStatement(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                    SyntaxFactory::CreateSyntaxList<Statement>({}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
                uut,
                "Verify matches.");
        }

        // [[Fact]]
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
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

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

        // [[Fact]]
        void OperatorNotEqualOpenBraceToken()
        {
            auto uut = SyntaxFactory::CreateCompoundStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                SyntaxFactory::CreateSyntaxList<Statement>({}),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

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

        // [[Fact]]
        void OperatorNotEqualEmpty()
        {
            auto uut = SyntaxFactory::CreateCompoundStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                SyntaxFactory::CreateSyntaxList<Statement>({}),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

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

        // [[Fact]]
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
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

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

        // [[Fact]]
        void OperatorNotEqualCloseBraceToken()
        {
            auto uut = SyntaxFactory::CreateCompoundStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                SyntaxFactory::CreateSyntaxList<Statement>({}),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

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
