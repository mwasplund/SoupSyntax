#pragma once
#include "ParseSimpleDeclarationTests.h"
#include "../../RunTest.h"

TestState RunParseSimpleDeclarationTests()
{
    std::string className = "ParseSimpleDeclarationTests";
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ParseSimpleDeclarationTests>();
    TestState state = { 0, 0 };

    state += RunTest(
        className,
        "SingleIntVariable",
        [&testClass]() { testClass->SingleIntVariable(); });
    state += RunTest(
        className,
        "SingleClassVariable",
        [&testClass]() { testClass->SingleClassVariable(); });
    state += RunTest(
        className,
        "SingleIntVariableWithInitializer",
        [&testClass]() { testClass->SingleIntVariableWithInitializer(); });
    state += RunTest(
        className,
        "DoubleIntVariable",
        [&testClass]() { testClass->DoubleIntVariable(); });
    state += RunTest(
        className,
        "DoubleIntVariableSingleWithInitializer",
        [&testClass]() { testClass->DoubleIntVariableSingleWithInitializer(); });
    state += RunTest(
        className,
        "DoubleIntVariableBothWithInitializer",
        [&testClass]() { testClass->DoubleIntVariableBothWithInitializer(); });
    state += RunTest(
        className,
        "SingleIntLeadingAndTrailingModifierVariable",
        [&testClass]() { testClass->SingleIntLeadingAndTrailingModifierVariable(); });

    return state;
}
