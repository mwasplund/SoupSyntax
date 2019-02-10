#pragma once
#include "../../TestUtils.h"
#include "../../SoupAssert.h"

namespace Soup::Syntax::UnitTests
{
    class ParserLiteralExpressionTests
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
            auto uut = TestUtils::BuildParser(sourceCode);
            auto context = uut.Parser->literal();

            // Convert the the abstract syntax tree
            auto visitor = ASTVisitor();
            auto literalNode = std::dynamic_pointer_cast<LiteralExpression>(
                visitor.visit(context).as<std::shared_ptr<SyntaxNode>>());

            Assert::AreEqual(expectedType, literalNode->GetType(), "Verify type matches expected.");
            Assert::AreEqual(sourceCode, literalNode->GetValue(), "Verify value matches entire source.");
        }
    };
}
