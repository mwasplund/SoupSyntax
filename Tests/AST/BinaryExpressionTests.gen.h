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

    std::wcout << L"OperatorEqual" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->OperatorEqual(); });

    std::wcout << L"OperatorNotEqualOperatorType" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->OperatorNotEqualOperatorType(); });

    std::wcout << L"OperatorNotEqualLeft" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->OperatorNotEqualLeft(); });

    std::wcout << L"OperatorNotEqualOperatorToken" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->OperatorNotEqualOperatorToken(); });

    std::wcout << L"OperatorNotEqualRight" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->OperatorNotEqualRight(); });

    return failedCount;
}