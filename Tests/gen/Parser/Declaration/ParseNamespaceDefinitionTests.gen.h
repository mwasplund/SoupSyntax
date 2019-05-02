#pragma once
#include "/Parser/Declaration/ParseNamespaceDefinitionTests.h"

TestState RunParseNamespaceDefinitionTests() 
 {
    auto className = "ParseNamespaceDefinitionTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::ParseNamespaceDefinitionTests>();
    TestState state = { 0, 0 };
    state += RunTest(className, "SimpleAnonymous", [&testClass]() { testClass->SimpleAnonymous(); });
    state += RunTest(className, "SimpleNamed", [&testClass]() { testClass->SimpleNamed(); });
    state += RunTest(className, "NestedName", [&testClass]() { testClass->NestedName(); });
    state += RunTest(className, "SimpleNamedNamespaceSingleDeclaration", [&testClass]() { testClass->SimpleNamedNamespaceSingleDeclaration(); });

    return state;
}