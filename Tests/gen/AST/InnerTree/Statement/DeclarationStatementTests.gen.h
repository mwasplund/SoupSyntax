#pragma once
#include "AST/InnerTree/Statement/DeclarationStatementTests.h"
#include "RunTest.h"

TestState RunInnerTreeDeclarationStatementTests()
{
    std::string className = "InnerTree::DeclarationStatementTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::InnerTreeDeclarationStatementTests>();
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
        [&testClass]() { testClass->OperatorNotEqualDeclaration(); });

    return state;
}