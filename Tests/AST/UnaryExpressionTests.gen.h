#pragma once
#include "UnaryExpressionTests.h"
#include "../RunTest.h"

int RunUnaryExpressionTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::UnaryExpressionTests>();
    int failedCount = 0;

    std::wcout << L"Running UnaryExpressionTests:" << std::endl;

    std::wcout << L"InitializeSimple" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->InitializeSimple(); });

    std::wcout << L"OperatorEqual" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->OperatorEqual(); });

    std::wcout << L"OperatorNotEqualOperator" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->OperatorNotEqualOperator(); });

    std::wcout << L"OperatorNotEqualOperand" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->OperatorNotEqualOperand(); });

    std::wcout << L"OperatorNotEqualOperatorToken" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->OperatorNotEqualOperatorToken(); });

    return failedCount;
}