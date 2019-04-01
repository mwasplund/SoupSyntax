#pragma once
#include "ParseTranslationUnitTests.h"
#include "../../RunTest.h"

TestState RunParseTranslationUnitTests()
{
    std::string className = "ParseTranslationUnitTests";
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ParseTranslationUnitTests>();
    TestState state = { 0, 0 };

    state += RunTest(
        className,
        "EmptyFile",
        [&testClass]() { testClass->EmptyFile(); });
    state += RunTest(
        className,
        "OnlyTrivia",
        [&testClass]() { testClass->OnlyTrivia(); });
    state += RunTest(
        className,
        "SingleEmptyDeclaration",
        [&testClass]() { testClass->SingleEmptyDeclaration(); });

    return state;
}
