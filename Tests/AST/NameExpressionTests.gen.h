#pragma once
#include "NameExpressionTests.h"
#include "../RunTest.h"

int RunNameExpressionTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::NameExpressionTests>();
    int failedCount = 0;

    std::wcout << L"Running NameExpressionTests:" << std::endl;

    std::wcout << L"InitializeSimpleNameExpression" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->InitializeSimpleNameExpression(); });

    std::wcout << L"InitializeSingleQualifiedNameExpression" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->InitializeSingleQualifiedNameExpression(); });

    std::wcout << L"InitializeGlobalDoubleQualifiedNameExpression" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->InitializeGlobalDoubleQualifiedNameExpression(); });
    
    return failedCount;
}