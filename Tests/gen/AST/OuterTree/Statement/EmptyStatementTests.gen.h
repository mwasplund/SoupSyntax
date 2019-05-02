#pragma once
#include "/AST/OuterTree/Statement/EmptyStatementTests.h"

TestState RunOuterTreeEmptyStatementTests() 
 {
    auto className = "OuterTreeEmptyStatementTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeEmptyStatementTests>();
    TestState state = { 0, 0 };
    state += RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
    state += RunTest(className, "GetChildren", [&testClass]() { testClass->GetChildren(); });
    state += RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
    state += RunTest(className, "OperatorNotEqualSemicolonToken", [&testClass]() { testClass->OperatorNotEqualSemicolonToken(); });

    return state;
}