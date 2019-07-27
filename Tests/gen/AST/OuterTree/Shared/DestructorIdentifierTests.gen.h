#pragma once
#include "/AST/OuterTree/Shared/DestructorIdentifierTests.h"

TestState RunOuterTreeDestructorIdentifierTests() 
 {
    auto className = "OuterTreeDestructorIdentifierTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeDestructorIdentifierTests>();
    TestState state = { 0, 0 };
    state += SoupTest::RunTest(className, "Initialize", [&testClass]() { testClass->Initialize(); });
    state += SoupTest::RunTest(className, "GetChildren", [&testClass]() { testClass->GetChildren(); });
    state += SoupTest::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
    state += SoupTest::RunTest(className, "OperatorNotEqualTildeToken", [&testClass]() { testClass->OperatorNotEqualTildeToken(); });
    state += SoupTest::RunTest(className, "OperatorNotEqualIdentifier", [&testClass]() { testClass->OperatorNotEqualIdentifier(); });

    return state;
}