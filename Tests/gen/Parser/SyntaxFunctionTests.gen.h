#pragma once
#include "../RunTest.h"
#include "SyntaxFunctionTests.h"

TestState RunSyntaxFunctionTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::SyntaxFunctionTests>();
    TestState state = { 0, 0 };

    std::wcout << L"Running SyntaxFunctionTests:" << std::endl;

    std::wcout << L"SimpleFunctionRegular" << std::endl;
    state += RunTest([&testClass]() { testClass->SimpleFunctionRegular(); });

    std::wcout << L"SimpleFunctionDefault" << std::endl;
    state += RunTest([&testClass]() { testClass->SimpleFunctionDefault(); });

    std::wcout << L"SimpleFunctionDelete" << std::endl;
    state += RunTest([&testClass]() { testClass->SimpleFunctionDelete(); });

    std::wcout << L"SimpleFunctionParameter" << std::endl;
    state += RunTest([&testClass]() { testClass->SimpleFunctionParameter(); });

    return state;
}
