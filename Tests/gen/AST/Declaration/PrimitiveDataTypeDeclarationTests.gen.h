#pragma once
#include "PrimitiveDataTypeDeclarationTests.h"
#include "../RunTest.h"

TestState RunPrimitiveDataTypeDeclarationTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::PrimitiveDataTypeDeclarationTests>();
    TestState state = { 0, 0 };

    std::wcout << L"Running PrimitiveDataTypeDeclarationTests:" << std::endl;

    std::wcout << L"InitializeSimple" << std::endl;
    state += RunTest([&testClass]() { testClass->InitializeSimple(); });

    std::wcout << L"GetChildren" << std::endl;
    state += RunTest([&testClass]() { testClass->GetChildren(); });

    std::wcout << L"OperatorEqual" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorEqual(); });

    std::wcout << L"OperatorNotEqualPrimitiveType" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualPrimitiveType(); });

    std::wcout << L"OperatorNotEqualToken" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualToken(); });

    return state;
}