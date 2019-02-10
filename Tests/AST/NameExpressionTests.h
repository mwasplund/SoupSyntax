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
        void InitializeGlobalQualifiedNameExpression()
        {
            auto uut = std::make_shared<QualifiedNameExpression>(
                nullptr,
                std::make_shared<SimpleNameExpression>("Right"));

            Assert::IsFalse(uut->HasLeft(), "Verify no left identifier.");
            Assert::AreEqual(std::string("Right"), uut->GetRight().GetIdentifier(), "Verify right identifier matches.");
        }

        // [[Fact]]
        void InitializeSingleQualifiedNameExpression()
        {
            auto uut = std::make_shared<QualifiedNameExpression>(
                std::make_shared<SimpleNameExpression>("Left"),
                std::make_shared<SimpleNameExpression>("Right"));

            Assert::IsTrue(uut->HasLeft(), "Verify has left identifier.");
            auto left = dynamic_cast<const SimpleNameExpression&>(uut->GetLeft());
            auto right = uut->GetRight();

            Assert::AreEqual(std::string("Left"), left.GetIdentifier(), "Verify left identifier matches.");
            Assert::AreEqual(std::string("Right"), right.GetIdentifier(), "Verify right identifier matches.");
        }

        // [[Fact]]
        void InitializeGlobalDoubleQualifiedNameExpression()
        {
            auto uut = std::make_shared<QualifiedNameExpression>(
                std::make_shared<QualifiedNameExpression>(
                    nullptr,
                    std::make_shared<SimpleNameExpression>("Left")),
                std::make_shared<SimpleNameExpression>("Right"));

            Assert::IsTrue(uut->HasLeft(), "Verify has left identifier.");
            auto left = dynamic_cast<const QualifiedNameExpression&>(uut->GetLeft());
            auto right = uut->GetRight();

            Assert::IsFalse(left.HasLeft(), "Verify no double left identifier.");
            Assert::AreEqual(std::string("Left"), left.GetRight().GetIdentifier(), "Verify left identifier matches.");
            Assert::AreEqual(std::string("Right"), right.GetIdentifier(), "Verify right identifier matches.");
        }
    };
}
