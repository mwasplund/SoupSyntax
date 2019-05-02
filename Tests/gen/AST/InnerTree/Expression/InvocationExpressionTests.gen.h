#pragma once
#include "/AST/InnerTree/Expression/InvocationExpressionTests.h"

TestState RunInnerTreeInvocationExpressionTests() 
 {
    auto className = "InnerTreeInvocationExpressionTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeInvocationExpressionTests>();
    TestState state = { 0, 0 };
    state += RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
    state += RunTest(className, "InitializeComplex", [&testClass]() { testClass->InitializeComplex(); });
    state += RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
    state += RunTest(className, "OperatorNotEqualLeftExpression", [&testClass]() { testClass->OperatorNotEqualLeftExpression(); });
    state += RunTest(className, "OperatorNotEqualOpenParenthesisToken", [&testClass]() { testClass->OperatorNotEqualOpenParenthesisToken(); });
    state += RunTest(className, "OperatorNotEqualParameters", [&testClass]() { testClass->OperatorNotEqualParameters(); });
    state += RunTest(className, "OperatorNotEqualCloseParenthesisToken", [&testClass]() { testClass->OperatorNotEqualCloseParenthesisToken(); });

    return state;
}