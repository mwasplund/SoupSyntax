#pragma once
#include "LiteralExpressionTests.h"
#include "../RunTest.h"

int RunLiteralExpressionTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::LiteralExressionTests>();
    int failedCount = 0;

    std::wcout << L"Running LiteralExressionTests:" << std::endl;

    std::wcout << L"InitializeSimple" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->InitializeSimple(); });

    return failedCount;
}