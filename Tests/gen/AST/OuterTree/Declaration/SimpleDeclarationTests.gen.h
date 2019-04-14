#pragma once
#include "AST/OuterTree/Declaration/SimpleDeclarationTests.h"
#include "RunTest.h"

TestState RunOuterTreeSimpleDeclarationTests()
{
    std::string className = "OuterTree::SimpleDeclarationTests";
    auto testClass = std::make_unique<Soup::Syntax::OuterTree::UnitTests::SimpleDeclarationTests>();
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