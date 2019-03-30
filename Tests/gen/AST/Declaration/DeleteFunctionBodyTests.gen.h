#pragma once
#include "DeleteFunctionBodyTests.h"
#include "../RunTest.h"

TestState RunDeleteFunctionBodyTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::DeleteFunctionBodyTests>();
    TestState state = { 0, 0 };

    std::cout << "Running DeleteFunctionBodyTests:" << std::endl;

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
        "OperatorNotEqualDeleteToken",
        [&testClass]() { testClass->OperatorNotEqualDeleteToken(); });

    state += RunTest(
        "OperatorNotEqualSemicolonToken",
        [&testClass]() { testClass->OperatorNotEqualSemicolonToken(); });

    return state;
}