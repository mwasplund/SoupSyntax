#pragma once
#include "ParseEnumDeclarationTests.h"
#include "../../RunTest.h"

TestState RunParseEnumDeclarationTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ParseEnumDeclarationTests>();
    TestState state = { 0, 0 };

    std::cout << "Running ParseEnumDeclarationTests:" << std::endl;

    std::cout << "SingleSimpleEnumDeclaration" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleSimpleEnumDeclaration(); });

    std::cout << "SingleEnumClassDeclaration" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleEnumClassDeclaration(); });

    return state;
}
