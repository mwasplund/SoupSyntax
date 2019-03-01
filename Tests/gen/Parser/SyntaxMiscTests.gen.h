#pragma once
#include "../RunTest.h"
#include "SyntaxMiscTests.h"

int RunSyntaxMiscTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::SyntaxMiscTests>();
    int failedCount = 0;

    std::wcout << L"Running SyntaxMiscTests:" << std::endl;

    std::wcout << L"EmptyFile" << std::endl;
    // failedCount += RunTest([&testClass]() { testClass->EmptyFile(); });

    return failedCount;
}
