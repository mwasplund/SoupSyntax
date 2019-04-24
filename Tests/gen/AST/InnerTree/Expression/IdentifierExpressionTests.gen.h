#pragma once
#include "AST/InnerTree/Expression/IdentifierExpressionTests.h"
#include "RunTest.h"

TestState RunInnerTreeIdentifierExpressionTests()
{
    std::string className = "InnerTree::IdentifierExpressionTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::InnerTreeIdentifierExpressionTests>();
    TestState state = { 0, 0 };

    state += RunTest(
        className,
        "InitializeUnqualified",
        [&testClass]() { testClass->InitializeUnqualified(); });
    state += RunTest(
        className,
        "InitializeGlobalQualified",
        [&testClass]() { testClass->InitializeGlobalQualified(); });
    state += RunTest(
        className,
        "InitializeSingleQualifiedIdentifier",
        [&testClass]() { testClass->InitializeSingleQualifiedIdentifier(); });
    state += RunTest(
        className,
        "OperatorEqualUnqualified",
        [&testClass]() { testClass->OperatorEqualUnqualified(); });
    state += RunTest(
        className,
        "OperatorEqualQualified",
        [&testClass]() { testClass->OperatorEqualQualified(); });
    state += RunTest(
        className,
        "OperatorNotEqualNoQualifier",
        [&testClass]() { testClass->OperatorNotEqualNoQualifier(); });
    state += RunTest(
        className,
        "OperatorNotEqualQualifier",
        [&testClass]() { testClass->OperatorNotEqualQualifier(); });
    state += RunTest(
        className,
        "OperatorNotEqualUnqualifiedIdentifier",
        [&testClass]() { testClass->OperatorNotEqualUnqualifiedIdentifier(); });

    return state;
}