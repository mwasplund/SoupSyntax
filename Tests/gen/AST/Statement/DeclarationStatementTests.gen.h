#pragma once
#include "DeclarationStatementTests.h"
#include "../RunTest.h"

TestState RunDeclarationStatementTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::DeclarationStatementTests>();
    TestState state = { 0, 0 };

    std::cout << "Running DeclarationStatementTests:" << std::endl;

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
        [&testClass]() { testClass->OperatorNotEqualDeclaration(); });

    return state;
}