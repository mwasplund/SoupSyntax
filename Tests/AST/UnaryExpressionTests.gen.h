#pragma once
#include "UnaryExpressionTests.h"
#include "../RunTest.h"

int RunUnaryExpressionTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::UnaryExpressionTests>();
    int failedCount = 0;

    std::wcout << L"Running UnaryExpressionTests:" << std::endl;

    std::wcout << L"InitializeSimple" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->InitializeSimple(); });

    return failedCount;
}