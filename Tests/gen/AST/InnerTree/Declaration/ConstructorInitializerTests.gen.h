#pragma once
#include "AST/InnerTree/Declaration/ConstructorInitializerTests.h"
#include "RunTest.h"

TestState RunInnerTreeConstructorInitializerTests()
{
    std::string className = "InnerTree::ConstructorInitializerTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::ConstructorInitializerTests>();
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