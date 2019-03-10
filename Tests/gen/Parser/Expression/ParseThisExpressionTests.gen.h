#pragma once
#include "ParseThisExpressionTests.h"
#include "../../RunTest.h"

int RunParseThisExpressionTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ParseThisExpressionTests>();
    int failedCount = 0;

    std::wcout << L"Running ParseThisExpressionTests:" << std::endl;

    std::wcout << L"SingleThisExpression" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->SingleThisExpression(); });

    return failedCount;
}
