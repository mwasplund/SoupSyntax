#pragma once
#include "ParseNameExpressionTests.h"
#include "../../RunTest.h"

int RunParseNameExpressionTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ParseNameExpressionTests>();
    int failedCount = 0;

    std::wcout << L"Running ParseNameExpressionTests:" << std::endl;

    std::wcout << L"SingleSimpleNameExpression" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->SingleSimpleNameExpression(); });
    
    std::wcout << L"SingleQualifiedNameExpression" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->SingleQualifiedNameExpression(); });

    return failedCount;
}
