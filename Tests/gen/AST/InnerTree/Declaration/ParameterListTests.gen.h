#pragma once
#include "AST/InnerTree/Declaration/ParameterListTests.h"
#include "RunTest.h"

TestState RunInnerTreeParameterListTests()
{
    std::string className = "InnerTree::ParameterListTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::ParameterListTests>();
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
        "OperatorNotEqualParameters",
        [&testClass]() { testClass->OperatorNotEqualParameters(); });
    state += RunTest(
        className,
        "OperatorNotEqualCloseParenthesisToken",
        [&testClass]() { testClass->OperatorNotEqualCloseParenthesisToken(); });

    return state;
}