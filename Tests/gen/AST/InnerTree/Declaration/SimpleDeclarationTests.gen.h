#pragma once
#include "SimpleDeclarationTests.h"
#include "../RunTest.h"

TestState RunSimpleDeclarationTests()
{
    std::string className = "SimpleDeclarationTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::SimpleDeclarationTests>();
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
        "OperatorNotEqualInitializerDeclaratorList",
        [&testClass]() { testClass->OperatorNotEqualInitializerDeclaratorList(); });
    state += RunTest(
        className,
        "OperatorNotEqualSemicolonToken",
        [&testClass]() { testClass->OperatorNotEqualSemicolonToken(); });

    return state;
}