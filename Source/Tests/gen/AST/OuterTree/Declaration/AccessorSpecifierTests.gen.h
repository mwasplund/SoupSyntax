#pragma once
#include "/AST/OuterTree/Declaration/AccessorSpecifierTests.h"

TestState RunOuterTreeAccessorSpecifierTests() 
 {
    auto className = "OuterTreeAccessorSpecifierTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeAccessorSpecifierTests>();
    TestState state = { 0, 0 };
    state += SoupTest::RunTest(className, "Initialize", [&testClass]() { testClass->Initialize(); });
    state += SoupTest::RunTest(className, "GetChildren", [&testClass]() { testClass->GetChildren(); });
    state += SoupTest::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
    state += SoupTest::RunTest(className, "OperatorNotEqualAccessorToken", [&testClass]() { testClass->OperatorNotEqualAccessorToken(); });
    state += SoupTest::RunTest(className, "OperatorNotEqualColonToken", [&testClass]() { testClass->OperatorNotEqualColonToken(); });

    return state;
}