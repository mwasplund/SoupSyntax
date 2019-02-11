#pragma once
#include "../SoupAssert.h"

namespace Soup::Syntax::UnitTests
{
    class SubscriptExpressionTests
    {
    public:
        // [[Fact]]
        void InitializeSimple()
        {
            auto uut = std::make_shared<SubscriptExpression>(
                std::make_shared<SimpleNameExpression>("a"),
                std::make_shared<LiteralExpression>(LiteralType::Integer, "2"));

            Assert::AreEqual<Expression>(SimpleNameExpression("a"), uut->GetLeft(), "Verify left expression matches.");
            Assert::AreEqual<Expression>(LiteralExpression(LiteralType::Integer, "2"), uut->GetRight(), "Verify right expression matches.");
        }
    };
}
