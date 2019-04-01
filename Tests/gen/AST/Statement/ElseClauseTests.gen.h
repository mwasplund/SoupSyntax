#pragma once
#include "ElseClauseTests.h"
#include "../RunTest.h"

TestState RunElseClauseTests()
{
    std::string className = "ElseClauseTests";
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ElseClauseTests>();
    TestState state = { 0, 0 };

    state += RunTest(
        className,
        "InitializeSimple",
        [&testClass]() { testClass->InitializeSimple(); });
    state += RunTest(
        className,
        "GetChildren",
        [&testClass]() { testClass->GetChildren(); });
    state += RunTest(
        className,
        "OperatorEqual",
        [&testClass]() { testClass->OperatorEqual(); });
    state += RunTest(
        className,
        "OperatorNotEqualElseToken",
        [&testClass]() { testClass->OperatorNotEqualElseToken(); });
    state += RunTest(
        className,
        "OperatorNotEqualStatement",
        [&testClass]() { testClass->OperatorNotEqualStatement(); });

    return state;
}