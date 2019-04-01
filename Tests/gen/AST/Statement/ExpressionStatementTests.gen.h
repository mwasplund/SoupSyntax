#pragma once
#include "ExpressionStatementTests.h"
#include "../RunTest.h"

TestState RunExpressionStatementTests()
{
    std::string className = "ExpressionStatementTests";
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ExpressionStatementTests>();
    TestState state = { 0, 0 };

    state += RunTest(
        className,
        "InitializeSimple",
        [&testClass]() { testClass->InitializeSimple(); });
    state += RunTest(
        className,
        "GetChildren",
        [&testClass]() { testClass->GetChildren(); });
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