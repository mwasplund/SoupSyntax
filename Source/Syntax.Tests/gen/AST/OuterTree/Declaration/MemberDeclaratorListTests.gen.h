#pragma once
#include "/AST/OuterTree/Declaration/MemberDeclaratorListTests.h"

TestState RunOuterTreeMemberDeclaratorListTests() 
 {
    auto className = "OuterTreeMemberDeclaratorListTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeMemberDeclaratorListTests>();
    TestState state = { 0, 0 };
    state += SoupTest::RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
    state += SoupTest::RunTest(className, "GetChildren", [&testClass]() { testClass->GetChildren(); });
    state += SoupTest::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
    state += SoupTest::RunTest(className, "OperatorNotEqualLessItems", [&testClass]() { testClass->OperatorNotEqualLessItems(); });
    state += SoupTest::RunTest(className, "OperatorNotEqualWithItems", [&testClass]() { testClass->OperatorNotEqualWithItems(); });

    return state;
}