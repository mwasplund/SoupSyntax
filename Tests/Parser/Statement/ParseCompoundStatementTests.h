#pragma once
#include "../../TestUtils.h"
#include "../../SoupAssert.h"

namespace Soup::Syntax::UnitTests
{
    class ParseCompoundStatementTests
    {
    public:
        // [Fact]
        void EmptyCompoundStatement()
        {
            auto sourceCode = std::string("{}");
            auto actual = ParseCompoundStatement(sourceCode);

            auto expected = SyntaxFactory::CreateCompoundStatement(
                SyntaxFactory::CreateToken(SyntaxTokenType::LeftBrace, L"{"),
                {},
                SyntaxFactory::CreateToken(SyntaxTokenType::RightBrace, L"}"));

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
        }

        // [Fact]
        void CompoundStatementWithSingleStatment()
        {
            auto sourceCode = std::string("{\n return 1;\n}");
            auto actual = ParseCompoundStatement(sourceCode);

            auto expected = SyntaxFactory::CreateCompoundStatement(
                SyntaxFactory::CreateToken(SyntaxTokenType::LeftBrace, L"{"),
                {
                    SyntaxFactory::CreateReturnStatement(
                        SyntaxFactory::CreateToken(
                            SyntaxTokenType::Return,
                            L"return",
                            {
                                SyntaxFactory::CreateTrivia(L"\n", TextSpan(0, 0)),
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
                        SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";")),
                },
                SyntaxFactory::CreateToken(
                    SyntaxTokenType::RightBrace,
                    L"}",
                    {
                        SyntaxFactory::CreateTrivia(L"\n", TextSpan(0, 0)),
                    },
                    {}));

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
        }

    private:
        std::shared_ptr<const CompoundStatement> ParseCompoundStatement(std::string& sourceCode)
        {
            auto uut = TestUtils::BuildParser(sourceCode);
            auto context = uut.Parser->compoundStatement();

            // Convert the the abstract syntax tree
            auto node = uut.Visitor->visit(context)
                .as<std::shared_ptr<const SyntaxNode>>();

            return std::dynamic_pointer_cast<const CompoundStatement>(node);
        }
    };
}
