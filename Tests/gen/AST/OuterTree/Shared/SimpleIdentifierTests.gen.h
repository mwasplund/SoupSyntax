#pragma once
#include "/AST/OuterTree/Shared/SimpleIdentifierTests.h"

TestState RunOuterTreeSimpleIdentifierTests() 
 {
    auto className = "OuterTreeSimpleIdentifierTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeSimpleIdentifierTests>();
    TestState state = { 0, 0 };
    state += SoupTest::RunTest(className, "Initialize", [&testClass]() { testClass->Initialize(); });
    state += SoupTest::RunTest(className, "GetChildren", [&testClass]() { testClass->GetChildren(); });
    state += SoupTest::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
    state += SoupTest::RunTest(className, "OperatorNotEqualIdentifier", [&testClass]() { testClass->OperatorNotEqualIdentifier(); });

    return state;
}