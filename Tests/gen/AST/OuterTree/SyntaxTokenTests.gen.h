#pragma once
#include "AST/OuterTree/Statement/SyntaxTokenTests.h"
#include "RunTest.h"

TestState RunOuterTreeSyntaxTokenTests()
{
    std::string className = "OuterTree::SyntaxTokenTests";
    auto testClass = std::make_unique<Soup::Syntax::OuterTree::UnitTests::SyntaxTokenTests>();
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
        "OperatorNotEqualType",
        [&testClass]() { testClass->OperatorNotEqualType(); });
    state += RunTest(
        className,
        "OperatorNotEqualValue",
        [&testClass]() { testClass->OperatorNotEqualValue(); });

    return state;
}