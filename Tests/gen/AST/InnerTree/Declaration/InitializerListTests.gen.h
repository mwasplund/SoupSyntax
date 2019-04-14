#pragma once
#include "AST/InnerTree/Declaration/InitializerListTests.h"
#include "RunTest.h"

TestState RunInnerTreeInitializerListTests()
{
    std::string className = "InnerTree::InitializerListTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::InitializerListTests>();
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