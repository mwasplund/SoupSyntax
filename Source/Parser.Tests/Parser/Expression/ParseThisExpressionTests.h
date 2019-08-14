#pragma once
#include "TestUtils.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
    class ParseThisExpressionTests
    {
    public:
        [[Fact]]
        void SingleThisExpression()
        {
            auto sourceCode = std::string("this");
            auto actual = ParseThisExpression(sourceCode);

            auto expected = SyntaxFactory::CreateThisExpression(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::This));

            TestUtils::AreEqual(expected, actual, "Verify node matches.");
        }

    private:
        std::shared_ptr<const ThisExpression> ParseThisExpression(const std::string& sourceCode)
        {
            auto uut = TestUtils::BuildParser(sourceCode);
            auto context = uut.Parser->primaryExpression();

            // Convert the the abstract syntax tree
            auto node = uut.Visitor->visit(context)
                .as<std::shared_ptr<const SyntaxNode>>();

            return std::dynamic_pointer_cast<const ThisExpression>(node);
        }
    };
}
