#pragma once
#include "/AST/InnerTree/Statement/CompoundStatementTests.h"

TestState RunInnerTreeCompoundStatementTests() 
 {
    auto className = "InnerTreeCompoundStatementTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeCompoundStatementTests>();
    TestState state = { 0, 0 };
    state += SoupTest::RunTest(className, "InitializeEmpty", [&testClass]() { testClass->InitializeEmpty(); });
    state += SoupTest::RunTest(className, "InitializeSingleStatement", [&testClass]() { testClass->InitializeSingleStatement(); });
    state += SoupTest::RunTest(className, "OperatorEqualEmpty", [&testClass]() { testClass->OperatorEqualEmpty(); });
    state += SoupTest::RunTest(className, "OperatorEqualSingleStatement", [&testClass]() { testClass->OperatorEqualSingleStatement(); });
    state += SoupTest::RunTest(className, "OperatorNotEqualOpenBraceToken", [&testClass]() { testClass->OperatorNotEqualOpenBraceToken(); });
    state += SoupTest::RunTest(className, "OperatorNotEqualEmpty", [&testClass]() { testClass->OperatorNotEqualEmpty(); });
    state += SoupTest::RunTest(className, "OperatorNotEqualSingleStatement", [&testClass]() { testClass->OperatorNotEqualSingleStatement(); });
    state += SoupTest::RunTest(className, "OperatorNotEqualCloseBraceToken", [&testClass]() { testClass->OperatorNotEqualCloseBraceToken(); });

    return state;
}