#pragma once
#include "UnaryExpressionTests.h"
#include "../RunTest.h"

TestState RunUnaryExpressionTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::UnaryExpressionTests>();
    TestState state = { 0, 0 };

    std::wcout << L"Running UnaryExpressionTests:" << std::endl;

    std::wcout << L"InitializeSimple" << std::endl;
    state += RunTest([&testClass]() { testClass->InitializeSimple(); });

    std::wcout << L"PrefixOperatorGetChildren" << std::endl;
    state += RunTest([&testClass]() { testClass->PrefixOperatorGetChildren(); });

    std::wcout << L"PostfixOperatorGetChildren" << std::endl;
    state += RunTest([&testClass]() { testClass->PostfixOperatorGetChildren(); });

    std::wcout << L"OperatorEqual" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorEqual(); });

    std::wcout << L"OperatorNotEqualOperator" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualOperator(); });

    std::wcout << L"OperatorNotEqualOperand" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualOperand(); });

    std::wcout << L"OperatorNotEqualOperatorToken" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualOperatorToken(); });

    return state;
}