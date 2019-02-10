#pragma once
#include "../SoupAssert.h"

namespace Soup::Syntax::UnitTests
{
    class LiteralExressionTests
    {
    public:
        // [[Fact]]
        void InitializeSimple()
        {
            auto uut = std::make_shared<LiteralExpression>(LiteralType::Integer, "1");

            Assert::AreEqual(LiteralType::Integer, uut->GetType(), "Verify type matches.");
            Assert::AreEqual(std::string("1"), uut->GetValue(), "Verify value matches.");
        }
    };
}
