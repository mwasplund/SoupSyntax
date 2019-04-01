#pragma once
#include "FunctionDefinitionTests.h"
#include "../RunTest.h"

TestState RunFunctionDefinitionTests()
{
    std::string className = "FunctionDefinitionTests";
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::FunctionDefinitionTests>();
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
        "OperatorNotEqualReturnType",
        [&testClass]() { testClass->OperatorNotEqualReturnType(); });
    state += RunTest(
        className,
        "OperatorNotEqualIdentifier",
        [&testClass]() { testClass->OperatorNotEqualIdentifier(); });
    state += RunTest(
        className,
        "OperatorNotEqualParameterList",
        [&testClass]() { testClass->OperatorNotEqualParameterList(); });
    state += RunTest(
        className,
        "OperatorNotEqualBody",
        [&testClass]() { testClass->OperatorNotEqualBody(); });

    return state;
}