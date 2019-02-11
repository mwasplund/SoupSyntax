#pragma once
#include "SubscriptExpressionTests.h"
#include "../RunTest.h"

int RunSubscriptExpressionTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::SubscriptExpressionTests>();
    int failedCount = 0;

    std::wcout << L"Running SubscriptExpressionTests:" << std::endl;

    std::wcout << L"InitializeSimple" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->InitializeSimple(); });

    return failedCount;
}