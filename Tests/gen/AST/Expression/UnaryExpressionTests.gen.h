#pragma once
#include "UnaryExpressionTests.h"
#include "../RunTest.h"

TestState RunUnaryExpressionTests()
{
    std::string className = "UnaryExpressionTests";
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::UnaryExpressionTests>();
    TestState state = { 0, 0 };

    state += RunTest(
        className,
        "InitializeSimple",
        [&testClass]() { testClass->InitializeSimple(); });
    state += RunTest(
        className,
        "PrefixOperatorGetChildren",
        [&testClass]() { testClass->PrefixOperatorGetChildren(); });
    state += RunTest(
        className,
        "PostfixOperatorGetChildren",
        [&testClass]() { testClass->PostfixOperatorGetChildren(); });
    state += RunTest(
        className,
        "OperatorEqual",
        [&testClass]() { testClass->OperatorEqual(); });
    state += RunTest(
        className,
        "OperatorNotEqualOperator",
        [&testClass]() { testClass->OperatorNotEqualOperator(); });
    state += RunTest(
        className,
        "OperatorNotEqualOperand",
        [&testClass]() { testClass->OperatorNotEqualOperand(); });
    state += RunTest(
        className,
        "OperatorNotEqualOperatorToken",
        [&testClass]() { testClass->OperatorNotEqualOperatorToken(); });

    return state;
}