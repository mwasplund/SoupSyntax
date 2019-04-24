#pragma once
#include "AST/OuterTree/Statement/DeclarationStatementTests.h"
#include "RunTest.h"

TestState RunOuterTreeDeclarationStatementTests()
{
    std::string className = "OuterTree::DeclarationStatementTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::OuterTreeDeclarationStatementTests>();
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
        [&testClass]() { testClass->OperatorNotEqualDeclaration(); });

    return state;
}