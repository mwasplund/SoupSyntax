#pragma once
#include "ParseSimpleDeclarationTests.h"
#include "../../RunTest.h"

TestState RunParseSimpleDeclarationTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ParseSimpleDeclarationTests>();
    TestState state = { 0, 0 };

    std::cout << "Running ParseSimpleDeclarationTests:" << std::endl;

    state += RunTest(
        "SingleIntVariable",
        [&testClass]() { testClass->SingleIntVariable(); });

    state += RunTest(
        "SingleIntVariableWithInitializer",
        [&testClass]() { testClass->SingleIntVariableWithInitializer(); });

    state += RunTest(
        "DoubleIntVariable",
        [&testClass]() { testClass->DoubleIntVariable(); });

    state += RunTest(
        "DoubleIntVariableSingleWithInitializer",
        [&testClass]() { testClass->DoubleIntVariableSingleWithInitializer(); });

    state += RunTest(
        "DoubleIntVariableBothWithInitializer",
        [&testClass]() { testClass->DoubleIntVariableBothWithInitializer(); });

    state += RunTest(
        "SingleIntLeadingAndTrailingModifierVariable",
        [&testClass]() { testClass->SingleIntLeadingAndTrailingModifierVariable(); });

    return state;
}
