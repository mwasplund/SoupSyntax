#pragma once
#include "ParseSubscriptExpressionTests.h"
#include "../../RunTest.h"

int RunParseSubscriptExpressionTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ParseSubscriptExpressionTests>();
    int failedCount = 0;

    std::wcout << L"Running ParseSubscriptExpressionTests:" << std::endl;

    std::wcout << L"SingleSubscriptExpression" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->SingleSubscriptExpression(); });

    return failedCount;
}
