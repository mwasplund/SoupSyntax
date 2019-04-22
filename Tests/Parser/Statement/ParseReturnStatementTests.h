#pragma once
#include "TestUtils.h"
#include "SoupAssert.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
    class ParseReturnStatementTests
    {
    public:
        [[Fact]]
        void ReturnNoExpression()
        {
            auto sourceCode = std::string("return;");
            auto actual = ParseReturnStatement(sourceCode);

            auto expected = SyntaxFactory::CreateReturnStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Return),
                nullptr,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        [[Fact]]
        void ReturnLiteralExpression()
        {
            auto sourceCode = std::string("return 1;");
            auto actual = ParseReturnStatement(sourceCode);

            auto expected = SyntaxFactory::CreateReturnStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Return),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(
                        SyntaxTokenType::IntegerLiteral,
                        "1",
                        {
                            SyntaxFactory::CreateTrivia(" ")
                        },
                        {})),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        [[Fact]]
        void ReturnIdentifierExpression()
        {
            auto sourceCode = std::string("return a;");
            auto actual = ParseReturnStatement(sourceCode);

            auto expected = SyntaxFactory::CreateReturnStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Return),
                SyntaxFactory::CreateIdentifierExpression(
                    SyntaxFactory::CreateSimpleIdentifier(
                        SyntaxFactory::CreateUniqueToken(
                            SyntaxTokenType::Identifier,
                            "a",
                            {
                                SyntaxFactory::CreateTrivia(" ")
                            },
                            {}))),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
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
