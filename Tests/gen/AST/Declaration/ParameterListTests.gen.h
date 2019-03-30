#pragma once
#include "ParameterListTests.h"
#include "../RunTest.h"

TestState RunParameterListTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ParameterListTests>();
    TestState state = { 0, 0 };

    std::cout << "Running ParameterListTests:" << std::endl;

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
        "OperatorNotEqualOpenParenthesisToken",
        [&testClass]() { testClass->OperatorNotEqualOpenParenthesisToken(); });

    state += RunTest(
        "OperatorNotEqualParameters",
        [&testClass]() { testClass->OperatorNotEqualParameters(); });

    state += RunTest(
        "OperatorNotEqualCloseParenthesisToken",
        [&testClass]() { testClass->OperatorNotEqualCloseParenthesisToken(); });

    return state;
}