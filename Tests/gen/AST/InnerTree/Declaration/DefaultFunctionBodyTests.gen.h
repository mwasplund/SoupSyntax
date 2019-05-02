#pragma once
#include "/AST/InnerTree/Declaration/DefaultFunctionBodyTests.h"

TestState RunInnerTreeDefaultFunctionBodyTests() 
 {
    auto className = "InnerTreeDefaultFunctionBodyTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeDefaultFunctionBodyTests>();
    TestState state = { 0, 0 };
    state += RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
    state += RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
    state += RunTest(className, "OperatorNotEqualEqualToken", [&testClass]() { testClass->OperatorNotEqualEqualToken(); });
    state += RunTest(className, "OperatorNotEqualDefaultToken", [&testClass]() { testClass->OperatorNotEqualDefaultToken(); });
    state += RunTest(className, "OperatorNotEqualSemicolonToken", [&testClass]() { testClass->OperatorNotEqualSemicolonToken(); });

    return state;
}