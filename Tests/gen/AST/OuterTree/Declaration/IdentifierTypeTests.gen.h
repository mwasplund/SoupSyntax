#pragma once
#include "AST/OuterTree/Declaration/IdentifierTypeTests.h"
#include "RunTest.h"

TestState RunOuterTreeIdentifierTypeTests()
{
    std::string className = "OuterTree::IdentifierTypeTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::OuterTreeIdentifierTypeTests>();
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
        "GetChildrenUnqualified",
        [&testClass]() { testClass->GetChildrenUnqualified(); });
    state += RunTest(
        className,
        "GetChildrenGlobalQualified",
        [&testClass]() { testClass->GetChildrenGlobalQualified(); });
    state += RunTest(
        className,
        "GetChildrenSingleQualifiedIdentifier",
        [&testClass]() { testClass->GetChildrenSingleQualifiedIdentifier(); });
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