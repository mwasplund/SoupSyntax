#pragma once
#include "BinaryExpressionTests.h"
#include "../RunTest.h"

int RunBinaryExpressionTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::BinaryExpressionTests>();
    int failedCount = 0;

    std::wcout << L"Running BinaryExpressionTests:" << std::endl;

    std::wcout << L"InitializeSimple" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->InitializeSimple(); });

    return failedCount;
}