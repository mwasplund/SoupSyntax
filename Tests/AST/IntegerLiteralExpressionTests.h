#pragma once
#include "../SoupAssert.h"

namespace Soup::Syntax::UnitTests
{
    class IntegerLiteralExressionTests
    {
    public:
        // [[Fact]]
        void InitializeSimple()
        {
            auto uut = std::make_shared<IntegerLiteralExpression>(1);

            Assert::AreEqual(1, uut->GetValue(), "Verify value matches.");
        }
    };
}
