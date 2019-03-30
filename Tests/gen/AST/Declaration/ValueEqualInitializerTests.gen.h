#pragma once
#include "ValueEqualInitializerTests.h"
#include "../RunTest.h"

TestState RunValueEqualInitializerTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ValueEqualInitializerTests>();
    TestState state = { 0, 0 };

    std::cout << "Running ValueEqualInitializerTests:" << std::endl;

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
        "OperatorNotEqualEqualToken",
        [&testClass]() { testClass->OperatorNotEqualEqualToken(); });

    state += RunTest(
        "OperatorNotEqualExpression",
        [&testClass]() { testClass->OperatorNotEqualExpression(); });

    return state;
}