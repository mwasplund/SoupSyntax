#pragma once
#include "ParseSimpleDeclarationTests.h"
#include "../../RunTest.h"

TestState RunParseSimpleDeclarationTests()
{
    std::string className = "ParseSimpleDeclarationTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::ParseSimpleDeclarationTests>();
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
        "SingleTemplateClassVariable",
        [&testClass]() { testClass->SingleTemplateClassVariable(); });
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
    state += RunTest(
        className,
        "SingleTemplateOfTemplateVariable",
        [&testClass]() { testClass->SingleTemplateOfTemplateVariable(); });

    return state;
}
