#pragma once
#include "ValueEqualInitializerTests.h"
#include "../RunTest.h"

TestState RunValueEqualInitializerTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ValueEqualInitializerTests>();
    TestState state = { 0, 0 };

    std::cout << "Running ValueEqualInitializerTests:" << std::endl;

    std::cout << "InitializeSimple" << std::endl;
    state += RunTest([&testClass]() { testClass->InitializeSimple(); });

    std::cout << "GetChildren" << std::endl;
    state += RunTest([&testClass]() { testClass->GetChildren(); });

    std::cout << "OperatorEqual" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorEqual(); });

    std::cout << "OperatorNotEqualEqualToken" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualEqualToken(); });

    std::cout << "OperatorNotEqualExpression" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualExpression(); });

    return state;
}