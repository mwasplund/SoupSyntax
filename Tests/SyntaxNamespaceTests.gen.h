#pragma once
#include "RunTest.h"
#include "SyntaxNamespaceTests.h"

int RunSyntaxNamespaceTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::SyntaxNamespaceTests>();
    int failedCount = 0;

    std::wcout << L"Running SyntaxNamespaceTests:" << std::endl;

    std::wcout << L"SimpleNamedNamespace" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->SimpleNamedNamespace(); });

    std::wcout << L"SimpleUnnamedNamespace" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->SimpleUnnamedNamespace(); });

    std::wcout << L"SimpleNestedNamespace" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->SimpleNestedNamespace(); });

    return failedCount;
}
