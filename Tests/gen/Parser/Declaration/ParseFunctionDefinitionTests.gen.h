#pragma once
#include "../RunTest.h"
#include "ParseFunctionDefinitionTests.h"

TestState RunParseFunctionDefinitionTests()
{
    std::string className = "ParseFunctionDefinitionTests";
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ParseFunctionDefinitionTests>();
    TestState state = { 0, 0 };

    state += RunTest(
        className,
        "SimpleFunctionRegular",
        [&testClass]() { testClass->SimpleFunctionRegular(); });
    state += RunTest(
        className,
        "SimpleFunctionDefault",
        [&testClass]() { testClass->SimpleFunctionDefault(); });
    state += RunTest(
        className,
        "SimpleFunctionDelete",
        [&testClass]() { testClass->SimpleFunctionDelete(); });
    state += RunTest(
        className,
        "SimpleFunctionParameter",
        [&testClass]() { testClass->SimpleFunctionParameter(); });

    return state;
}
