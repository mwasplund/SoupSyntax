#pragma once
#include "QualifiedIdentifierExpressionTests.h"
#include "../RunTest.h"

TestState RunQualifiedIdentifierExpressionTests()
{
    std::string className = "QualifiedIdentifierExpressionTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::QualifiedIdentifierExpressionTests>();
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