#pragma once
#include "/Parser/Declaration/ParseEnumSpecifierTests.h"

TestState RunParseEnumSpecifierTests() 
 {
    auto className = "ParseEnumSpecifierTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::ParseEnumSpecifierTests>();
    TestState state = { 0, 0 };
    state += SoupTest::RunTest(className, "SingleSimpleEnumSpecifier", [&testClass]() { testClass->SingleSimpleEnumSpecifier(); });
    state += SoupTest::RunTest(className, "SingleEnumClassSpecifier", [&testClass]() { testClass->SingleEnumClassSpecifier(); });

    return state;
}