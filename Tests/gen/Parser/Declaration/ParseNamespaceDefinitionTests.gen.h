#pragma once
#include "ParseNamespaceDefinitionTests.h"
#include "../../RunTest.h"

TestState RunParseNamespaceDefinitionTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ParseNamespaceDefinitionTests>();
    TestState state = { 0, 0 };

    std::cout << "Running ParseNamespaceDefinitionTests:" << std::endl;

    state += RunTest(
        "SimpleAnonymous",
        [&testClass]() { testClass->SimpleAnonymous(); });

    state += RunTest(
        "SimpleNamedNamespaceSingleDeclaration",
        [&testClass]() { testClass->SimpleNamedNamespaceSingleDeclaration(); });

    return state;
}
