#pragma once
#include "ParseEnumDeclarationTests.h"
#include "../../RunTest.h"

TestState RunParseEnumDeclarationTests()
{
    std::string className = "ParseEnumDeclarationTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::ParseEnumDeclarationTests>();
    TestState state = { 0, 0 };

    state += RunTest(
        className,
        "SingleSimpleEnumDeclaration",
        [&testClass]() { testClass->SingleSimpleEnumDeclaration(); });
    state += RunTest(
        className,
        "SingleEnumClassDeclaration",
        [&testClass]() { testClass->SingleEnumClassDeclaration(); });

    return state;
}
