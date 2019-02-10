#pragma once
#include "../SoupAssert.h"

namespace Soup::Syntax::UnitTests
{
    class NameExpressionTests
    {
    public:
        // [[Fact]]
        void InitializeSimpleNameExpression()
        {
            auto uut = std::make_shared<SimpleNameExpression>("name");

            Assert::AreEqual(std::string("name"), uut->GetIdentifier(), "Verify identifier matches.");
        }
        
        // [[Fact]]
        void InitializeSingleQualifiedNameExpression()
        {
            auto uut = std::make_shared<QualifiedNameExpression>(
                std::make_shared<SimpleNameExpression>("Left"),
                std::make_shared<SimpleNameExpression>("Right"));

            Assert::AreEqual(std::string("Left"), dynamic_cast<const SimpleNameExpression&>(uut->GetLeft()).GetIdentifier(), "Verify left identifier matches.");
            Assert::AreEqual(std::string("Right"), uut->GetRight().GetIdentifier(), "Verify right identifier matches.");
        }
    };
}
