#pragma once
#include "ThisExpressionTests.h"
#include "../RunTest.h"

TestState RunThisExpressionTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ThisExpressionTests>();
    TestState state = { 0, 0 };

    std::cout << "Running ThisExpressionTests:" << std::endl;

    std::cout << "InitializeSimple" << std::endl;
    state += RunTest([&testClass]() { testClass->InitializeSimple(); });

    std::cout << "GetChildren" << std::endl;
    state += RunTest([&testClass]() { testClass->GetChildren(); });

    std::cout << "OperatorEqual" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorEqual(); });

    std::cout << "OperatorNotEqualToken" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualToken(); });

    return state;
}