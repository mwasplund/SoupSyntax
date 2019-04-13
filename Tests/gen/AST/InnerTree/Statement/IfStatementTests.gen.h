#pragma once
#include "IfStatementTests.h"
#include "../RunTest.h"

TestState RunIfStatementTests()
{
    std::string className = "IfStatementTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::IfStatementTests>();
    TestState state = { 0, 0 };

    state += RunTest(
        className,
        "InitializeNoElseClause",
        [&testClass]() { testClass->InitializeNoElseClause(); });
    state += RunTest(
        className,
        "InitializeWithElseClause",
        [&testClass]() { testClass->InitializeWithElseClause(); });
    state += RunTest(
        className,
        "OperatorEqualNoElseClause",
        [&testClass]() { testClass->OperatorEqualNoElseClause(); });
    state += RunTest(
        className,
        "OperatorEqualWithElseClause",
        [&testClass]() { testClass->OperatorEqualWithElseClause(); });
    state += RunTest(
        className,
        "OperatorNotEqualIfToken",
        [&testClass]() { testClass->OperatorNotEqualIfToken(); });
    state += RunTest(
        className,
        "OperatorNotEqualOpenParenthesisToken",
        [&testClass]() { testClass->OperatorNotEqualOpenParenthesisToken(); });
    state += RunTest(
        className,
        "OperatorNotEqualConditionExpression",
        [&testClass]() { testClass->OperatorNotEqualConditionExpression(); });
    state += RunTest(
        className,
        "OperatorNotEqualCloseParenthesisToken",
        [&testClass]() { testClass->OperatorNotEqualCloseParenthesisToken(); });
    state += RunTest(
        className,
        "OperatorNotEqualStatement",
        [&testClass]() { testClass->OperatorNotEqualStatement(); });
    state += RunTest(
        className,
        "OperatorNotEqualNoElseClause",
        [&testClass]() { testClass->OperatorNotEqualNoElseClause(); });
    state += RunTest(
        className,
        "OperatorNotEqualWithElseClause",
        [&testClass]() { testClass->OperatorNotEqualWithElseClause(); });

    return state;
}