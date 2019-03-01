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

    std::wcout << L"OperatorEqual" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->OperatorEqual(); });

    std::wcout << L"OperatorNotEqualLeft" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->OperatorNotEqualLeft(); });

    std::wcout << L"OperatorNotEqualLeftBracket" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->OperatorNotEqualLeftBracket(); });

    std::wcout << L"OperatorNotEqualRight" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->OperatorNotEqualRight(); });

    std::wcout << L"OperatorNotEqualRightBracket" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->OperatorNotEqualRightBracket(); });

    return failedCount;
}