#pragma once
#include "/AST/InnerTree/Statement/ElseClauseTests.h"

TestState RunInnerTreeElseClauseTests() 
 {
    auto className = "InnerTreeElseClauseTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeElseClauseTests>();
    TestState state = { 0, 0 };
    state += RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
    state += RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
    state += RunTest(className, "OperatorNotEqualElseToken", [&testClass]() { testClass->OperatorNotEqualElseToken(); });
    state += RunTest(className, "OperatorNotEqualStatement", [&testClass]() { testClass->OperatorNotEqualStatement(); });

    return state;
}