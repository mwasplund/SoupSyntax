#pragma once
#include "InitializerDeclaratorListTests.h"
#include "../RunTest.h"

TestState RunInitializerDeclaratorListTests()
{
    std::string className = "InitializerDeclaratorListTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::InitializerDeclaratorListTests>();
    TestState state = { 0, 0 };

    state += RunTest(
        className,
        "InitializeSimple",
        [&testClass]() { testClass->InitializeSimple(); });
    state += RunTest(
        className,
        "OperatorEqual",
        [&testClass]() { testClass->OperatorEqual(); });
    state += RunTest(
        className,
        "OperatorNotEqualLessItems",
        [&testClass]() { testClass->OperatorNotEqualLessItems(); });
    state += RunTest(
        className,
        "OperatorNotEqualWithItems",
        [&testClass]() { testClass->OperatorNotEqualWithItems(); });

    return state;
}