#pragma once
#include "ValueEqualInitializerTests.h"
#include "../RunTest.h"

TestState RunValueEqualInitializerTests()
{
    std::string className = "ValueEqualInitializerTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::ValueEqualInitializerTests>();
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
        "OperatorNotEqualEqualToken",
        [&testClass]() { testClass->OperatorNotEqualEqualToken(); });
    state += RunTest(
        className,
        "OperatorNotEqualExpression",
        [&testClass]() { testClass->OperatorNotEqualExpression(); });

    return state;
}