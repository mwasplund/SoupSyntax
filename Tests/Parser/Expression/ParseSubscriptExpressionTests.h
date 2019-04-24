#pragma once
#include "TestUtils.h"
#include "SoupAssert.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
    class ParseSubscriptExpressionTests
    {
    public:
        [[Fact]]
        void SingleSubscriptExpression()
        {
            auto sourceCode = std::string("a[1]");

            auto actual = ParseSubscriptExpression(sourceCode);

            auto expected = SyntaxFactory::CreateSubscriptExpression(
                SyntaxFactory::CreateIdentifierExpression(
                    SyntaxFactory::CreateSimpleIdentifier(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

    private:
        std::shared_ptr<const SubscriptExpression> ParseSubscriptExpression(const std::string& sourceCode)
        {
            auto uut = TestUtils::BuildParser(sourceCode);
            auto context = uut.Parser->postfixExpression();

            // Convert the the abstract syntax tree
            auto node = uut.Visitor->visit(context)
                .as<std::shared_ptr<const SyntaxNode>>();

            return std::dynamic_pointer_cast<const SubscriptExpression>(node);
        }
    };
}
