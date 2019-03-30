#pragma once
#include "DefaultFunctionBodyTests.h"
#include "../RunTest.h"

TestState RunDefaultFunctionBodyTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::DefaultFunctionBodyTests>();
    TestState state = { 0, 0 };

    std::cout << "Running DefaultFunctionBodyTests:" << std::endl;

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
        "OperatorNotEqualDefaultToken",
        [&testClass]() { testClass->OperatorNotEqualDefaultToken(); });

    state += RunTest(
        "OperatorNotEqualSemicolonToken",
        [&testClass]() { testClass->OperatorNotEqualSemicolonToken(); });

    return state;
}