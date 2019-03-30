#pragma once
#include "../RunTest.h"
#include "ParseFunctionDefinitionTests.h"

TestState RunParseFunctionDefinitionTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ParseFunctionDefinitionTests>();
    TestState state = { 0, 0 };

    std::cout << "Running ParseFunctionDefinitionTests:" << std::endl;

    std::cout << "SimpleFunctionRegular" << std::endl;
    state += RunTest([&testClass]() { testClass->SimpleFunctionRegular(); });

    std::cout << "SimpleFunctionDefault" << std::endl;
    state += RunTest([&testClass]() { testClass->SimpleFunctionDefault(); });

    std::cout << "SimpleFunctionDelete" << std::endl;
    state += RunTest([&testClass]() { testClass->SimpleFunctionDelete(); });

    std::cout << "SimpleFunctionParameter" << std::endl;
    state += RunTest([&testClass]() { testClass->SimpleFunctionParameter(); });

    return state;
}
