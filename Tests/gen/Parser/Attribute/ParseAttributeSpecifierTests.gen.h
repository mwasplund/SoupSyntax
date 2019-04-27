#pragma once
#include "ParseAttributeSpecifierTests.h"
#include "../../RunTest.h"

TestState RunParseAttributeSpecifierTests()
{
    std::string className = "ParseAttributeSpecifierTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::ParseAttributeSpecifierTests>();
    TestState state = { 0, 0 };

    state += RunTest(
        className,
        "Empty",
        [&testClass]() { testClass->Empty(); });
    state += RunTest(
        className,
        "EmptySpacing",
        [&testClass]() { testClass->EmptySpacing(); });
    state += RunTest(
        className,
        "Simple",
        [&testClass]() { testClass->Simple(); });
    state += RunTest(
        className,
        "SingleEmptyArgumentClause",
        [&testClass]() { testClass->SingleEmptyArgumentClause(); });

    return state;
}
