#pragma once
#include "NameExpressionTests.h"
#include "../RunTest.h"

TestState RunNameExpressionTests()
{
    std::string className = "NameExpressionTests";
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::NameExpressionTests>();
    TestState state = { 0, 0 };

    state += RunTest(
        className,
        "InitializeSimpleNameExpression",
        [&testClass]() { testClass->InitializeSimpleNameExpression(); });
    state += RunTest(
        className,
        "InitializeSingleQualifiedNameExpression",
        [&testClass]() { testClass->InitializeSingleQualifiedNameExpression(); });
    state += RunTest(
        className,
        "InitializeGlobalDoubleQualifiedNameExpression",
        [&testClass]() { testClass->InitializeGlobalDoubleQualifiedNameExpression(); });
    state += RunTest(
        className,
        "SimpleNameExpressionGetChildren",
        [&testClass]() { testClass->SimpleNameExpressionGetChildren(); });
    state += RunTest(
        className,
        "SimpleNameExpressionOperatorEqual",
        [&testClass]() { testClass->SimpleNameExpressionOperatorEqual(); });
    state += RunTest(
        className,
        "SimpleNameExpressionOperatorNotEqualIdentifier",
        [&testClass]() { testClass->SimpleNameExpressionOperatorNotEqualIdentifier(); });
    state += RunTest(
        className,
        "GlobalQualifiedNameExpressionGetChildren",
        [&testClass]() { testClass->GlobalQualifiedNameExpressionGetChildren(); });
    state += RunTest(
        className,
        "GlobalQualifiedNameExpressionEqual",
        [&testClass]() { testClass->GlobalQualifiedNameExpressionEqual(); });
    state += RunTest(
        className,
        "GlobalQualifiedNameExpressionNotEqualLeft",
        [&testClass]() { testClass->GlobalQualifiedNameExpressionNotEqualLeft(); });
    state += RunTest(
        className,
        "GlobalQualifiedNameExpressionNotEqualDoubleColonToken",
        [&testClass]() { testClass->GlobalQualifiedNameExpressionNotEqualDoubleColonToken(); });
    state += RunTest(
        className,
        "GlobalQualifiedNameExpressionNotEqualRight",
        [&testClass]() { testClass->GlobalQualifiedNameExpressionNotEqualRight(); });
    state += RunTest(
        className,
        "SingleQualifiedNameExpressionGetChildren",
        [&testClass]() { testClass->SingleQualifiedNameExpressionGetChildren(); });
    state += RunTest(
        className,
        "SingleQualifiedNameExpressionEqual",
        [&testClass]() { testClass->SingleQualifiedNameExpressionEqual(); });
    state += RunTest(
        className,
        "SingleQualifiedNameExpressionNotEqualLeft",
        [&testClass]() { testClass->SingleQualifiedNameExpressionNotEqualLeft(); });
    state += RunTest(
        className,
        "SingleQualifiedNameExpressionNotEqualLeftGlobal",
        [&testClass]() { testClass->SingleQualifiedNameExpressionNotEqualLeftGlobal(); });
    state += RunTest(
        className,
        "SingleQualifiedNameExpressionNotEqualDoubleColonToken",
        [&testClass]() { testClass->SingleQualifiedNameExpressionNotEqualDoubleColonToken(); });
    state += RunTest(
        className,
        "SingleQualifiedNameExpressionNotEqualRight",
        [&testClass]() { testClass->SingleQualifiedNameExpressionNotEqualRight(); });

    return state;
}