#pragma once
#include "AST/OuterTree/Expression/LambdaCaptureClauseTests.h"
#include "RunTest.h"

TestState RunOuterTreeLambdaCaptureClauseTests()
{
    std::string className = "OuterTree::LambdaCaptureClauseTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::OuterTreeLambdaCaptureClauseTests>();
    TestState state = { 0, 0 };

    state += RunTest(
        className,
        "InitializeSimple",
        [&testClass]() { testClass->InitializeSimple(); });
    state += RunTest(
        className,
        "InitializeComplex",
        [&testClass]() { testClass->InitializeComplex(); });
    state += RunTest(
        className,
        "GetChildrenSimple",
        [&testClass]() { testClass->GetChildrenSimple(); });
    state += RunTest(
        className,
        "GetChildrenComplex",
        [&testClass]() { testClass->GetChildrenComplex(); });
    state += RunTest(
        className,
        "OperatorEqualSimple",
        [&testClass]() { testClass->OperatorEqualSimple(); });
    state += RunTest(
        className,
        "OperatorEqualComplex",
        [&testClass]() { testClass->OperatorEqualComplex(); });
    state += RunTest(
        className,
        "OperatorNotEqualNoAmpersandToken",
        [&testClass]() { testClass->OperatorNotEqualNoAmpersandToken(); });
    state += RunTest(
        className,
        "OperatorNotEqualAmpersandToken",
        [&testClass]() { testClass->OperatorNotEqualAmpersandToken(); });
    state += RunTest(
        className,
        "OperatorNotEqualIdentifierToken",
        [&testClass]() { testClass->OperatorNotEqualIdentifierToken(); });

    return state;
}