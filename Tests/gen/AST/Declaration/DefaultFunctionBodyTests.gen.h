#pragma once
#include "DefaultFunctionBodyTests.h"
#include "../RunTest.h"

TestState RunDefaultFunctionBodyTests()
{
    std::string className = "DefaultFunctionBodyTests";
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::DefaultFunctionBodyTests>();
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
        "OperatorNotEqualEqualToken",
        [&testClass]() { testClass->OperatorNotEqualEqualToken(); });
    state += RunTest(
        className,
        "OperatorNotEqualDefaultToken",
        [&testClass]() { testClass->OperatorNotEqualDefaultToken(); });
    state += RunTest(
        className,
        "OperatorNotEqualSemicolonToken",
        [&testClass]() { testClass->OperatorNotEqualSemicolonToken(); });

    return state;
}