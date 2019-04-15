#pragma once
#include "AST/InnerTree/Statement/ExpressionStatementTests.h"
#include "RunTest.h"

TestState RunInnerTreeExpressionStatementTests()
{
    std::string className = "InnerTree::ExpressionStatementTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::InnerTreeExpressionStatementTests>();
    TestState state = { 0, 0 };

    state += RunTest(
        className,
        "InitializeSimple",
        [&testClass]() { testClass->InitializeSimple(); });
    state += RunTest(
        className,
        "OperatorEqual",
        [&testClass]() { testClass->OperatorEqual(); });
    state += RunTest(
        className,
        "OperatorNotEqualExpression",
        [&testClass]() { testClass->OperatorNotEqualExpression(); });
    state += RunTest(
        className,
        "OperatorNotEqualSemicolonToken",
        [&testClass]() { testClass->OperatorNotEqualSemicolonToken(); });

    return state;
}