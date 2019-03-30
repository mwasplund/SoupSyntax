#pragma once
#include "ParseTranslationUnitTests.h"
#include "../../RunTest.h"

TestState RunParseTranslationUnitTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ParseTranslationUnitTests>();
    TestState state = { 0, 0 };

    std::cout << "Running ParseTranslationUnitTests:" << std::endl;

    state += RunTest(
        "EmptyFile",
        [&testClass]() { testClass->EmptyFile(); });

    state += RunTest(
        "OnlyTrivia",
        [&testClass]() { testClass->OnlyTrivia(); });

    state += RunTest(
        "SingleEmptyDeclaration",
        [&testClass]() { testClass->SingleEmptyDeclaration(); });

    return state;
}
