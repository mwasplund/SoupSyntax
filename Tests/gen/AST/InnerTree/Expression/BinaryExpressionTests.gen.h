#pragma once
#include "AST/InnerTree/Expression/BinaryExpressionTests.h"
#include "RunTest.h"

TestState RunInnerTreeBinaryExpressionTests()
{
    std::string className = "InnerTree::BinaryExpressionTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::InnerTreeBinaryExpressionTests>();
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
        "OperatorNotEqualOperatorType",
        [&testClass]() { testClass->OperatorNotEqualOperatorType(); });
    state += RunTest(
        className,
        "OperatorNotEqualLeft",
        [&testClass]() { testClass->OperatorNotEqualLeft(); });
    state += RunTest(
        className,
        "OperatorNotEqualOperatorToken",
        [&testClass]() { testClass->OperatorNotEqualOperatorToken(); });
    state += RunTest(
        className,
        "OperatorNotEqualRight",
        [&testClass]() { testClass->OperatorNotEqualRight(); });

    return state;
}