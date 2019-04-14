#pragma once
#include "AST/OuterTree/Statement/CompoundStatementTests.h"
#include "RunTest.h"

TestState RunOuterTreeCompoundStatementTests()
{
    std::string className = "OuterTree::CompoundStatementTests";
    auto testClass = std::make_unique<Soup::Syntax::OuterTree::UnitTests::CompoundStatementTests>();
    TestState state = { 0, 0 };

    state += RunTest(
        className,
        "InitializeEmpty",
        [&testClass]() { testClass->InitializeEmpty(); });
    state += RunTest(
        className,
        "InitializeSingleStatement",
        [&testClass]() { testClass->InitializeSingleStatement(); });
    state += RunTest(
        className,
        "GetChildrenEmpty",
        [&testClass]() { testClass->GetChildrenEmpty(); });
    state += RunTest(
        className,
        "GetChildrenSingleStatement",
        [&testClass]() { testClass->GetChildrenSingleStatement(); });
    state += RunTest(
        className,
        "OperatorEqualEmpty",
        [&testClass]() { testClass->OperatorEqualEmpty(); });
    state += RunTest(
        className,
        "OperatorEqualSingleStatement",
        [&testClass]() { testClass->OperatorEqualSingleStatement(); });
    state += RunTest(
        className,
        "OperatorNotEqualOpenBraceToken",
        [&testClass]() { testClass->OperatorNotEqualOpenBraceToken(); });
    state += RunTest(
        className,
        "OperatorNotEqualEmpty",
        [&testClass]() { testClass->OperatorNotEqualEmpty(); });
    state += RunTest(
        className,
        "OperatorNotEqualSingleStatement",
        [&testClass]() { testClass->OperatorNotEqualSingleStatement(); });
    state += RunTest(
        className,
        "OperatorNotEqualCloseBraceToken",
        [&testClass]() { testClass->OperatorNotEqualCloseBraceToken(); });

    return state;
}