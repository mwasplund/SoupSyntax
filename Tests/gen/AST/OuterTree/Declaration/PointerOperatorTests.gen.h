#pragma once
#include "/AST/OuterTree/Declaration/PointerOperatorTests.h"

TestState RunOuterTreePointerOperatorTests() 
 {
    auto className = "OuterTreePointerOperatorTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreePointerOperatorTests>();
    TestState state = { 0, 0 };
    state += RunTest(className, "Initialize", [&testClass]() { testClass->Initialize(); });
    state += RunTest(className, "GetChildren", [&testClass]() { testClass->GetChildren(); });
    state += RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
    state += RunTest(className, "OperatorNotEqualOperatorToken", [&testClass]() { testClass->OperatorNotEqualOperatorToken(); });

    return state;
}