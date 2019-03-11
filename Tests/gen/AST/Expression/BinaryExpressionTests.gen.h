#pragma once
#include "BinaryExpressionTests.h"
#include "../RunTest.h"

TestState RunBinaryExpressionTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::BinaryExpressionTests>();
    TestState state = { 0, 0 };

    std::wcout << L"Running BinaryExpressionTests:" << std::endl;

    std::wcout << L"InitializeSimple" << std::endl;
    state += RunTest([&testClass]() { testClass->InitializeSimple(); });

    std::wcout << L"GetChildren" << std::endl;
    state += RunTest([&testClass]() { testClass->GetChildren(); });

    std::wcout << L"OperatorEqual" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorEqual(); });

    std::wcout << L"OperatorNotEqualOperatorType" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualOperatorType(); });

    std::wcout << L"OperatorNotEqualLeft" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualLeft(); });

    std::wcout << L"OperatorNotEqualOperatorToken" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualOperatorToken(); });

    std::wcout << L"OperatorNotEqualRight" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualRight(); });

    return state;
}