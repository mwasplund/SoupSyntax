#pragma once
#include "/AST/InnerTree/Declaration/EmptyDeclarationTests.h"

TestState RunInnerTreeEmptyDeclarationTests() 
 {
    auto className = "InnerTreeEmptyDeclarationTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeEmptyDeclarationTests>();
    TestState state = { 0, 0 };
    state += RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
    state += RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
    state += RunTest(className, "OperatorNotEqualSemicolonToken", [&testClass]() { testClass->OperatorNotEqualSemicolonToken(); });

    return state;
}