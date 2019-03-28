#pragma once
#include "ParseEnumDeclarationTests.h"
#include "../../RunTest.h"

TestState RunParseEnumDeclarationTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ParseEnumDeclarationTests>();
    TestState state = { 0, 0 };

    std::wcout << L"Running ParseEnumDeclarationTests:" << std::endl;

    std::wcout << L"SingleSimpleEnumDeclaration" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleSimpleEnumDeclaration(); });

    std::wcout << L"SingleEnumClassDeclaration" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleEnumClassDeclaration(); });

    return state;
}
