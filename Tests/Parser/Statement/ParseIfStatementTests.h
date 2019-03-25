#pragma once
#include "../../TestUtils.h"
#include "../../SoupAssert.h"

namespace Soup::Syntax::UnitTests
{
    class ParseIfStatementTests
    {
    public:
        // [Fact]
        void IfEmptyStatement()
        {
            auto sourceCode = std::string("if(a);");
            auto actual = ParseIfStatement(sourceCode);

            auto expected = SyntaxFactory::CreateIfStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftParenthesis),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightParenthesis),
                SyntaxFactory::CreateEmptyStatement(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                nullptr);

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
        }

        // [Fact]
        void IfEmptyStatementWithElseClause()
        {
            auto sourceCode = std::string("if(a);else;");
            auto actual = ParseIfStatement(sourceCode);

            auto expected = SyntaxFactory::CreateIfStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftParenthesis),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightParenthesis),
                SyntaxFactory::CreateEmptyStatement(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                SyntaxFactory::CreateElseClause(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Else),
                    SyntaxFactory::CreateEmptyStatement(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))));

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
        }

        // [Fact]
        void IfStatementReturnWithElseClause()
        {
            auto sourceCode = std::string("if ( a ) \r\n return 1 ; \r\n else \r\n return 2 ; ");
            auto actual = ParseIfStatement(sourceCode);

            auto expected = SyntaxFactory::CreateIfStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If),
                SyntaxFactory::CreateKeywordToken(
                    SyntaxTokenType::LeftParenthesis,
                    {
                        SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 0))
                    },
                    {}),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(
                        SyntaxTokenType::Identifier,
                        L"a",
                        {
                            SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 0))
                        },
                        {})),
                SyntaxFactory::CreateKeywordToken(
                    SyntaxTokenType::RightParenthesis,
                    {
                        SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 0))
                    },
                    {
                        SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 0))
                    }),
                SyntaxFactory::CreateReturnStatement(
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::Return,
                        {
                            SyntaxFactory::CreateTrivia(L"\r\n", TextSpan(0, 0)),
                            SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 0)),
                        },
                        {}),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateUniqueToken(
                            SyntaxTokenType::IntegerLiteral,
                            L"1",
                            {
                                SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 0))
                            },
                            {})),
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::Semicolon,
                        {
                            SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 0))
                        },
                        {
                            SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 0))
                        })),
                SyntaxFactory::CreateElseClause(
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::Else,
                        {
                            SyntaxFactory::CreateTrivia(L"\r\n", TextSpan(0, 0)),
                            SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 0)),
                        },
                        {
                            SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 0))
                        }),
                    SyntaxFactory::CreateReturnStatement(
                        SyntaxFactory::CreateKeywordToken(
                            SyntaxTokenType::Return,
                            {
                                SyntaxFactory::CreateTrivia(L"\r\n", TextSpan(0, 0)),
                                SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 0)),
                            },
                            {}),
                        SyntaxFactory::CreateLiteralExpression(
                            LiteralType::Integer,
                            SyntaxFactory::CreateUniqueToken(
                                SyntaxTokenType::IntegerLiteral,
                                L"2",
                                {
                                    SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 0))
                                },
                                {})),
                        SyntaxFactory::CreateKeywordToken(
                            SyntaxTokenType::Semicolon,
                            {
                                SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 0))
                            },
                            {}))));

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
        }

    private:
        std::shared_ptr<const IfStatement> ParseIfStatement(std::string& sourceCode)
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
