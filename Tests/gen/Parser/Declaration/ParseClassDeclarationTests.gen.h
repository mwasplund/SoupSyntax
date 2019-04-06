#pragma once
#include "ParseClassDeclarationTests.h"
#include "../../RunTest.h"

TestState RunParseClassDeclarationTests()
{
    std::string className = "ParseClassDeclarationTests";
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ParseClassDeclarationTests>();
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
