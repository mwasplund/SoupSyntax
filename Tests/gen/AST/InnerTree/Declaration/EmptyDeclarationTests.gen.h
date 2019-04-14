#pragma once
#include "AST/InnerTree/Declaration/EmptyDeclarationTests.h"
#include "RunTest.h"

TestState RunInnerTreeEmptyDeclarationTests()
{
    std::string className = "InnerTree::EmptyDeclarationTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::EmptyDeclarationTests>();
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
        "OperatorNotEqualSemicolonToken",
        [&testClass]() { testClass->OperatorNotEqualSemicolonToken(); });

    return state;
}