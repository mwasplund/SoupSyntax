#pragma once
#include "/AST/InnerTree/Statement/ReturnStatementTests.h"

TestState RunInnerTreeReturnStatementTests() 
 {
    auto className = "InnerTreeReturnStatementTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeReturnStatementTests>();
    TestState state = { 0, 0 };
    state += SoupTest::RunTest(className, "InitializeNoExpression", [&testClass]() { testClass->InitializeNoExpression(); });
    state += SoupTest::RunTest(className, "InitializeWithExpression", [&testClass]() { testClass->InitializeWithExpression(); });
    state += SoupTest::RunTest(className, "OperatorEqualNoExpression", [&testClass]() { testClass->OperatorEqualNoExpression(); });
    state += SoupTest::RunTest(className, "OperatorEqualWithExpression", [&testClass]() { testClass->OperatorEqualWithExpression(); });
    state += SoupTest::RunTest(className, "OperatorNotEqualReturnToken", [&testClass]() { testClass->OperatorNotEqualReturnToken(); });
    state += SoupTest::RunTest(className, "OperatorNotEqualNoExpression", [&testClass]() { testClass->OperatorNotEqualNoExpression(); });
    state += SoupTest::RunTest(className, "OperatorNotEqualWithExpression", [&testClass]() { testClass->OperatorNotEqualWithExpression(); });
    state += SoupTest::RunTest(className, "OperatorNotEqualSemicolonToken", [&testClass]() { testClass->OperatorNotEqualSemicolonToken(); });

    return state;
}