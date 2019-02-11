#pragma once
#include "../SoupAssert.h"

namespace Soup::Syntax::UnitTests
{
    class BinaryExpressionTests
    {
    public:
        // [[Fact]]
        void InitializeSimple()
        {
            auto uut = std::make_shared<BinaryExpression>(
                BinaryOperator::Addition,
                std::make_shared<SyntaxToken>(SyntaxTokenType::Plus, "+"),
                std::make_shared<LiteralExpression>(LiteralType::Integer, "1"),
                std::make_shared<LiteralExpression>(LiteralType::Integer, "2"));

            Assert::AreEqual(BinaryOperator::Addition, uut->GetOperator(), "Verify operator matches.");
            Assert::AreEqual(SyntaxToken(SyntaxTokenType::Plus, "+"), uut->GetOperatorToken(), "Verify operator token matches.");
            Assert::AreEqual<Expression>(LiteralExpression(LiteralType::Integer, "1"), uut->GetLeftOperand(), "Verify left expression matches.");
            Assert::AreEqual<Expression>(LiteralExpression(LiteralType::Integer, "2"), uut->GetRightOperand(), "Verify right expression matches.");
        }
    };
}
