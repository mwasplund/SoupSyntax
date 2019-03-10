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

    std::wcout << L"SimpleNameExpressionGetChildren" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->SimpleNameExpressionGetChildren(); });

    std::wcout << L"SimpleNameExpressionOperatorEqual" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->SimpleNameExpressionOperatorEqual(); });

    std::wcout << L"SimpleNameExpressionOperatorNotEqualIdentifier" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->SimpleNameExpressionOperatorNotEqualIdentifier(); });

    std::wcout << L"GlobalQualifiedNameExpressionGetChildren" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->GlobalQualifiedNameExpressionGetChildren(); });

    std::wcout << L"GlobalQualifiedNameExpressionEqual" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->GlobalQualifiedNameExpressionEqual(); });

    std::wcout << L"GlobalQualifiedNameExpressionNotEqualLeft" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->GlobalQualifiedNameExpressionNotEqualLeft(); });

    std::wcout << L"GlobalQualifiedNameExpressionNotEqualDoubleColonToken" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->GlobalQualifiedNameExpressionNotEqualDoubleColonToken(); });

    std::wcout << L"GlobalQualifiedNameExpressionNotEqualRight" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->GlobalQualifiedNameExpressionNotEqualRight(); });

    std::wcout << L"SingleQualifiedNameExpressionGetChildren" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->SingleQualifiedNameExpressionGetChildren(); });

    std::wcout << L"SingleQualifiedNameExpressionEqual" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->SingleQualifiedNameExpressionEqual(); });

    std::wcout << L"SingleQualifiedNameExpressionNotEqualLeft" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->SingleQualifiedNameExpressionNotEqualLeft(); });

    std::wcout << L"SingleQualifiedNameExpressionNotEqualLeftGlobal" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->SingleQualifiedNameExpressionNotEqualLeftGlobal(); });

    std::wcout << L"SingleQualifiedNameExpressionNotEqualDoubleColonToken" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->SingleQualifiedNameExpressionNotEqualDoubleColonToken(); });

    std::wcout << L"SingleQualifiedNameExpressionNotEqualRight" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->SingleQualifiedNameExpressionNotEqualRight(); });

    return failedCount;
}