#pragma once
#include "AST/InnerTree/Declaration/ConstructorDefinitionTests.h"
#include "RunTest.h"

TestState RunInnerTreeConstructorDefinitionTests()
{
    std::string className = "InnerTree::ConstructorDefinitionTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::InnerTreeConstructorDefinitionTests>();
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
        "OperatorNotEqualParameterList",
        [&testClass]() { testClass->OperatorNotEqualParameterList(); });
    state += RunTest(
        className,
        "OperatorNotEqualNoConstructorInitializer",
        [&testClass]() { testClass->OperatorNotEqualNoConstructorInitializer(); });
    state += RunTest(
        className,
        "OperatorNotEqualConstructorInitializer",
        [&testClass]() { testClass->OperatorNotEqualConstructorInitializer(); });
    state += RunTest(
        className,
        "OperatorNotEqualBody",
        [&testClass]() { testClass->OperatorNotEqualBody(); });

    return state;
}