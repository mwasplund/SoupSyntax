#pragma once
#include "AST/OuterTree/Declaration/ParameterTests.h"
#include "RunTest.h"

TestState RunOuterTreeParameterTests()
{
    std::string className = "OuterTree::ParameterTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::OuterTreeParameterTests>();
    TestState state = { 0, 0 };

    state += RunTest(
        className,
        "InitializeSimple",
        [&testClass]() { testClass->InitializeSimple(); });
    state += RunTest(
        className,
        "GetChildren",
        [&testClass]() { testClass->GetChildren(); });
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