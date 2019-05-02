#pragma once
#include "/AST/OuterTree/Shared/SimpleIdentifierTests.h"

TestState RunOuterTreeSimpleIdentifierTests() 
 {
    auto className = "OuterTreeSimpleIdentifierTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeSimpleIdentifierTests>();
    TestState state = { 0, 0 };
    state += RunTest(className, "Initialize", [&testClass]() { testClass->Initialize(); });
    state += RunTest(className, "GetChildren", [&testClass]() { testClass->GetChildren(); });
    state += RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
    state += RunTest(className, "OperatorNotEqualIdentifier", [&testClass]() { testClass->OperatorNotEqualIdentifier(); });

    return state;
}