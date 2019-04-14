#pragma once
#include "AST/OuterTree/Declaration/DeleteFunctionBodyTests.h"
#include "RunTest.h"

TestState RunOuterTreeDeleteFunctionBodyTests()
{
    std::string className = "OuterTree::DeleteFunctionBodyTests";
    auto testClass = std::make_unique<Soup::Syntax::OuterTree::UnitTests::DeleteFunctionBodyTests>();
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