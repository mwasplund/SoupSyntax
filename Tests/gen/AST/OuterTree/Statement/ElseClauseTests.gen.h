#pragma once
#include "/AST/OuterTree/Statement/ElseClauseTests.h"

TestState RunOuterTreeElseClauseTests() 
 {
    auto className = "OuterTreeElseClauseTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeElseClauseTests>();
    TestState state = { 0, 0 };
    state += RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
    state += RunTest(className, "GetChildren", [&testClass]() { testClass->GetChildren(); });
    state += RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
    state += RunTest(className, "OperatorNotEqualElseToken", [&testClass]() { testClass->OperatorNotEqualElseToken(); });
    state += RunTest(className, "OperatorNotEqualStatement", [&testClass]() { testClass->OperatorNotEqualStatement(); });

    return state;
}