#pragma once
#include "AST/OuterTree/Statement/ElseClauseTests.h"
#include "RunTest.h"

TestState RunOuterTreeElseClauseTests()
{
    std::string className = "OuterTree::ElseClauseTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::OuterTreeElseClauseTests>();
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