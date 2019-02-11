#pragma once
#include "../SoupAssert.h"

namespace Soup::Syntax::UnitTests
{
    class UnaryExpressionTests
    {
    public:
        // [[Fact]]
        void InitializeSimple()
        {
            auto uut = std::make_shared<UnaryExpression>(
                UnaryOperator::PostIncrement,
                std::make_shared<SyntaxToken>(SyntaxTokenType::DoublePlus, "++"),
                std::make_shared<LiteralExpression>(LiteralType::Integer, "1"));

            Assert::AreEqual(UnaryOperator::PostIncrement, uut->GetOperator(), "Verify operator matches.");
            Assert::AreEqual(SyntaxToken(SyntaxTokenType::DoublePlus, "++"), uut->GetOperatorToken(), "Verify operator token matches.");
            Assert::AreEqual<Expression>(LiteralExpression(LiteralType::Integer, "1"), uut->GetOperand(), "Verify left expression matches.");
        }
    };
}
