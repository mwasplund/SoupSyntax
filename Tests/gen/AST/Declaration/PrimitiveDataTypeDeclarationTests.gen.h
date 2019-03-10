#pragma once
#include "PrimitiveDataTypeDeclarationTests.h"
#include "../RunTest.h"

int RunPrimitiveDataTypeDeclarationTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::PrimitiveDataTypeDeclarationTests>();
    int failedCount = 0;

    std::wcout << L"Running PrimitiveDataTypeDeclarationTests:" << std::endl;

    std::wcout << L"InitializeSimple" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->InitializeSimple(); });

    std::wcout << L"GetChildren" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->GetChildren(); });

    std::wcout << L"OperatorEqual" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->OperatorEqual(); });

    std::wcout << L"OperatorNotEqualPrimitiveType" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->OperatorNotEqualPrimitiveType(); });

    std::wcout << L"OperatorNotEqualToken" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->OperatorNotEqualToken(); });

    return failedCount;
}