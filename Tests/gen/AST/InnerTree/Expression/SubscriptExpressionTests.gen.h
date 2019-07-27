#pragma once
#include "/AST/InnerTree/Expression/SubscriptExpressionTests.h"

TestState RunInnerTreeSubscriptExpressionTests() 
 {
    auto className = "InnerTreeSubscriptExpressionTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeSubscriptExpressionTests>();
    TestState state = { 0, 0 };
    state += SoupTest::RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
    state += SoupTest::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
    state += SoupTest::RunTest(className, "OperatorNotEqualLeft", [&testClass]() { testClass->OperatorNotEqualLeft(); });
    state += SoupTest::RunTest(className, "OperatorNotEqualOpenBracket", [&testClass]() { testClass->OperatorNotEqualOpenBracket(); });
    state += SoupTest::RunTest(className, "OperatorNotEqualRight", [&testClass]() { testClass->OperatorNotEqualRight(); });
    state += SoupTest::RunTest(className, "OperatorNotEqualCloseBracket", [&testClass]() { testClass->OperatorNotEqualCloseBracket(); });

    return state;
}