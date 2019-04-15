#pragma once
#include "AST/InnerTree/Declaration/FunctionDefinitionTests.h"
#include "RunTest.h"

TestState RunInnerTreeFunctionDefinitionTests()
{
    std::string className = "InnerTree::FunctionDefinitionTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::InnerTreeFunctionDefinitionTests>();
    TestState state = { 0, 0 };

    state += RunTest(
        className,
        "InitializeSimple",
        [&testClass]() { testClass->InitializeSimple(); });
    state += RunTest(
        className,
        "OperatorEqual",
        [&testClass]() { testClass->OperatorEqual(); });
    state += RunTest(
        className,
        "OperatorNotEqualAttributeSpecifier",
        [&testClass]() { testClass->OperatorNotEqualAttributeSpecifier(); });
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