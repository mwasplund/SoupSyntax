#pragma once
#include "PostfixExpressionTests.h"
#include "../../RunTest.h"

int RunPostfixExpressionTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::PostfixExpressionTests>();
    int failedCount = 0;

    std::wcout << L"Running PostfixExpressionTests:" << std::endl;

    std::wcout << L"SingleSubscriptExpression" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->SingleSubscriptExpression(); });

    std::wcout << L"SingleLiteralPostIncrement" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->SingleLiteralPostIncrement(); });

    std::wcout << L"SingleLiteralPostDecrement" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->SingleLiteralPostDecrement(); });

    return failedCount;
}
