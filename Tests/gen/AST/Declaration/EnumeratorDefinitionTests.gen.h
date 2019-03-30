#pragma once
#include "EnumeratorDefinitionTests.h"
#include "../RunTest.h"

TestState RunEnumeratorDefinitionTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::EnumeratorDefinitionTests>();
    TestState state = { 0, 0 };

    std::cout << "Running EnumeratorDefinitionTests:" << std::endl;

    std::cout << "Initialize" << std::endl;
    state += RunTest([&testClass]() { testClass->Initialize(); });

    std::cout << "GetChildren" << std::endl;
    state += RunTest([&testClass]() { testClass->GetChildren(); });

    std::cout << "OperatorEqual" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorEqual(); });

    std::cout << "OperatorNotEqualIdentifierToken" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualIdentifierToken(); });

    return state;
}