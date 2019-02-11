#pragma once
#include "SyntaxTokenTests.h"
#include "../RunTest.h"

int RunSyntaxTokenTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::SyntaxTokenTests>();
    int failedCount = 0;

    std::wcout << L"Running SyntaxTokenTests:" << std::endl;

    std::wcout << L"InitializeSimple" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->InitializeSimple(); });

    return failedCount;
}