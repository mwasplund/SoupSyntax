#pragma once
#include "AST/OuterTree/Statement/ReturnStatementTests.h"
#include "RunTest.h"

TestState RunOuterTreeReturnStatementTests()
{
    std::string className = "OuterTree::ReturnStatementTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::OuterTreeReturnStatementTests>();
    TestState state = { 0, 0 };

    state += RunTest(
        className,
        "InitializeNoExpression",
        [&testClass]() { testClass->InitializeNoExpression(); });
    state += RunTest(
        className,
        "InitializeWithExpression",
        [&testClass]() { testClass->InitializeWithExpression(); });
    state += RunTest(
        className,
        "GetChildrenNoExpression",
        [&testClass]() { testClass->GetChildrenNoExpression(); });
    state += RunTest(
        className,
        "GetChildrenWithExpression",
        [&testClass]() { testClass->GetChildrenWithExpression(); });
    state += RunTest(
        className,
        "OperatorEqualNoExpression",
        [&testClass]() { testClass->OperatorEqualNoExpression(); });
    state += RunTest(
        className,
        "OperatorEqualWithExpression",
        [&testClass]() { testClass->OperatorEqualWithExpression(); });
    state += RunTest(
        className,
        "OperatorNotEqualReturnToken",
        [&testClass]() { testClass->OperatorNotEqualReturnToken(); });
    state += RunTest(
        className,
        "OperatorNotEqualNoExpression",
        [&testClass]() { testClass->OperatorNotEqualNoExpression(); });
    state += RunTest(
        className,
        "OperatorNotEqualWithExpression",
        [&testClass]() { testClass->OperatorNotEqualWithExpression(); });
    state += RunTest(
        className,
        "OperatorNotEqualSemicolonToken",
        [&testClass]() { testClass->OperatorNotEqualSemicolonToken(); });

    return state;
}