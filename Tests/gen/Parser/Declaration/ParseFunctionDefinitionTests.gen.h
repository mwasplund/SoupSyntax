#pragma once
#include "../RunTest.h"
#include "ParseFunctionDefinitionTests.h"

TestState RunParseFunctionDefinitionTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ParseFunctionDefinitionTests>();
    TestState state = { 0, 0 };

    std::cout << "Running ParseFunctionDefinitionTests:" << std::endl;

    state += RunTest(
        "SimpleFunctionRegular",
        [&testClass]() { testClass->SimpleFunctionRegular(); });

    state += RunTest(
        "SimpleFunctionDefault",
        [&testClass]() { testClass->SimpleFunctionDefault(); });

    state += RunTest(
        "SimpleFunctionDelete",
        [&testClass]() { testClass->SimpleFunctionDelete(); });

    state += RunTest(
        "SimpleFunctionParameter",
        [&testClass]() { testClass->SimpleFunctionParameter(); });

    return state;
}
