#pragma once
#include "AST/InnerTree/SyntaxTokenTests.h"
#include "RunTest.h"

TestState RunInnerTreeSyntaxTokenTests()
{
    std::string className = "InnerTree::SyntaxTokenTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::InnerTreeSyntaxTokenTests>();
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