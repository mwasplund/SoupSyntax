#pragma once
#include "InitializerDeclaratorListTests.h"
#include "../RunTest.h"

TestState RunInitializerDeclaratorListTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::InitializerDeclaratorListTests>();
    TestState state = { 0, 0 };

    std::cout << "Running InitializerDeclaratorListTests:" << std::endl;

    std::cout << "InitializeSimple" << std::endl;
    state += RunTest([&testClass]() { testClass->InitializeSimple(); });

    std::cout << "GetChildren" << std::endl;
    state += RunTest([&testClass]() { testClass->GetChildren(); });

    std::cout << "OperatorEqua" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorEqual(); });

    std::cout << "OperatorNotEqualLessItems" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualLessItems(); });

    std::cout << "OperatorNotEqualWithItems" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualWithItems(); });

    return state;
}