#pragma once
#include "../RunTest.h"
#include "SyntaxMiscTests.h"

TestState RunSyntaxMiscTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::SyntaxMiscTests>();
    TestState state = { 0, 0 };

    std::wcout << L"Running SyntaxMiscTests:" << std::endl;

    std::wcout << L"EmptyFile" << std::endl;
    // state += RunTest([&testClass]() { testClass->EmptyFile(); });

    return state;
}
