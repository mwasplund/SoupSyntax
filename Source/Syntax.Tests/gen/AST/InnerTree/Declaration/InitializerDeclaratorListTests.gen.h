#pragma once
#include "/AST/InnerTree/Declaration/InitializerDeclaratorListTests.h"

TestState RunInnerTreeInitializerDeclaratorListTests() 
 {
    auto className = "InnerTreeInitializerDeclaratorListTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeInitializerDeclaratorListTests>();
    TestState state = { 0, 0 };
    state += SoupTest::RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
    state += SoupTest::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
    state += SoupTest::RunTest(className, "OperatorNotEqualLessItems", [&testClass]() { testClass->OperatorNotEqualLessItems(); });
    state += SoupTest::RunTest(className, "OperatorNotEqualWithItems", [&testClass]() { testClass->OperatorNotEqualWithItems(); });

    return state;
}