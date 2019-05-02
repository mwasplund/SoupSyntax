#pragma once
#include "/AST/InnerTree/Statement/CompoundStatementTests.h"

TestState RunInnerTreeCompoundStatementTests() 
 {
    auto className = "InnerTreeCompoundStatementTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeCompoundStatementTests>();
    TestState state = { 0, 0 };
    state += RunTest(className, "InitializeEmpty", [&testClass]() { testClass->InitializeEmpty(); });
    state += RunTest(className, "InitializeSingleStatement", [&testClass]() { testClass->InitializeSingleStatement(); });
    state += RunTest(className, "OperatorEqualEmpty", [&testClass]() { testClass->OperatorEqualEmpty(); });
    state += RunTest(className, "OperatorEqualSingleStatement", [&testClass]() { testClass->OperatorEqualSingleStatement(); });
    state += RunTest(className, "OperatorNotEqualOpenBraceToken", [&testClass]() { testClass->OperatorNotEqualOpenBraceToken(); });
    state += RunTest(className, "OperatorNotEqualEmpty", [&testClass]() { testClass->OperatorNotEqualEmpty(); });
    state += RunTest(className, "OperatorNotEqualSingleStatement", [&testClass]() { testClass->OperatorNotEqualSingleStatement(); });
    state += RunTest(className, "OperatorNotEqualCloseBraceToken", [&testClass]() { testClass->OperatorNotEqualCloseBraceToken(); });

    return state;
}