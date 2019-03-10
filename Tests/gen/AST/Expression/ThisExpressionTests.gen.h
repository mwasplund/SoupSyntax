#pragma once
#include "ThisExpressionTests.h"
#include "../RunTest.h"

int RunThisExpressionTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ThisExpressionTests>();
    int failedCount = 0;

    std::wcout << L"Running ThisExpressionTests:" << std::endl;

    std::wcout << L"InitializeSimple" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->InitializeSimple(); });

    std::wcout << L"GetChildren" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->GetChildren(); });

    std::wcout << L"OperatorEqual" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->OperatorEqual(); });

    std::wcout << L"OperatorNotEqualToken" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->OperatorNotEqualToken(); });

    return failedCount;
}