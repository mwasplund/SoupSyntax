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
        "SingleSimpleClassDeclaration",
        [&testClass]() { testClass->SingleSimpleClassDeclaration(); });
    state += RunTest(
        className,
        "SingleClassDeclaration",
        [&testClass]() { testClass->SingleClassDeclaration(); });

    return state;
}
