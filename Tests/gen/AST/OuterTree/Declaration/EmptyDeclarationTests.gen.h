#pragma once
#include "AST/OuterTree/Declaration/EmptyDeclarationTests.h"
#include "RunTest.h"

TestState RunOuterTreeEmptyDeclarationTests()
{
    std::string className = "OuterTree::EmptyDeclarationTests";
    auto testClass = std::make_unique<Soup::Syntax::OuterTree::UnitTests::EmptyDeclarationTests>();
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
        "OperatorNotEqualSemicolonToken",
        [&testClass]() { testClass->OperatorNotEqualSemicolonToken(); });

    return state;
}