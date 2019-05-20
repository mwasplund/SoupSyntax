#pragma once
#include "/Parser/Statement/ParseReturnStatementTests.h"

TestState RunParseReturnStatementTests() 
 {
    auto className = "ParseReturnStatementTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::ParseReturnStatementTests>();
    TestState state = { 0, 0 };
    state += SoupTest::RunTest(className, "ReturnNoExpression", [&testClass]() { testClass->ReturnNoExpression(); });
    state += SoupTest::RunTest(className, "ReturnLiteralExpression", [&testClass]() { testClass->ReturnLiteralExpression(); });
    state += SoupTest::RunTest(className, "ReturnIdentifierExpression", [&testClass]() { testClass->ReturnIdentifierExpression(); });

    return state;
}