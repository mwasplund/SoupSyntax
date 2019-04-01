#pragma once
#include "SyntaxTokenTests.h"
#include "../RunTest.h"

TestState RunSyntaxTokenTests()
{
    std::string className = "SyntaxTokenTests";
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::SyntaxTokenTests>();
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