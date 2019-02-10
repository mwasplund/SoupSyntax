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
                std::make_shared<IntegerLiteralExpression>(1),
                std::make_shared<IntegerLiteralExpression>(2));

            Assert::AreEqual(BinaryOperator::Addition, uut->GetOperator(), "Verify operator matches.");
            Assert::AreEqual<Expression>(IntegerLiteralExpression(1), uut->GetLeft(), "Verify left expression matches.");
            Assert::AreEqual<Expression>(IntegerLiteralExpression(2), uut->GetRight(), "Verify right expression matches.");
        }
    };
}
