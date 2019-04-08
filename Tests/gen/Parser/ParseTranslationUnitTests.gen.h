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
        "OnlyComments",
        [&testClass]() { testClass->OnlyComments(); });
    state += RunTest(
        className,
        "SingleEmptyDeclaration",
        [&testClass]() { testClass->SingleEmptyDeclaration(); });
    state += RunTest(
        className,
        "MultipleDeclarations",
        [&testClass]() { testClass->MultipleDeclarations(); });

    return state;
}
