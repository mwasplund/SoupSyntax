#pragma once
#include "ElseClauseTests.h"
#include "../RunTest.h"

TestState RunElseClauseTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ElseClauseTests>();
    TestState state = { 0, 0 };

    std::wcout << L"Running ElseClauseTests:" << std::endl;

    std::wcout << L"InitializeSimple" << std::endl;
    state += RunTest([&testClass]() { testClass->InitializeSimple(); });

    std::wcout << L"GetChildren" << std::endl;
    state += RunTest([&testClass]() { testClass->GetChildren(); });

    std::wcout << L"OperatorEqual" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorEqual(); });

    std::wcout << L"OperatorNotEqualElseToken" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualElseToken(); });

    std::wcout << L"OperatorNotEqualStatement" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualStatement(); });

    return state;
}