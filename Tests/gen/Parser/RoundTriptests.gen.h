#pragma once
#include "../RunTest.h"
#include "SyntaxFunctionTests.h"

TestState RunSyntaxFunctionTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::SyntaxFunctionTests>();
    TestState state = { 0, 0 };

    std::cout << "Running SyntaxFunctionTests:" << std::endl;

    std::cout << "SimpleFunctionRegular" << std::endl;
    // state += RunTest([&testClass]() { testClass->SimpleFunctionRegular(); });

    std::cout << "SimpleFunctionDefault" << std::endl;
    // state += RunTest([&testClass]() { testClass->SimpleFunctionDefault(); });

    std::cout << "SimpleFunctionDelete" << std::endl;
    // state += RunTest([&testClass]() { testClass->SimpleFunctionDelete(); });

    return state;
}
