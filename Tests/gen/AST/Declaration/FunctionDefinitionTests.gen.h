#pragma once
#include "FunctionDefinitionTests.h"
#include "../RunTest.h"

TestState RunFunctionDefinitionTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::FunctionDefinitionTests>();
    TestState state = { 0, 0 };

    std::cout << "Running FunctionDefinitionTests:" << std::endl;

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
        "OperatorNotEqualReturnType",
        [&testClass]() { testClass->OperatorNotEqualReturnType(); });

    state += RunTest(
        "OperatorNotEqualIdentifier",
        [&testClass]() { testClass->OperatorNotEqualIdentifier(); });

    state += RunTest(
        "OperatorNotEqualParameterList",
        [&testClass]() { testClass->OperatorNotEqualParameterList(); });

    state += RunTest(
        "OperatorNotEqualBody",
        [&testClass]() { testClass->OperatorNotEqualBody(); });

    return state;
}