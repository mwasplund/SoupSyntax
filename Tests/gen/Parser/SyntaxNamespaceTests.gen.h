#pragma once
#include "../RunTest.h"
#include "SyntaxNamespaceTests.h"

TestState RunSyntaxNamespaceTests()
{
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::SyntaxNamespaceTests>();
    TestState state = { 0, 0 };

    // std::cout << "Running SyntaxNamespaceTests:" << std::endl;

    // TODO std::cout << "SimpleNamedNamespace" << std::endl;
    //state += RunTest([&testClass]() { testClass->SimpleNamedNamespace(); });

    // TODO std::cout << "SimpleUnnamedNamespace" << std::endl;
    //state += RunTest([&testClass]() { testClass->SimpleUnnamedNamespace(); });

    // TODO std::cout << "SimpleNestedNamespace" << std::endl;
    //state += RunTest([&testClass]() { testClass->SimpleNestedNamespace(); });

    return state;
}
