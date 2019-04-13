#pragma once
#include "DeleteFunctionBodyTests.h"
#include "../RunTest.h"

TestState RunDeleteFunctionBodyTests()
{
    std::string className = "DeleteFunctionBodyTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::DeleteFunctionBodyTests>();
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
        "OperatorNotEqualDeleteToken",
        [&testClass]() { testClass->OperatorNotEqualDeleteToken(); });
    state += RunTest(
        className,
        "OperatorNotEqualSemicolonToken",
        [&testClass]() { testClass->OperatorNotEqualSemicolonToken(); });

    return state;
}