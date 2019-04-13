#pragma once
#include "ParameterTests.h"
#include "../RunTest.h"

TestState RunParameterTests()
{
    std::string className = "ParameterTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::ParameterTests>();
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
        "OperatorNotEqualDeclarationSpecifier",
        [&testClass]() { testClass->OperatorNotEqualDeclarationSpecifier(); });
    state += RunTest(
        className,
        "OperatorNotEqualDeclarator",
        [&testClass]() { testClass->OperatorNotEqualDeclarator(); });

    return state;
}