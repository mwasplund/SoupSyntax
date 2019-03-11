#pragma once
#include "SubscriptExpressionTests.h"
#include "../RunTest.h"

TestState RunSubscriptExpressionTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::SubscriptExpressionTests>();
    TestState state = { 0, 0 };

    std::wcout << L"Running SubscriptExpressionTests:" << std::endl;

    std::wcout << L"InitializeSimple" << std::endl;
    state += RunTest([&testClass]() { testClass->InitializeSimple(); });

    std::wcout << L"GetChildren" << std::endl;
    state += RunTest([&testClass]() { testClass->GetChildren(); });

    std::wcout << L"OperatorEqual" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorEqual(); });

    std::wcout << L"OperatorNotEqualLeft" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualLeft(); });

    std::wcout << L"OperatorNotEqualLeftBracket" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualLeftBracket(); });

    std::wcout << L"OperatorNotEqualRight" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualRight(); });

    std::wcout << L"OperatorNotEqualRightBracket" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualRightBracket(); });

    return state;
}