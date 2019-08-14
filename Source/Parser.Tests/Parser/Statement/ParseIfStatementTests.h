#pragma once
#include "TestUtils.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
    class ParseIfStatementTests
    {
    public:
        [[Fact]]
        void IfEmptyStatement()
        {
            auto sourceCode = std::string("if(a);");
            auto actual = ParseIfStatement(sourceCode);

            auto expected = SyntaxFactory::CreateIfStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                SyntaxFactory::CreateIdentifierExpression(
                    SyntaxFactory::CreateSimpleIdentifier(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis),
                SyntaxFactory::CreateEmptyStatement(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                nullptr);

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        [[Fact]]
        void IfEmptyStatementWithElseClause()
        {
            auto sourceCode = std::string("if(a);else;");
            auto actual = ParseIfStatement(sourceCode);

            auto expected = SyntaxFactory::CreateIfStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                SyntaxFactory::CreateIdentifierExpression(
                    SyntaxFactory::CreateSimpleIdentifier(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis),
                SyntaxFactory::CreateEmptyStatement(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                SyntaxFactory::CreateElseClause(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Else),
                    SyntaxFactory::CreateEmptyStatement(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        [[Fact]]
        void IfStatementReturnWithElseClause()
        {
            auto sourceCode = std::string("if ( a ) \r\n return 1 ; \r\n else \r\n return 2 ; ");
            auto actual = ParseIfStatement(sourceCode);

            auto expected = SyntaxFactory::CreateIfStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If),
                SyntaxFactory::CreateKeywordToken(
                    SyntaxTokenType::OpenParenthesis,
                    {
                        SyntaxFactory::CreateTrivia(" ")
                    },
                    {}),
                SyntaxFactory::CreateIdentifierExpression(
                    SyntaxFactory::CreateSimpleIdentifier(
                        SyntaxFactory::CreateUniqueToken(
                            SyntaxTokenType::Identifier,
                            "a",
                            {
                                SyntaxFactory::CreateTrivia(" ")
                            },
                            {}))),
                SyntaxFactory::CreateKeywordToken(
                    SyntaxTokenType::CloseParenthesis,
                    {
                        SyntaxFactory::CreateTrivia(" ")
                    },
                    {
                        SyntaxFactory::CreateTrivia(" ")
                    }),
                SyntaxFactory::CreateReturnStatement(
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::Return,
                        {
                            SyntaxFactory::CreateTrivia("\r\n"),
                            SyntaxFactory::CreateTrivia(" "),
                        },
                        {}),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateUniqueToken(
                            SyntaxTokenType::IntegerLiteral,
                            "1",
                            {
                                SyntaxFactory::CreateTrivia(" ")
                            },
                            {})),
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::Semicolon,
                        {
                            SyntaxFactory::CreateTrivia(" ")
                        },
                        {
                            SyntaxFactory::CreateTrivia(" ")
                        })),
                SyntaxFactory::CreateElseClause(
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::Else,
                        {
                            SyntaxFactory::CreateTrivia("\r\n"),
                            SyntaxFactory::CreateTrivia(" "),
                        },
                        {
                            SyntaxFactory::CreateTrivia(" ")
                        }),
                    SyntaxFactory::CreateReturnStatement(
                        SyntaxFactory::CreateKeywordToken(
                            SyntaxTokenType::Return,
                            {
                                SyntaxFactory::CreateTrivia("\r\n"),
                                SyntaxFactory::CreateTrivia(" "),
                            },
                            {}),
                        SyntaxFactory::CreateLiteralExpression(
                            LiteralType::Integer,
                            SyntaxFactory::CreateUniqueToken(
                                SyntaxTokenType::IntegerLiteral,
                                "2",
                                {
                                    SyntaxFactory::CreateTrivia(" ")
                                },
                                {})),
                        SyntaxFactory::CreateKeywordToken(
                            SyntaxTokenType::Semicolon,
                            {
                                SyntaxFactory::CreateTrivia(" ")
                            },
                            {}))));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

    private:
        std::shared_ptr<const IfStatement> ParseIfStatement(const std::string& sourceCode)
        {
            auto uut = TestUtils::BuildParser(sourceCode);
            auto context = uut.Parser->selectionStatement();

            // Convert the the abstract syntax tree
            auto node = uut.Visitor->visit(context)
                .as<std::shared_ptr<const SyntaxNode>>();

            return std::dynamic_pointer_cast<const IfStatement>(node);
        }
    };
}
