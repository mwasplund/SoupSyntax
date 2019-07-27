#pragma once
#include "/Parser/Statement/ParseEmptyStatementTests.h"

TestState RunParseEmptyStatementTests() 
 {
    auto className = "ParseEmptyStatementTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::ParseEmptyStatementTests>();
    TestState state = { 0, 0 };
    state += SoupTest::RunTest(className, "Simple", [&testClass]() { testClass->Simple(); });

    return state;
}