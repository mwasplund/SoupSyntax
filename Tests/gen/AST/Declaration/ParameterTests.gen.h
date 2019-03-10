#pragma once
#include "ParameterTests.h"
#include "../RunTest.h"

int RunParameterTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ParameterTests>();
    int failedCount = 0;

    std::wcout << L"Running ParameterTests:" << std::endl;

    std::wcout << L"InitializeSimple" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->InitializeSimple(); });

    std::wcout << L"GetChildren" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->GetChildren(); });

    std::wcout << L"OperatorEqual" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->OperatorEqual(); });

    std::wcout << L"OperatorNotEqualDeclarationSpecifierSequence" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->OperatorNotEqualDeclarationSpecifierSequence(); });

    std::wcout << L"OperatorNotEqualDeclarator" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->OperatorNotEqualDeclarator(); });

    return failedCount;
}