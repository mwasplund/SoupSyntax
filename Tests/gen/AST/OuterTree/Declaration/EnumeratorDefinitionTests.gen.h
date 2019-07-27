#pragma once
#include "/AST/OuterTree/Declaration/EnumeratorDefinitionTests.h"

TestState RunOuterTreeEnumeratorDefinitionTests() 
 {
    auto className = "OuterTreeEnumeratorDefinitionTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeEnumeratorDefinitionTests>();
    TestState state = { 0, 0 };
    state += SoupTest::RunTest(className, "Initialize", [&testClass]() { testClass->Initialize(); });
    state += SoupTest::RunTest(className, "GetChildren", [&testClass]() { testClass->GetChildren(); });
    state += SoupTest::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
    state += SoupTest::RunTest(className, "OperatorNotEqualIdentifierToken", [&testClass]() { testClass->OperatorNotEqualIdentifierToken(); });

    return state;
}