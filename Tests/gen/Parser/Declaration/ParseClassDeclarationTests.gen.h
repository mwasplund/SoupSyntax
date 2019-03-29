#pragma once
#include "ParseClassDeclarationTests.h"
#include "../../RunTest.h"

TestState RunParseClassDeclarationTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ParseClassDeclarationTests>();
    TestState state = { 0, 0 };

    std::wcout << L"Running ParseClassDeclarationTests:" << std::endl;

    std::wcout << L"SingleSimpleClassDeclaration" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleSimpleClassDeclaration(); });

    std::wcout << L"SingleClassDeclaration" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleClassDeclaration(); });

    return state;
}
