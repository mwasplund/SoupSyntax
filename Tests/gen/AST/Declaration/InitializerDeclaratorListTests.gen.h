#pragma once
#include "InitializerDeclaratorListTests.h"
#include "../RunTest.h"

TestState RunInitializerDeclaratorListTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::InitializerDeclaratorListTests>();
    TestState state = { 0, 0 };

    std::cout << "Running InitializerDeclaratorListTests:" << std::endl;

    state += RunTest(
        "InitializeSimple",
        [&testClass]() { testClass->InitializeSimple(); });

    state += RunTest(
        "GetChildren",
        [&testClass]() { testClass->GetChildren(); });

    state += RunTest(
        "OperatorEqual",
        [&testClass]() { testClass->OperatorEqual(); });

    state += RunTest(
        "OperatorNotEqualLessItems",
        [&testClass]() { testClass->OperatorNotEqualLessItems(); });

    state += RunTest(
        "OperatorNotEqualWithItems",
        [&testClass]() { testClass->OperatorNotEqualWithItems(); });

    return state;
}