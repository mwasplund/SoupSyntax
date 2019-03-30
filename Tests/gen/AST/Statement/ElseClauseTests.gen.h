#pragma once
#include "ElseClauseTests.h"
#include "../RunTest.h"

TestState RunElseClauseTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ElseClauseTests>();
    TestState state = { 0, 0 };

    std::cout << "Running ElseClauseTests:" << std::endl;

    std::cout << "InitializeSimple" << std::endl;
    state += RunTest([&testClass]() { testClass->InitializeSimple(); });

    std::cout << "GetChildren" << std::endl;
    state += RunTest([&testClass]() { testClass->GetChildren(); });

    std::cout << "OperatorEqual" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorEqual(); });

    std::cout << "OperatorNotEqualElseToken" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualElseToken(); });

    std::cout << "OperatorNotEqualStatement" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualStatement(); });

    return state;
}