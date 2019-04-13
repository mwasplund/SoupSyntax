#pragma once
#include "TestUtils.h"
#include "SoupAssert.h"

namespace Soup::Syntax::UnitTests
{
    class ParseInvocationExpressionTests
    {
    public:
        // [Fact]
        void SimpleInvocation()
        {
            auto sourceCode = std::string("a()");

            auto actual = ParseInvocationExpression(sourceCode);

            auto expected = SyntaxFactory::CreateInvocationExpression(
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                SyntaxFactory::CreateSyntaxSeparatorList<Expression>(
                    std::vector<std::shared_ptr<const Expression>>(),
                    std::vector<std::shared_ptr<const SyntaxToken>>()),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // [Fact]
        void ComplexInvocation()
        {
            auto sourceCode = std::string("a(b, c)");

            auto actual = ParseInvocationExpression(sourceCode);

            auto expected = SyntaxFactory::CreateInvocationExpression(
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                SyntaxFactory::CreateSyntaxSeparatorList<Expression>(
                    std::vector<std::shared_ptr<const Expression>>(
                    {
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")),
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(
                                SyntaxTokenType::Identifier,
                                "c",
                                {
                                    SyntaxFactory::CreateTrivia(" "),
                                },
                                {}))
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma)
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

    private:
        std::shared_ptr<const InvocationExpression> ParseInvocationExpression(std::string& sourceCode)
        {
            auto uut = TestUtils::BuildParser(sourceCode);
            auto context = uut.Parser->postfixExpression();

            // Convert the the abstract syntax tree
            auto node = uut.Visitor->visit(context)
                .as<std::shared_ptr<const SyntaxNode>>();

            return std::dynamic_pointer_cast<const InvocationExpression>(node);
        }
    };
}
