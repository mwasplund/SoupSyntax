#pragma once
#include "../../TestUtils.h"
#include "../../SoupAssert.h"

namespace Soup::Syntax::UnitTests
{
    class PrimaryExpressionTests
    {
    public:
        // [Theory]
        // [InlineData("0", LiteralType::Integer)]
        // [InlineData("1", LiteralType::Integer)]
        // [[InlineData("0.0f", LiteralType::Floating)]]
        // [[InlineData("'1'", LiteralType::Character)]]
        // [[InlineData("nullptr, LiteralType::Pointer)]]
        // [[InlineData("\" \"", LiteralType::String)]]
        // [[InlineData("2h", LiteralType::UserDefined)]]
        void SingleLiteralType(std::string sourceCode, LiteralType expectedType)
        {
            auto expression = std::dynamic_pointer_cast<LiteralExpression>(
                ParsePrimaryExpression(sourceCode));

            Assert::NotNull(expression, "Verify cast.");
            Assert::AreEqual(expectedType, expression->GetType(), "Verify type matches expected.");
            Assert::AreEqual(sourceCode, expression->GetValue(), "Verify value matches entire source.");
        }

        // [Fact]
        void SingleThisExpression()
        {
            auto sourceCode = std::string("this");
            auto expression = std::dynamic_pointer_cast<ThisExpression>(
                ParsePrimaryExpression(sourceCode));

            Assert::NotNull(expression, "Verify cast.");
        }

    private:
        std::shared_ptr<SyntaxNode> ParsePrimaryExpression(std::string& sourceCode)
        {
            auto uut = TestUtils::BuildParser(sourceCode);
            auto context = uut.Parser->primaryExpression();

            // Convert the the abstract syntax tree
            auto visitor = ASTVisitor();
            auto node = visitor.visit(context).as<std::shared_ptr<SyntaxNode>>();

            return node;
        }
    };
}
