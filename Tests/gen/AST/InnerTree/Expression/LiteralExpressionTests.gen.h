#pragma once
#include "AST/InnerTree/Expression/LiteralExpressionTests.h"
#include "RunTest.h"

TestState RunInnerTreeLiteralExpressionTests()
{
    std::string className = "InnerTree::LiteralExpressionTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::LiteralExpressionTests>();
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
        "OperatorNotEqualType",
        [&testClass]() { testClass->OperatorNotEqualType(); });
    state += RunTest(
        className,
        "OperatorNotEqualToken",
        [&testClass]() { testClass->OperatorNotEqualToken(); });

    return state;
}