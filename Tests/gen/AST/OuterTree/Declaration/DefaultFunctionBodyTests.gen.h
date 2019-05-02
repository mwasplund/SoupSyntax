#pragma once
#include "/AST/OuterTree/Declaration/DefaultFunctionBodyTests.h"

TestState RunOuterTreeDefaultFunctionBodyTests() 
 {
    auto className = "OuterTreeDefaultFunctionBodyTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeDefaultFunctionBodyTests>();
    TestState state = { 0, 0 };
    state += RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
    state += RunTest(className, "GetChildren", [&testClass]() { testClass->GetChildren(); });
    state += RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
    state += RunTest(className, "OperatorNotEqualEqualToken", [&testClass]() { testClass->OperatorNotEqualEqualToken(); });
    state += RunTest(className, "OperatorNotEqualDefaultToken", [&testClass]() { testClass->OperatorNotEqualDefaultToken(); });
    state += RunTest(className, "OperatorNotEqualSemicolonToken", [&testClass]() { testClass->OperatorNotEqualSemicolonToken(); });

    return state;
}