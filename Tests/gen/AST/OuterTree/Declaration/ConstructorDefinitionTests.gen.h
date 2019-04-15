#pragma once
#include "AST/OuterTree/Declaration/ConstructorDefinitionTests.h"
#include "RunTest.h"

TestState RunOuterTreeConstructorDefinitionTests()
{
    std::string className = "OuterTree::ConstructorDefinitionTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::OuterTreeConstructorDefinitionTests>();
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
        "OperatorNotEqualReturnType",
        [&testClass]() { testClass->OperatorNotEqualReturnType(); });
    state += RunTest(
        className,
        "OperatorNotEqualIdentifier",
        [&testClass]() { testClass->OperatorNotEqualIdentifier(); });
    state += RunTest(
        className,
        "OperatorNotEqualParameterList",
        [&testClass]() { testClass->OperatorNotEqualParameterList(); });
    state += RunTest(
        className,
        "OperatorNotEqualBody",
        [&testClass]() { testClass->OperatorNotEqualBody(); });

    return state;
}