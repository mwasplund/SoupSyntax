#pragma once
#include "/AST/InnerTree/Shared/NestedNameSpecifierTests.h"

TestState RunInnerTreeNestedNameSpecifierTests() 
 {
    auto className = "InnerTreeNestedNameSpecifierTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeNestedNameSpecifierTests>();
    TestState state = { 0, 0 };
    state += RunTest(className, "Initialize", [&testClass]() { testClass->Initialize(); });
    state += RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
    state += RunTest(className, "OperatorNotEqualSpecifierSequence", [&testClass]() { testClass->OperatorNotEqualSpecifierSequence(); });

    return state;
}