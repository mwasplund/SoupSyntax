#pragma once
#include "/AST/InnerTree/SyntaxTokenTests.h"

TestState RunInnerTreeSyntaxTokenTests() 
 {
    auto className = "InnerTreeSyntaxTokenTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeSyntaxTokenTests>();
    TestState state = { 0, 0 };
    state += SoupTest::RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
    state += SoupTest::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
    state += SoupTest::RunTest(className, "OperatorNotEqualType", [&testClass]() { testClass->OperatorNotEqualType(); });
    state += SoupTest::RunTest(className, "OperatorNotEqualValue", [&testClass]() { testClass->OperatorNotEqualValue(); });

    return state;
}