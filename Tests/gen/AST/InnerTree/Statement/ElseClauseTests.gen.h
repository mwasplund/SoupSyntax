#pragma once
#include "AST/InnerTree/Statement/ElseClauseTests.h"
#include "RunTest.h"

TestState RunInnerTreeElseClauseTests()
{
    std::string className = "InnerTree::ElseClauseTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::ElseClauseTests>();
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
        "OperatorNotEqualElseToken",
        [&testClass]() { testClass->OperatorNotEqualElseToken(); });
    state += RunTest(
        className,
        "OperatorNotEqualStatement",
        [&testClass]() { testClass->OperatorNotEqualStatement(); });

    return state;
}