#pragma once
#include "/Parser/Attribute/ParseAttributeSpecifierTests.h"

TestState RunParseAttributeSpecifierTests() 
 {
    auto className = "ParseAttributeSpecifierTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::ParseAttributeSpecifierTests>();
    TestState state = { 0, 0 };
    state += RunTest(className, "Empty", [&testClass]() { testClass->Empty(); });
    state += RunTest(className, "EmptySpacing", [&testClass]() { testClass->EmptySpacing(); });
    state += RunTest(className, "Simple", [&testClass]() { testClass->Simple(); });
    state += RunTest(className, "SingleEmptyArgumentClause", [&testClass]() { testClass->SingleEmptyArgumentClause(); });
    state += RunTest(className, "SingleArgumentClause", [&testClass]() { testClass->SingleArgumentClause(); });

    return state;
}