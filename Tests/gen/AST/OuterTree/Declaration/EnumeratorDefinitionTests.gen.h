#pragma once
#include "/AST/OuterTree/Declaration/EnumeratorDefinitionTests.h"

TestState RunOuterTreeEnumeratorDefinitionTests() 
 {
    auto className = "OuterTreeEnumeratorDefinitionTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeEnumeratorDefinitionTests>();
    TestState state = { 0, 0 };
    state += RunTest(className, "Initialize", [&testClass]() { testClass->Initialize(); });
    state += RunTest(className, "GetChildren", [&testClass]() { testClass->GetChildren(); });
    state += RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
    state += RunTest(className, "OperatorNotEqualIdentifierToken", [&testClass]() { testClass->OperatorNotEqualIdentifierToken(); });

    return state;
}