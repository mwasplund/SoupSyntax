#pragma once
#include "/Parser/Expression/ParseThisExpressionTests.h"

TestState RunParseThisExpressionTests() 
 {
    auto className = "ParseThisExpressionTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::ParseThisExpressionTests>();
    TestState state = { 0, 0 };
    state += SoupTest::RunTest(className, "SingleThisExpression", [&testClass]() { testClass->SingleThisExpression(); });

    return state;
}