#pragma once
#include "ThisExpressionTests.h"
#include "../RunTest.h"

TestState RunThisExpressionTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ThisExpressionTests>();
    TestState state = { 0, 0 };

    std::wcout << L"Running ThisExpressionTests:" << std::endl;

    std::wcout << L"InitializeSimple" << std::endl;
    state += RunTest([&testClass]() { testClass->InitializeSimple(); });

    std::wcout << L"GetChildren" << std::endl;
    state += RunTest([&testClass]() { testClass->GetChildren(); });

    std::wcout << L"OperatorEqual" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorEqual(); });

    std::wcout << L"OperatorNotEqualToken" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualToken(); });

    return state;
}