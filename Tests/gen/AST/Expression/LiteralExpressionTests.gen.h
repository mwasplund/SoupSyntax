#pragma once
#include "LiteralExpressionTests.h"
#include "../RunTest.h"

TestState RunLiteralExpressionTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::LiteralExressionTests>();
    TestState state = { 0, 0 };

    std::wcout << L"Running LiteralExressionTests:" << std::endl;

    std::wcout << L"InitializeSimple" << std::endl;
    state += RunTest([&testClass]() { testClass->InitializeSimple(); });

    std::wcout << L"GetChildren" << std::endl;
    state += RunTest([&testClass]() { testClass->GetChildren(); });

    std::wcout << L"OperatorEqual" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorEqual(); });

    std::wcout << L"OperatorNotEqualType" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualType(); });

    std::wcout << L"OperatorNotEqualToken" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualToken(); });

    return state;
}