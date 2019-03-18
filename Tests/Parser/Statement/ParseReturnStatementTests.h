#pragma once
#include "../../TestUtils.h"
#include "../../SoupAssert.h"

namespace Soup::Syntax::UnitTests
{
    class ParseReturnStatementTests
    {
    public:
        // [Fact]
        void ReturnNoExpression()
        {
            auto sourceCode = std::string("return;");
            auto actual = ParseReturnStatement(sourceCode);

            auto expected = SyntaxFactory::CreateReturnStatement(
                SyntaxFactory::CreateToken(SyntaxTokenType::Return, L"return"),
                nullptr,
                SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";"));

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
        }

        // [Fact]
        void ReturnLiteralExpression()
        {
            auto sourceCode = std::string("return 1;");
            auto actual = ParseReturnStatement(sourceCode);

            auto expected = SyntaxFactory::CreateReturnStatement(
                SyntaxFactory::CreateToken(SyntaxTokenType::Return, L"return"),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateToken(
                        SyntaxTokenType::IntegerLiteral,
                        L"1",
                        {
                            SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 0))
                        },
                        {})),
                SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";"));

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
        }

        // [Fact]
        void ReturnSimpleNameExpression()
        {
            auto sourceCode = std::string("return a;");
            auto actual = ParseReturnStatement(sourceCode);

            auto expected = SyntaxFactory::CreateReturnStatement(
                SyntaxFactory::CreateToken(SyntaxTokenType::Return, L"return"),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(
                        SyntaxTokenType::Identifier,
                        L"a",
                        {
                            SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 0))
                        },
                        {})),
                SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";"));

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
        }

    private:
        std::shared_ptr<const ReturnStatement> ParseReturnStatement(std::string& sourceCode)
        {
            auto uut = TestUtils::BuildParser(sourceCode);
            auto context = uut.Parser->jumpStatement();

            // Convert the the abstract syntax tree
            auto node = uut.Visitor->visit(context)
                .as<std::shared_ptr<const SyntaxNode>>();

            return std::dynamic_pointer_cast<const ReturnStatement>(node);
        }
    };
}
