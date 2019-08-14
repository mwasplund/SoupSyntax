#pragma once
#include "/Parser/Expression/ParseIdentifierExpressionTests.h"

TestState RunParseIdentifierExpressionTests() 
 {
    auto className = "ParseIdentifierExpressionTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::ParseIdentifierExpressionTests>();
    TestState state = { 0, 0 };
    state += SoupTest::RunTest(className, "SingleSimpleIdentifier", [&testClass]() { testClass->SingleSimpleIdentifier(); });
    state += SoupTest::RunTest(className, "SingleQualifiedIdentifier", [&testClass]() { testClass->SingleQualifiedIdentifier(); });
    state += SoupTest::RunTest(className, "DoubleQualifiedIdentifier", [&testClass]() { testClass->DoubleQualifiedIdentifier(); });
    state += SoupTest::RunTest(className, "SingleTemplateIdentifier", [&testClass]() { testClass->SingleTemplateIdentifier(); });
    state += SoupTest::RunTest(className, "SingleDestructorIdentifier", [&testClass]() { testClass->SingleDestructorIdentifier(); });

    return state;
}