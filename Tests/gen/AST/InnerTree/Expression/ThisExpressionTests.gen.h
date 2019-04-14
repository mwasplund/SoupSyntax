#pragma once
#include "AST/InnerTree/Expression/ThisExpressionTests.h"
#include "RunTest.h"

TestState RunInnerTreeThisExpressionTests()
{
    std::string className = "InnerTree::ThisExpressionTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::ThisExpressionTests>();
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
        "OperatorNotEqualToken",
        [&testClass]() { testClass->OperatorNotEqualToken(); });

    return state;
}