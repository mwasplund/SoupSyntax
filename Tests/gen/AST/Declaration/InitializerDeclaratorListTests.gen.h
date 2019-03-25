#pragma once
#include "InitializerDeclaratorListTests.h"
#include "../RunTest.h"

TestState RunInitializerDeclaratorListTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::InitializerDeclaratorListTests>();
    TestState state = { 0, 0 };

    std::wcout << L"Running InitializerDeclaratorListTests:" << std::endl;

    std::wcout << L"InitializeSimple" << std::endl;
    state += RunTest([&testClass]() { testClass->InitializeSimple(); });

    std::wcout << L"GetChildren" << std::endl;
    state += RunTest([&testClass]() { testClass->GetChildren(); });

    std::wcout << L"OperatorEqual" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorEqual(); });

    std::wcout << L"OperatorNotEqualLessItems" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualLessItems(); });

    std::wcout << L"OperatorNotEqualWithItems" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualWithItems(); });

    return state;
}