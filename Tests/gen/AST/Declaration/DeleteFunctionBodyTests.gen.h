#pragma once
#include "DeleteFunctionBodyTests.h"
#include "../RunTest.h"

int RunDeleteFunctionBodyTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::DeleteFunctionBodyTests>();
    int failedCount = 0;

    std::wcout << L"Running DeleteFunctionBodyTests:" << std::endl;

    std::wcout << L"InitializeSimple" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->InitializeSimple(); });

    std::wcout << L"OperatorEqual" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->OperatorEqual(); });

    std::wcout << L"OperatorNotEqualEqualToken" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->OperatorNotEqualEqualToken(); });

    std::wcout << L"OperatorNotEqualDeleteToken" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->OperatorNotEqualDeleteToken(); });

    std::wcout << L"OperatorNotEqualSemicolonToken" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->OperatorNotEqualSemicolonToken(); });

    return failedCount;
}