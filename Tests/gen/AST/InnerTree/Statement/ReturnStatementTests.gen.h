#pragma once
#include "ReturnStatementTests.h"
#include "../RunTest.h"

TestState RunReturnStatementTests()
{
    std::string className = "ReturnStatementTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::ReturnStatementTests>();
    TestState state = { 0, 0 };

    state += RunTest(
        className,
        "InitializeNoExpression",
        [&testClass]() { testClass->InitializeNoExpression(); });
    state += RunTest(
        className,
        "InitializeWithExpression",
        [&testClass]() { testClass->InitializeWithExpression(); });
    state += RunTest(
        className,
        "OperatorEqualNoExpression",
        [&testClass]() { testClass->OperatorEqualNoExpression(); });
    state += RunTest(
        className,
        "OperatorEqualWithExpression",
        [&testClass]() { testClass->OperatorEqualWithExpression(); });
    state += RunTest(
        className,
        "OperatorNotEqualReturnToken",
        [&testClass]() { testClass->OperatorNotEqualReturnToken(); });
    state += RunTest(
        className,
        "OperatorNotEqualNoExpression",
        [&testClass]() { testClass->OperatorNotEqualNoExpression(); });
    state += RunTest(
        className,
        "OperatorNotEqualWithExpression",
        [&testClass]() { testClass->OperatorNotEqualWithExpression(); });
    state += RunTest(
        className,
        "OperatorNotEqualSemicolonToken",
        [&testClass]() { testClass->OperatorNotEqualSemicolonToken(); });

    return state;
}