#pragma once
#include "SimpleDeclarationTests.h"
#include "../RunTest.h"

TestState RunSimpleDeclarationTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::SimpleDeclarationTests>();
    TestState state = { 0, 0 };

    std::cout << "Running SimpleDeclarationTests:" << std::endl;

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
        "OperatorNotEqualDeclarationSpecifier",
        [&testClass]() { testClass->OperatorNotEqualDeclarationSpecifier(); });

    state += RunTest(
        "OperatorNotEqualInitializerDeclaratorList",
        [&testClass]() { testClass->OperatorNotEqualInitializerDeclaratorList(); });

    state += RunTest(
        "OperatorNotEqualSemicolonToken",
        [&testClass]() { testClass->OperatorNotEqualSemicolonToken(); });

    return state;
}