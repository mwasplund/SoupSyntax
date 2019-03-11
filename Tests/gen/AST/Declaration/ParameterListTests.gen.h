#pragma once
#include "ParameterListTests.h"
#include "../RunTest.h"

TestState RunParameterListTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ParameterListTests>();
    TestState state = { 0, 0 };

    std::wcout << L"Running ParameterListTests:" << std::endl;

    std::wcout << L"InitializeSimple" << std::endl;
    state += RunTest([&testClass]() { testClass->InitializeSimple(); });

    std::wcout << L"GetChildren" << std::endl;
    state += RunTest([&testClass]() { testClass->GetChildren(); });

    std::wcout << L"OperatorEqual" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorEqual(); });

    std::wcout << L"OperatorNotEqualLeftParenthesisToken" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualLeftParenthesisToken(); });

    std::wcout << L"OperatorNotEqualParameters" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualParameters(); });

    std::wcout << L"OperatorNotEqualRightParenthesisToken" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualRightParenthesisToken(); });

    return state;
}