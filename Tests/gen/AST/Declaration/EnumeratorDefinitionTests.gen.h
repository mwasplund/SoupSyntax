#pragma once
#include "EnumeratorDefinitionTests.h"
#include "../RunTest.h"

TestState RunEnumeratorDefinitionTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::EnumeratorDefinitionTests>();
    TestState state = { 0, 0 };

    std::cout << "Running EnumeratorDefinitionTests:" << std::endl;

    state += RunTest(
        "Initialize",
        [&testClass]() { testClass->Initialize(); });

    state += RunTest(
        "GetChildren",
        [&testClass]() { testClass->GetChildren(); });

    state += RunTest(
        "OperatorEqual",
        [&testClass]() { testClass->OperatorEqual(); });

    state += RunTest(
        "OperatorNotEqualIdentifierToken",
        [&testClass]() { testClass->OperatorNotEqualIdentifierToken(); });

    return state;
}