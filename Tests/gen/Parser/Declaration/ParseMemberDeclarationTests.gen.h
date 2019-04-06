#pragma once
#include "ParseMemberDeclarationTests.h"
#include "../../RunTest.h"

TestState RunParseMemberDeclarationTests()
{
    std::string className = "ParseMemberDeclarationTests";
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ParseMemberDeclarationTests>();
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

    return state;
}
