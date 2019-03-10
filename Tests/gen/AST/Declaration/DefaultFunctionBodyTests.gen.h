#pragma once
#include "DefaultFunctionBodyTests.h"
#include "../RunTest.h"

int RunDefaultFunctionBodyTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::DefaultFunctionBodyTests>();
    int failedCount = 0;

    std::wcout << L"Running DefaultFunctionBodyTests:" << std::endl;

    std::wcout << L"InitializeSimple" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->InitializeSimple(); });

    std::wcout << L"GetChildren" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->GetChildren(); });

    std::wcout << L"OperatorEqual" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->OperatorEqual(); });

    std::wcout << L"OperatorNotEqualEqualToken" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->OperatorNotEqualEqualToken(); });

    std::wcout << L"OperatorNotEqualDefaultToken" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->OperatorNotEqualDefaultToken(); });

    std::wcout << L"OperatorNotEqualSemicolonToken" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->OperatorNotEqualSemicolonToken(); });

    return failedCount;
}