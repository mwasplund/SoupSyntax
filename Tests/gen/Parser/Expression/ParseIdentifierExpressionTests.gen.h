#pragma once
#include "/Parser/Expression/ParseIdentifierExpressionTests.h"

TestState RunParseIdentifierExpressionTests() 
 {
    auto className = "ParseIdentifierExpressionTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::ParseIdentifierExpressionTests>();
    TestState state = { 0, 0 };
    state += RunTest(className, "SingleSimpleIdentifier", [&testClass]() { testClass->SingleSimpleIdentifier(); });
    state += RunTest(className, "SingleQualifiedIdentifier", [&testClass]() { testClass->SingleQualifiedIdentifier(); });
    state += RunTest(className, "DoubleQualifiedIdentifier", [&testClass]() { testClass->DoubleQualifiedIdentifier(); });
    state += RunTest(className, "SingleTemplateIdentifier", [&testClass]() { testClass->SingleTemplateIdentifier(); });
    state += RunTest(className, "SingleDestructorIdentifier", [&testClass]() { testClass->SingleDestructorIdentifier(); });

    return state;
}