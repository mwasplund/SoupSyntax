#pragma once
#include "/AST/OuterTree/Statement/DeclarationStatementTests.h"

TestState RunOuterTreeDeclarationStatementTests() 
 {
    auto className = "OuterTreeDeclarationStatementTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeDeclarationStatementTests>();
    TestState state = { 0, 0 };
    state += SoupTest::RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
    state += SoupTest::RunTest(className, "GetChildren", [&testClass]() { testClass->GetChildren(); });
    state += SoupTest::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
    state += SoupTest::RunTest(className, "OperatorNotEqualDeclaration", [&testClass]() { testClass->OperatorNotEqualDeclaration(); });

    return state;
}