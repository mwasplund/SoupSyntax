#pragma once
#include "AST/InnerTree/Declaration/DeleteFunctionBodyTests.h"
#include "RunTest.h"

TestState RunInnerTreeDeleteFunctionBodyTests()
{
    std::string className = "InnerTree::DeleteFunctionBodyTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::InnerTreeDeleteFunctionBodyTests>();
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