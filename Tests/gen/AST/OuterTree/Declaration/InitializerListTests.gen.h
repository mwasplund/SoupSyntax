#pragma once
#include "/AST/OuterTree/Declaration/InitializerListTests.h"

TestState RunOuterTreeInitializerListTests() 
 {
    auto className = "OuterTreeInitializerListTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeInitializerListTests>();
    TestState state = { 0, 0 };
    state += RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
    state += RunTest(className, "GetChildren", [&testClass]() { testClass->GetChildren(); });
    state += RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
    state += RunTest(className, "OperatorNotEqualOpenParenthesisToken", [&testClass]() { testClass->OperatorNotEqualOpenParenthesisToken(); });
    state += RunTest(className, "OperatorNotEqualValues", [&testClass]() { testClass->OperatorNotEqualValues(); });
    state += RunTest(className, "OperatorNotEqualCloseParenthesisToken", [&testClass]() { testClass->OperatorNotEqualCloseParenthesisToken(); });

    return state;
}