#pragma once
#include "AST/InnerTree/Declaration/ParameterTests.h"
#include "RunTest.h"

TestState RunInnerTreeParameterTests()
{
    std::string className = "InnerTree::ParameterTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::InnerTreeParameterTests>();
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
        "OperatorNotEqualDeclarationSpecifierSequence",
        [&testClass]() { testClass->OperatorNotEqualDeclarationSpecifierSequence(); });
    state += RunTest(
        className,
        "OperatorNotEqualDeclarator",
        [&testClass]() { testClass->OperatorNotEqualDeclarator(); });

    return state;
}