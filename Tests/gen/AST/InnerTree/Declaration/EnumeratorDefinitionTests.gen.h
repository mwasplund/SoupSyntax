#pragma once
#include "/AST/InnerTree/Declaration/EnumeratorDefinitionTests.h"

TestState RunInnerTreeEnumeratorDefinitionTests() 
 {
    auto className = "InnerTreeEnumeratorDefinitionTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeEnumeratorDefinitionTests>();
    TestState state = { 0, 0 };
    state += RunTest(className, "Initialize", [&testClass]() { testClass->Initialize(); });
    state += RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
    state += RunTest(className, "OperatorNotEqualIdentifierToken", [&testClass]() { testClass->OperatorNotEqualIdentifierToken(); });

    return state;
}