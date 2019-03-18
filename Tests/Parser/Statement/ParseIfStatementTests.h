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
                SyntaxFactory::CreateToken(SyntaxTokenType::If, L"if"),
                SyntaxFactory::CreateToken(SyntaxTokenType::LeftParenthesis, L"("),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateToken(SyntaxTokenType::RightParenthesis, L")"),
                SyntaxFactory::CreateEmptyStatement(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";")),
                nullptr);

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
        }

        // [Fact]
        void IfEmptyStatementWithElseClause()
        {
            auto sourceCode = std::string("if(a);else;");
            auto actual = ParseIfStatement(sourceCode);

            auto expected = SyntaxFactory::CreateIfStatement(
                SyntaxFactory::CreateToken(SyntaxTokenType::If, L"if"),
                SyntaxFactory::CreateToken(SyntaxTokenType::LeftParenthesis, L"("),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateToken(SyntaxTokenType::RightParenthesis, L")"),
                SyntaxFactory::CreateEmptyStatement(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";")),
                SyntaxFactory::CreateElseClause(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Else, L"else"),
                    SyntaxFactory::CreateEmptyStatement(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";"))));

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
        }

        // [Fact]
        void IfStatementReturnWithElseClause()
        {
            auto sourceCode = std::string("if ( a ) \r\n return 1 ; \r\n else \r\n return 2 ; ");
            auto actual = ParseIfStatement(sourceCode);

            auto expected = SyntaxFactory::CreateIfStatement(
                SyntaxFactory::CreateToken(SyntaxTokenType::If, L"if"),
                SyntaxFactory::CreateToken(
                    SyntaxTokenType::LeftParenthesis,
                    L"(",
                    {
                        SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 0))
                    },
                    {}),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(
                        SyntaxTokenType::Identifier,
                        L"a",
                        {
                            SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 0))
                        },
                        {})),
                SyntaxFactory::CreateToken(
                    SyntaxTokenType::RightParenthesis,
                    L")",
                    {
                        SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 0))
                    },
                    {
                        SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 0))
                    }),
                SyntaxFactory::CreateReturnStatement(
                    SyntaxFactory::CreateToken(
                        SyntaxTokenType::Return,
                        L"return",
                        {
                            SyntaxFactory::CreateTrivia(L"\r\n", TextSpan(0, 0)),
                            SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 0)),
                        },
                        {}),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateToken(
                            SyntaxTokenType::IntegerLiteral,
                            L"1",
                            {
                                SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 0))
                            },
                            {})),
                    SyntaxFactory::CreateToken(
                        SyntaxTokenType::Semicolon,
                        L";",
                        {
                            SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 0))
                        },
                        {
                            SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 0))
                        })),
                SyntaxFactory::CreateElseClause(
                    SyntaxFactory::CreateToken(
                        SyntaxTokenType::Else,
                        L"else",
                        {
                            SyntaxFactory::CreateTrivia(L"\r\n", TextSpan(0, 0)),
                            SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 0)),
                        },
                        {
                            SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 0))
                        }),
                    SyntaxFactory::CreateReturnStatement(
                        SyntaxFactory::CreateToken(
                            SyntaxTokenType::Return,
                            L"return",
                            {
                                SyntaxFactory::CreateTrivia(L"\r\n", TextSpan(0, 0)),
                                SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 0)),
                            },
                            {}),
                        SyntaxFactory::CreateLiteralExpression(
                            LiteralType::Integer,
                            SyntaxFactory::CreateToken(
                                SyntaxTokenType::IntegerLiteral,
                                L"2",
                                {
                                    SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 0))
                                },
                                {})),
                        SyntaxFactory::CreateToken(
                            SyntaxTokenType::Semicolon,
                            L";",
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
