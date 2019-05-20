#pragma once
#include "/AST/OuterTree/Declaration/PointerOperatorTests.h"

TestState RunOuterTreePointerOperatorTests() 
 {
    auto className = "OuterTreePointerOperatorTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreePointerOperatorTests>();
    TestState state = { 0, 0 };
    state += SoupTest::RunTest(className, "Initialize", [&testClass]() { testClass->Initialize(); });
    state += SoupTest::RunTest(className, "GetChildren", [&testClass]() { testClass->GetChildren(); });
    state += SoupTest::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
    state += SoupTest::RunTest(className, "OperatorNotEqualOperatorToken", [&testClass]() { testClass->OperatorNotEqualOperatorToken(); });

    return state;
}