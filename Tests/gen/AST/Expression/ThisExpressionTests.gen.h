#pragma once
#include "ThisExpressionTests.h"
#include "../RunTest.h"

TestState RunThisExpressionTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ThisExpressionTests>();
    TestState state = { 0, 0 };

    std::cout << "Running ThisExpressionTests:" << std::endl;

    state += RunTest(
        "InitializeSimple",
        [&testClass]() { testClass->InitializeSimple(); });

    state += RunTest(
         "GetChildren",
         [&testClass]() { testClass->GetChildren(); });

    state += RunTest(
        "OperatorEqual",
        [&testClass]() { testClass->OperatorEqual(); });

    state += RunTest(
        "OperatorNotEqualToken",
        [&testClass]() { testClass->OperatorNotEqualToken(); });

    return state;
}