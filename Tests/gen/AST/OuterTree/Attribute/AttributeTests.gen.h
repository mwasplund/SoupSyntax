#pragma once
#include "AST/OuterTree/Attribute/AttributeTests.h"
#include "RunTest.h"

TestState RunOuterTreeAttributeTests()
{
    std::string className = "OuterTree::AttributeTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::OuterTreeAttributeTests>();
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
        "OperatorNotEqualIdentifier",
        [&testClass]() { testClass->OperatorNotEqualIdentifier(); });
    state += RunTest(
        className,
        "OperatorNotEqualArgumentClause",
        [&testClass]() { testClass->OperatorNotEqualArgumentClause(); });
    state += RunTest(
        className,
        "OperatorNotEqualNoArgumentClause",
        [&testClass]() { testClass->OperatorNotEqualNoArgumentClause(); });

    return state;
}