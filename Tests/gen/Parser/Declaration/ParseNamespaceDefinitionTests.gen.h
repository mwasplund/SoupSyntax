#pragma once
#include "ParseNamespaceDefinitionTests.h"
#include "../../RunTest.h"

TestState RunParseNamespaceDefinitionTests()
{
    std::string className = "ParseNamespaceDefinitionTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::ParseNamespaceDefinitionTests>();
    TestState state = { 0, 0 };

    state += RunTest(
        className,
        "SimpleAnonymous",
        [&testClass]() { testClass->SimpleAnonymous(); });
    state += RunTest(
        className,
        "SimpleNamed",
        [&testClass]() { testClass->SimpleNamed(); });
    state += RunTest(
        className,
        "NestedName",
        [&testClass]() { testClass->NestedName(); });
    state += RunTest(
        className,
        "SimpleNamedNamespaceSingleDeclaration",
        [&testClass]() { testClass->SimpleNamedNamespaceSingleDeclaration(); });

    return state;
}
