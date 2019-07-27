#pragma once
#include "/AST/OuterTree/Declaration/MemberInitializerTests.h"

TestState RunOuterTreeMemberInitializerTests() 
 {
    auto className = "OuterTreeMemberInitializerTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeMemberInitializerTests>();
    TestState state = { 0, 0 };
    state += SoupTest::RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
    state += SoupTest::RunTest(className, "GetChildren", [&testClass]() { testClass->GetChildren(); });
    state += SoupTest::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
    state += SoupTest::RunTest(className, "OperatorNotEqualIdentifierToken", [&testClass]() { testClass->OperatorNotEqualIdentifierToken(); });
    state += SoupTest::RunTest(className, "OperatorNotEqualInitializer", [&testClass]() { testClass->OperatorNotEqualInitializer(); });

    return state;
}