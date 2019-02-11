#pragma once
#include "../../TestUtils.h"
#include "../../SoupAssert.h"

namespace Soup::Syntax::UnitTests
{
    class PostfixExpressionTests
    {
    public:
        // [Fact]
        void SingleSubscriptExpression()
        {
            auto sourceCode = std::string("a[1]");

            auto expression = std::dynamic_pointer_cast<SubscriptExpression>(
                ParsePostfixExpression(sourceCode));

            auto expected = std::make_shared<SubscriptExpression>(
                std::make_shared<SimpleNameExpression>("a"),
                std::make_shared<LiteralExpression>(LiteralType::Integer, "1"));

            Assert::AreEqual(expected, expression, "Verify matches expected.");
        }

    private:
        std::shared_ptr<SyntaxNode> ParsePostfixExpression(std::string& sourceCode)
        {
            auto uut = TestUtils::BuildParser(sourceCode);
            auto context = uut.Parser->postfixExpression();

            // Convert the the abstract syntax tree
            auto visitor = ASTVisitor();
            auto node = visitor.visit(context).as<std::shared_ptr<SyntaxNode>>();

            return node;
        }
    };
}
