#pragma once
#include "/AST/InnerTree/Declaration/InitializerListTests.h"

TestState RunInnerTreeInitializerListTests() 
 {
    auto className = "InnerTreeInitializerListTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeInitializerListTests>();
    TestState state = { 0, 0 };
    state += RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
    state += RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
    state += RunTest(className, "OperatorNotEqualOpenParenthesisToken", [&testClass]() { testClass->OperatorNotEqualOpenParenthesisToken(); });
    state += RunTest(className, "OperatorNotEqualValues", [&testClass]() { testClass->OperatorNotEqualValues(); });
    state += RunTest(className, "OperatorNotEqualCloseParenthesisToken", [&testClass]() { testClass->OperatorNotEqualCloseParenthesisToken(); });

    return state;
}