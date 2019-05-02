#pragma once
#include "/AST/OuterTree/Declaration/NamespaceDefinitionTests.h"

TestState RunOuterTreeNamespaceDefinitionTests() 
 {
    auto className = "OuterTreeNamespaceDefinitionTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeNamespaceDefinitionTests>();
    TestState state = { 0, 0 };
    state += RunTest(className, "InitializeNoIdentifier", [&testClass]() { testClass->InitializeNoIdentifier(); });
    state += RunTest(className, "InitializeWithIdentifier", [&testClass]() { testClass->InitializeWithIdentifier(); });
    state += RunTest(className, "GetChildrenNoIdentifier", [&testClass]() { testClass->GetChildrenNoIdentifier(); });
    state += RunTest(className, "GetChildrenWithIdentifier", [&testClass]() { testClass->GetChildrenWithIdentifier(); });
    state += RunTest(className, "OperatorEqualNoIdentifier", [&testClass]() { testClass->OperatorEqualNoIdentifier(); });
    state += RunTest(className, "OperatorEqualWithIdentifier", [&testClass]() { testClass->OperatorEqualWithIdentifier(); });
    state += RunTest(className, "OperatorNotEqualNamespaceToken", [&testClass]() { testClass->OperatorNotEqualNamespaceToken(); });
    state += RunTest(className, "OperatorNotEqualNoIdentifier", [&testClass]() { testClass->OperatorNotEqualNoIdentifier(); });
    state += RunTest(className, "OperatorNotEqualWithIdentifier", [&testClass]() { testClass->OperatorNotEqualWithIdentifier(); });
    state += RunTest(className, "OperatorNotEqualOpenBraceToken", [&testClass]() { testClass->OperatorNotEqualOpenBraceToken(); });
    state += RunTest(className, "OperatorNotEqualBody", [&testClass]() { testClass->OperatorNotEqualBody(); });
    state += RunTest(className, "OperatorNotEqualCloseBraceToken", [&testClass]() { testClass->OperatorNotEqualCloseBraceToken(); });

    return state;
}