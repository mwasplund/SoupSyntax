#pragma once
#include "FunctionDefinitionTests.h"
#include "../RunTest.h"

int RunFunctionDefinitionTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::FunctionDefinitionTests>();
    int failedCount = 0;

    std::wcout << L"Running FunctionDefinitionTests:" << std::endl;

    std::wcout << L"InitializeSimple" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->InitializeSimple(); });

    std::wcout << L"GetChildren" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->GetChildren(); });

    std::wcout << L"OperatorEqual" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->OperatorEqual(); });

    std::wcout << L"OperatorNotEqualReturnType" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->OperatorNotEqualReturnType(); });

    std::wcout << L"OperatorNotEqualIdentifier" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->OperatorNotEqualIdentifier(); });

    std::wcout << L"OperatorNotEqualParameterList" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->OperatorNotEqualParameterList(); });

    std::wcout << L"OperatorNotEqualBody" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->OperatorNotEqualBody(); });

    return failedCount;
}