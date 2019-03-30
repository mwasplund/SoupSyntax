#pragma once
#include "EmptyStatementTests.h"
#include "../RunTest.h"

TestState RunEmptyStatementTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::EmptyStatementTests>();
    TestState state = { 0, 0 };

    std::cout << "Running EmptyStatementTests:" << std::endl;

    std::cout << "InitializeSimple" << std::endl;
    state += RunTest([&testClass]() { testClass->InitializeSimple(); });

    std::cout << "GetChildren" << std::endl;
    state += RunTest([&testClass]() { testClass->GetChildren(); });

    std::cout << "OperatorEqual" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorEqual(); });

    std::cout << "OperatorNotEqualSemicolonToken" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualSemicolonToken(); });

    return state;
}