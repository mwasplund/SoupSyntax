#pragma once
#include "ValueEqualInitializerTests.h"
#include "../RunTest.h"

TestState RunValueEqualInitializerTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ValueEqualInitializerTests>();
    TestState state = { 0, 0 };

    std::wcout << L"Running ValueEqualInitializerTests:" << std::endl;

    std::wcout << L"InitializeSimple" << std::endl;
    state += RunTest([&testClass]() { testClass->InitializeSimple(); });

    std::wcout << L"GetChildren" << std::endl;
    state += RunTest([&testClass]() { testClass->GetChildren(); });

    std::wcout << L"OperatorEqual" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorEqual(); });

    std::wcout << L"OperatorNotEqualEqualToken" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualEqualToken(); });

    std::wcout << L"OperatorNotEqualExpression" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualExpression(); });

    return state;
}