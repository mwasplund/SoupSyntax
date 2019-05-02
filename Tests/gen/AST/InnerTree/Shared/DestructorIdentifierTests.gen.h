#pragma once
#include "/AST/InnerTree/Shared/DestructorIdentifierTests.h"

TestState RunInnerTreeDestructorIdentifierTests() 
 {
    auto className = "InnerTreeDestructorIdentifierTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeDestructorIdentifierTests>();
    TestState state = { 0, 0 };
    state += RunTest(className, "Initialize", [&testClass]() { testClass->Initialize(); });
    state += RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
    state += RunTest(className, "OperatorNotEqualTildeToken", [&testClass]() { testClass->OperatorNotEqualTildeToken(); });
    state += RunTest(className, "OperatorNotEqualIdentifier", [&testClass]() { testClass->OperatorNotEqualIdentifier(); });

    return state;
}