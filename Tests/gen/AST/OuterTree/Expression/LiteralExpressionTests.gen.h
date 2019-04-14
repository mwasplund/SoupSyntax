#pragma once
#include "AST/OuterTree/Expression/LiteralExressionTests.h"
#include "RunTest.h"

TestState RunOuterTreeLiteralExpressionTests()
{
    std::string className = "OuterTree::LiteralExressionTests";
    auto testClass = std::make_unique<Soup::Syntax::OuterTree::UnitTests::LiteralExressionTests>();
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
        "OperatorNotEqualType",
        [&testClass]() { testClass->OperatorNotEqualType(); });
    state += RunTest(
        className,
        "OperatorNotEqualToken",
        [&testClass]() { testClass->OperatorNotEqualToken(); });

    return state;
}