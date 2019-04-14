#pragma once
#include "AST/OuterTree/Declaration/InitializerListTests.h"
#include "RunTest.h"

TestState RunOuterTreeInitializerListTests()
{
    std::string className = "OuterTree::InitializerListTests";
    auto testClass = std::make_unique<Soup::Syntax::OuterTree::UnitTests::InitializerListTests>();
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
        "OperatorNotEqualOpenParenthesisToken",
        [&testClass]() { testClass->OperatorNotEqualOpenParenthesisToken(); });
    state += RunTest(
        className,
        "OperatorNotEqualValues",
        [&testClass]() { testClass->OperatorNotEqualValues(); });
    state += RunTest(
        className,
        "OperatorNotEqualCloseParenthesisToken",
        [&testClass]() { testClass->OperatorNotEqualCloseParenthesisToken(); });

    return state;
}