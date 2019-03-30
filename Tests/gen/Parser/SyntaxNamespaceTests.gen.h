#pragma once
#include "../RunTest.h"
#include "SyntaxNamespaceTests.h"

TestState RunSyntaxNamespaceTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::SyntaxNamespaceTests>();
    TestState state = { 0, 0 };

    std::cout << "Running SyntaxNamespaceTests:" << std::endl;

    std::cout << "SimpleNamedNamespace" << std::endl;
    //state += RunTest([&testClass]() { testClass->SimpleNamedNamespace(); });

    std::cout << "SimpleUnnamedNamespace" << std::endl;
    //state += RunTest([&testClass]() { testClass->SimpleUnnamedNamespace(); });

    std::cout << "SimpleNestedNamespace" << std::endl;
    //state += RunTest([&testClass]() { testClass->SimpleNestedNamespace(); });

    return state;
}
