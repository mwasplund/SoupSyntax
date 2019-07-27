#pragma once
#include "/AST/OuterTree/SyntaxNodeChildTests.h"

TestState RunOuterTreeSyntaxNodeChildTests() 
 {
    auto className = "OuterTreeSyntaxNodeChildTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeSyntaxNodeChildTests>();
    TestState state = { 0, 0 };
    state += SoupTest::RunTest(className, "TokenInitialize", [&testClass]() { testClass->TokenInitialize(); });
    state += SoupTest::RunTest(className, "TokenOperatorEqual", [&testClass]() { testClass->TokenOperatorEqual(); });
    state += SoupTest::RunTest(className, "TokenOperatorNotEqualToken", [&testClass]() { testClass->TokenOperatorNotEqualToken(); });
    state += SoupTest::RunTest(className, "TokenOperatorNotEqualNode", [&testClass]() { testClass->TokenOperatorNotEqualNode(); });
    state += SoupTest::RunTest(className, "NodeInitialize", [&testClass]() { testClass->NodeInitialize(); });
    state += SoupTest::RunTest(className, "NodeOperatorEqual", [&testClass]() { testClass->NodeOperatorEqual(); });
    state += SoupTest::RunTest(className, "NodeOperatorNotEqualToken", [&testClass]() { testClass->NodeOperatorNotEqualToken(); });
    state += SoupTest::RunTest(className, "NodeOperatorNotEqualNode", [&testClass]() { testClass->NodeOperatorNotEqualNode(); });

    return state;
}