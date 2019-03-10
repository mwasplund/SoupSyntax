#pragma once
#include "../../TestUtils.h"
#include "../../SoupAssert.h"

namespace Soup::Syntax::UnitTests
{
    class ParseSubscriptExpressionTests
    {
    public:
        // [Fact]
        void SingleSubscriptExpression()
        {
            auto sourceCode = std::string("a[1]");

            auto actual = ParseSubscriptExpression(sourceCode);

            auto expected = SyntaxFactory::CreateSubscriptExpression(
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateToken(SyntaxTokenType::LeftBracket, L"["),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"1")),
                SyntaxFactory::CreateToken(SyntaxTokenType::RightBracket, L"]"));

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
        }

    private:
        std::shared_ptr<const SubscriptExpression> ParseSubscriptExpression(std::string& sourceCode)
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
