#pragma once
#include "ThisExpressionTests.h"
#include "../RunTest.h"

TestState RunThisExpressionTests()
{
    std::string className = "ThisExpressionTests";
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ThisExpressionTests>();
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
        "OperatorNotEqualToken",
        [&testClass]() { testClass->OperatorNotEqualToken(); });

    return state;
}