#pragma once
#include "NameExpressionTests.h"
#include "../RunTest.h"

TestState RunNameExpressionTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::NameExpressionTests>();
    TestState state = { 0, 0 };

    std::wcout << L"Running NameExpressionTests:" << std::endl;

    std::wcout << L"InitializeSimpleNameExpression" << std::endl;
    state += RunTest([&testClass]() { testClass->InitializeSimpleNameExpression(); });

    std::wcout << L"InitializeSingleQualifiedNameExpression" << std::endl;
    state += RunTest([&testClass]() { testClass->InitializeSingleQualifiedNameExpression(); });

    std::wcout << L"InitializeGlobalDoubleQualifiedNameExpression" << std::endl;
    state += RunTest([&testClass]() { testClass->InitializeGlobalDoubleQualifiedNameExpression(); });

    std::wcout << L"SimpleNameExpressionGetChildren" << std::endl;
    state += RunTest([&testClass]() { testClass->SimpleNameExpressionGetChildren(); });

    std::wcout << L"SimpleNameExpressionOperatorEqual" << std::endl;
    state += RunTest([&testClass]() { testClass->SimpleNameExpressionOperatorEqual(); });

    std::wcout << L"SimpleNameExpressionOperatorNotEqualIdentifier" << std::endl;
    state += RunTest([&testClass]() { testClass->SimpleNameExpressionOperatorNotEqualIdentifier(); });

    std::wcout << L"GlobalQualifiedNameExpressionGetChildren" << std::endl;
    state += RunTest([&testClass]() { testClass->GlobalQualifiedNameExpressionGetChildren(); });

    std::wcout << L"GlobalQualifiedNameExpressionEqual" << std::endl;
    state += RunTest([&testClass]() { testClass->GlobalQualifiedNameExpressionEqual(); });

    std::wcout << L"GlobalQualifiedNameExpressionNotEqualLeft" << std::endl;
    state += RunTest([&testClass]() { testClass->GlobalQualifiedNameExpressionNotEqualLeft(); });

    std::wcout << L"GlobalQualifiedNameExpressionNotEqualDoubleColonToken" << std::endl;
    state += RunTest([&testClass]() { testClass->GlobalQualifiedNameExpressionNotEqualDoubleColonToken(); });

    std::wcout << L"GlobalQualifiedNameExpressionNotEqualRight" << std::endl;
    state += RunTest([&testClass]() { testClass->GlobalQualifiedNameExpressionNotEqualRight(); });

    std::wcout << L"SingleQualifiedNameExpressionGetChildren" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleQualifiedNameExpressionGetChildren(); });

    std::wcout << L"SingleQualifiedNameExpressionEqual" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleQualifiedNameExpressionEqual(); });

    std::wcout << L"SingleQualifiedNameExpressionNotEqualLeft" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleQualifiedNameExpressionNotEqualLeft(); });

    std::wcout << L"SingleQualifiedNameExpressionNotEqualLeftGlobal" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleQualifiedNameExpressionNotEqualLeftGlobal(); });

    std::wcout << L"SingleQualifiedNameExpressionNotEqualDoubleColonToken" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleQualifiedNameExpressionNotEqualDoubleColonToken(); });

    std::wcout << L"SingleQualifiedNameExpressionNotEqualRight" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleQualifiedNameExpressionNotEqualRight(); });

    return state;
}