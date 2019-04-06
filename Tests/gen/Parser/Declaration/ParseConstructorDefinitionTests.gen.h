#pragma once
#include "../RunTest.h"
#include "ParseConstructorDefinitionTests.h"

TestState RunParseConstructorDefinitionTests()
{
    std::string className = "ParseConstructorDefinitionTests";
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ParseConstructorDefinitionTests>();
    TestState state = { 0, 0 };

    state += RunTest(
        className,
        "SimpleRegular",
        [&testClass]() { testClass->SimpleRegular(); });
    state += RunTest(
        className,
        "SimpleDefault",
        [&testClass]() { testClass->SimpleDefault(); });
    state += RunTest(
        className,
        "SimpleDelete",
        [&testClass]() { testClass->SimpleDelete(); });
    state += RunTest(
        className,
        "ComplexParameterAndInitializer",
        [&testClass]() { testClass->ComplexParameterAndInitializer(); });

    return state;
}
