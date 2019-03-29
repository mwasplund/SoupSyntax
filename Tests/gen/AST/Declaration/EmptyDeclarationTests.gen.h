#pragma once
#include "EmptyDeclarationTests.h"
#include "../RunTest.h"

TestState RunEmptyDeclarationTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::EmptyDeclarationTests>();
    TestState state = { 0, 0 };

    std::wcout << L"Running EmptyDeclarationTests:" << std::endl;

    std::wcout << L"InitializeSimple" << std::endl;
    state += RunTest([&testClass]() { testClass->InitializeSimple(); });

    std::wcout << L"GetChildren" << std::endl;
    state += RunTest([&testClass]() { testClass->GetChildren(); });

    std::wcout << L"OperatorEqual" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorEqual(); });

    std::wcout << L"OperatorNotEqualSemicolonToken" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualSemicolonToken(); });

    return state;
}