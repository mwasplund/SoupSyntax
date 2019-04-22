#pragma once
#include "ParseClassSpecifierTests.h"
#include "../../RunTest.h"

TestState RunParseClassSpecifierTests()
{
    std::string className = "ParseClassSpecifierTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::ParseClassSpecifierTests>();
    TestState state = { 0, 0 };

    state += RunTest(
        className,
        "Simple",
        [&testClass]() { testClass->Simple(); });
    state += RunTest(
        className,
        "SingleDeclaration",
        [&testClass]() { testClass->SingleDeclaration(); });
    state += RunTest(
        className,
        "MultipleDeclarations",
        [&testClass]() { testClass->MultipleDeclarations(); });

    return state;
}
