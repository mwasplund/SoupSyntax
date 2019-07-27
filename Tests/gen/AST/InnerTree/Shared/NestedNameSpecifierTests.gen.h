#pragma once
#include "/AST/InnerTree/Shared/NestedNameSpecifierTests.h"

TestState RunInnerTreeNestedNameSpecifierTests() 
 {
    auto className = "InnerTreeNestedNameSpecifierTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeNestedNameSpecifierTests>();
    TestState state = { 0, 0 };
    state += SoupTest::RunTest(className, "Initialize", [&testClass]() { testClass->Initialize(); });
    state += SoupTest::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
    state += SoupTest::RunTest(className, "OperatorNotEqualSpecifierSequence", [&testClass]() { testClass->OperatorNotEqualSpecifierSequence(); });

    return state;
}