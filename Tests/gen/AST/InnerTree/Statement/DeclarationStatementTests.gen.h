#pragma once
#include "/AST/InnerTree/Statement/DeclarationStatementTests.h"

TestState RunInnerTreeDeclarationStatementTests() 
 {
    auto className = "InnerTreeDeclarationStatementTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeDeclarationStatementTests>();
    TestState state = { 0, 0 };
    state += RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
    state += RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
    state += RunTest(className, "OperatorNotEqualDeclaration", [&testClass]() { testClass->OperatorNotEqualDeclaration(); });

    return state;
}