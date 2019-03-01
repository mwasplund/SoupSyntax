#pragma once
#include "../RunTest.h"
#include "SyntaxFunctionTests.h"

int RunSyntaxFunctionTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::SyntaxFunctionTests>();
    int failedCount = 0;

    std::wcout << L"Running SyntaxFunctionTests:" << std::endl;

    std::wcout << L"SimpleFunctionRegular" << std::endl;
    // failedCount += RunTest([&testClass]() { testClass->SimpleFunctionRegular(); });

    std::wcout << L"SimpleFunctionDefault" << std::endl;
    // failedCount += RunTest([&testClass]() { testClass->SimpleFunctionDefault(); });

    std::wcout << L"SimpleFunctionDelete" << std::endl;
    // failedCount += RunTest([&testClass]() { testClass->SimpleFunctionDelete(); });

    return failedCount;
}
