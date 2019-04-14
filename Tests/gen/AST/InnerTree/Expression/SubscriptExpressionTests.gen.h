#pragma once
#include "AST/InnerTree/Expression/SubscriptExpressionTests.h"
#include "RunTest.h"

TestState RunInnerTreeSubscriptExpressionTests()
{
    std::string className = "InnerTree::SubscriptExpressionTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::SubscriptExpressionTests>();
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
        "OperatorNotEqualLeft",
        [&testClass]() { testClass->OperatorNotEqualLeft(); });
    state += RunTest(
        className,
        "OperatorNotEqualOpenBracket",
        [&testClass]() { testClass->OperatorNotEqualOpenBracket(); });
    state += RunTest(
        className,
        "OperatorNotEqualRight",
        [&testClass]() { testClass->OperatorNotEqualRight(); });
    state += RunTest(
        className,
        "OperatorNotEqualCloseBracket",
        [&testClass]() { testClass->OperatorNotEqualCloseBracket(); });

    return state;
}