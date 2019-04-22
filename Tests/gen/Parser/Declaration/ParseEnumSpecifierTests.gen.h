#pragma once
#include "ParseEnumSpecifierTests.h"
#include "../../RunTest.h"

TestState RunParseEnumSpecifierTests()
{
    std::string className = "ParseEnumSpecifierTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::ParseEnumSpecifierTests>();
    TestState state = { 0, 0 };

    state += RunTest(
        className,
        "SingleSimpleEnumSpecifier",
        [&testClass]() { testClass->SingleSimpleEnumSpecifier(); });
    state += RunTest(
        className,
        "SingleEnumClassSpecifier",
        [&testClass]() { testClass->SingleEnumClassSpecifier(); });

    return state;
}
