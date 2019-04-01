#pragma once
#include "ParseNamespaceDefinitionTests.h"
#include "../../RunTest.h"

TestState RunParseNamespaceDefinitionTests()
{
    std::string className = "ParseNamespaceDefinitionTests";
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ParseNamespaceDefinitionTests>();
    TestState state = { 0, 0 };

    state += RunTest(
        className,
        "SimpleAnonymous",
        [&testClass]() { testClass->SimpleAnonymous(); });
    state += RunTest(
        className,
        "SimpleNamedNamespaceSingleDeclaration",
        [&testClass]() { testClass->SimpleNamedNamespaceSingleDeclaration(); });

    return state;
}
