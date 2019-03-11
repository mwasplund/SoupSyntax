#pragma once
#include "../RunTest.h"
#include "SyntaxNamespaceTests.h"

TestState RunSyntaxNamespaceTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::SyntaxNamespaceTests>();
    TestState state = { 0, 0 };

    std::wcout << L"Running SyntaxNamespaceTests:" << std::endl;

    std::wcout << L"SimpleNamedNamespace" << std::endl;
    //state += RunTest([&testClass]() { testClass->SimpleNamedNamespace(); });

    std::wcout << L"SimpleUnnamedNamespace" << std::endl;
    //state += RunTest([&testClass]() { testClass->SimpleUnnamedNamespace(); });

    std::wcout << L"SimpleNestedNamespace" << std::endl;
    //state += RunTest([&testClass]() { testClass->SimpleNestedNamespace(); });

    return state;
}
