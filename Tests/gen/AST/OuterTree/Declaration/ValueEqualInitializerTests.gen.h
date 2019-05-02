#pragma once
#include "/AST/OuterTree/Declaration/ValueEqualInitializerTests.h"

TestState RunOuterTreeValueEqualInitializerTests() 
 {
    auto className = "OuterTreeValueEqualInitializerTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeValueEqualInitializerTests>();
    TestState state = { 0, 0 };
    state += RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
    state += RunTest(className, "GetChildren", [&testClass]() { testClass->GetChildren(); });
    state += RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
    state += RunTest(className, "OperatorNotEqualEqualToken", [&testClass]() { testClass->OperatorNotEqualEqualToken(); });
    state += RunTest(className, "OperatorNotEqualExpression", [&testClass]() { testClass->OperatorNotEqualExpression(); });

    return state;
}