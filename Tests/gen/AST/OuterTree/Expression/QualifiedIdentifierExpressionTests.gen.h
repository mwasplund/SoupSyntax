#pragma once
#include "AST/OuterTree/Expression/QualifiedIdentifierExpressionTests.h"
#include "RunTest.h"

TestState RunOuterTreeQualifiedIdentifierExpressionTests()
{
    std::string className = "OuterTree::QualifiedIdentifierExpressionTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::OuterTreeQualifiedIdentifierExpressionTests>();
    TestState state = { 0, 0 };

    state += RunTest(
        className,
        "InitializeSingleQualifiedIdentifierExpression",
        [&testClass]() { testClass->InitializeSingleQualifiedIdentifierExpression(); });
    state += RunTest(
        className,
        "InitializeGlobalDoubleQualifiedIdentifierExpression",
        [&testClass]() { testClass->InitializeGlobalDoubleQualifiedIdentifierExpression(); });
    state += RunTest(
        className,
        "GlobalQualifiedIdentifierExpressionGetChildren",
        [&testClass]() { testClass->GlobalQualifiedIdentifierExpressionGetChildren(); });
    state += RunTest(
        className,
        "GlobalQualifiedIdentifierExpressionEqual",
        [&testClass]() { testClass->GlobalQualifiedIdentifierExpressionEqual(); });
    state += RunTest(
        className,
        "GlobalQualifiedIdentifierExpressionNotEqualLeft",
        [&testClass]() { testClass->GlobalQualifiedIdentifierExpressionNotEqualLeft(); });
    state += RunTest(
        className,
        "GlobalQualifiedIdentifierExpressionNotEqualDoubleColonToken",
        [&testClass]() { testClass->GlobalQualifiedIdentifierExpressionNotEqualDoubleColonToken(); });
    state += RunTest(
        className,
        "GlobalQualifiedIdentifierExpressionNotEqualRight",
        [&testClass]() { testClass->GlobalQualifiedIdentifierExpressionNotEqualRight(); });
    state += RunTest(
        className,
        "SingleQualifiedIdentifierExpressionGetChildren",
        [&testClass]() { testClass->SingleQualifiedIdentifierExpressionGetChildren(); });
    state += RunTest(
        className,
        "SingleQualifiedIdentifierExpressionEqual",
        [&testClass]() { testClass->SingleQualifiedIdentifierExpressionEqual(); });
    state += RunTest(
        className,
        "SingleQualifiedIdentifierExpressionNotEqualLeft",
        [&testClass]() { testClass->SingleQualifiedIdentifierExpressionNotEqualLeft(); });
    state += RunTest(
        className,
        "SingleQualifiedIdentifierExpressionNotEqualLeftGlobal",
        [&testClass]() { testClass->SingleQualifiedIdentifierExpressionNotEqualLeftGlobal(); });
    state += RunTest(
        className,
        "SingleQualifiedIdentifierExpressionNotEqualDoubleColonToken",
        [&testClass]() { testClass->SingleQualifiedIdentifierExpressionNotEqualDoubleColonToken(); });
    state += RunTest(
        className,
        "SingleQualifiedIdentifierExpressionNotEqualRight",
        [&testClass]() { testClass->SingleQualifiedIdentifierExpressionNotEqualRight(); });

    return state;
}