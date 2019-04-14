#pragma once
#include "AST/OuterTree/Declaration/ConstructorInitializerTests.h"
#include "RunTest.h"

TestState RunOuterTreeConstructorInitializerTests()
{
    std::string className = "OuterTree::ConstructorInitializerTests";
    auto testClass = std::make_unique<Soup::Syntax::OuterTree::UnitTests::ConstructorInitializerTests>();
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
        "OperatorEqual",
        [&testClass]() { testClass->OperatorEqual(); });
    state += RunTest(
        className,
        "OperatorNotEqualColonToken",
        [&testClass]() { testClass->OperatorNotEqualColonToken(); });
    state += RunTest(
        className,
        "OperatorNotEqualInitializers",
        [&testClass]() { testClass->OperatorNotEqualInitializers(); });

    return state;
}