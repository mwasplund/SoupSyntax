#pragma once
#include "EmptyDeclarationTests.h"
#include "../RunTest.h"

TestState RunEmptyDeclarationTests()
{
    std::string className = "EmptyDeclarationTests";
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::EmptyDeclarationTests>();
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