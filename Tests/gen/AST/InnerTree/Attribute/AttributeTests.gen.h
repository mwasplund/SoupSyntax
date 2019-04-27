#pragma once
#include "AST/InnerTree/Attribute/AttributeTests.h"
#include "RunTest.h"

TestState RunInnerTreeAttributeTests()
{
    std::string className = "InnerTree::AttributeTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::InnerTreeAttributeTests>();
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