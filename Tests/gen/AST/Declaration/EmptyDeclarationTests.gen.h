#pragma once
#include "EmptyDeclarationTests.h"
#include "../RunTest.h"

TestState RunEmptyDeclarationTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::EmptyDeclarationTests>();
    TestState state = { 0, 0 };

    std::cout << "Running EmptyDeclarationTests:" << std::endl;

    state += RunTest(
        "InitializeSimple",
        [&testClass]() { testClass->InitializeSimple(); });

    state += RunTest(
        "GetChildren",
        [&testClass]() { testClass->GetChildren(); });

    state += RunTest(
        "OperatorEqual",
        [&testClass]() { testClass->OperatorEqual(); });

    state += RunTest(
        "OperatorNotEqualSemicolonToken",
        [&testClass]() { testClass->OperatorNotEqualSemicolonToken(); });

    return state;
}