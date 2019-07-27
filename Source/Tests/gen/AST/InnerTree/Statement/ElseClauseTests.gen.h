#pragma once
#include "/AST/InnerTree/Statement/ElseClauseTests.h"

TestState RunInnerTreeElseClauseTests() 
 {
    auto className = "InnerTreeElseClauseTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeElseClauseTests>();
    TestState state = { 0, 0 };
    state += SoupTest::RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
    state += SoupTest::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
    state += SoupTest::RunTest(className, "OperatorNotEqualElseToken", [&testClass]() { testClass->OperatorNotEqualElseToken(); });
    state += SoupTest::RunTest(className, "OperatorNotEqualStatement", [&testClass]() { testClass->OperatorNotEqualStatement(); });

    return state;
}