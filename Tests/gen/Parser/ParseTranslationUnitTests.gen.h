#pragma once
#include "ParseTranslationUnitTests.h"
#include "../../RunTest.h"

TestState RunParseTranslationUnitTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ParseTranslationUnitTests>();
    TestState state = { 0, 0 };

    std::cout << "Running ParseTranslationUnitTests:" << std::endl;

    std::cout << "EmptyFile" << std::endl;
    state += RunTest([&testClass]() { testClass->EmptyFile(); });

    std::cout << "OnlyTrivia" << std::endl;
    state += RunTest([&testClass]() { testClass->OnlyTrivia(); });

    std::cout << "SingleEmptyDeclaration" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleEmptyDeclaration(); });

    return state;
}
