#pragma once
#include "SubscriptExpressionTests.h"
#include "../RunTest.h"

TestState RunSubscriptExpressionTests()
{
    std::string className = "SubscriptExpressionTests";
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::SubscriptExpressionTests>();
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
        "OperatorNotEqualLeft",
        [&testClass]() { testClass->OperatorNotEqualLeft(); });
    state += RunTest(
        className,
        "OperatorNotEqualOpenBracket",
        [&testClass]() { testClass->OperatorNotEqualOpenBracket(); });
    state += RunTest(
        className,
        "OperatorNotEqualRight",
        [&testClass]() { testClass->OperatorNotEqualRight(); });
    state += RunTest(
        className,
        "OperatorNotEqualCloseBracket",
        [&testClass]() { testClass->OperatorNotEqualCloseBracket(); });

    return state;
}