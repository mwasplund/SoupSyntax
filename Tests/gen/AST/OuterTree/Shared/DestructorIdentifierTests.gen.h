#pragma once
#include "/AST/OuterTree/Shared/DestructorIdentifierTests.h"

TestState RunOuterTreeDestructorIdentifierTests() 
 {
    auto className = "OuterTreeDestructorIdentifierTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeDestructorIdentifierTests>();
    TestState state = { 0, 0 };
    state += RunTest(className, "Initialize", [&testClass]() { testClass->Initialize(); });
    state += RunTest(className, "GetChildren", [&testClass]() { testClass->GetChildren(); });
    state += RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
    state += RunTest(className, "OperatorNotEqualTildeToken", [&testClass]() { testClass->OperatorNotEqualTildeToken(); });
    state += RunTest(className, "OperatorNotEqualIdentifier", [&testClass]() { testClass->OperatorNotEqualIdentifier(); });

    return state;
}