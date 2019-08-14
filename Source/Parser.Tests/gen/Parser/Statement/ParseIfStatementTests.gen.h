#pragma once
#include "/Parser/Statement/ParseIfStatementTests.h"

TestState RunParseIfStatementTests() 
 {
    auto className = "ParseIfStatementTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::ParseIfStatementTests>();
    TestState state = { 0, 0 };
    state += SoupTest::RunTest(className, "IfEmptyStatement", [&testClass]() { testClass->IfEmptyStatement(); });
    state += SoupTest::RunTest(className, "IfEmptyStatementWithElseClause", [&testClass]() { testClass->IfEmptyStatementWithElseClause(); });
    state += SoupTest::RunTest(className, "IfStatementReturnWithElseClause", [&testClass]() { testClass->IfStatementReturnWithElseClause(); });

    return state;
}