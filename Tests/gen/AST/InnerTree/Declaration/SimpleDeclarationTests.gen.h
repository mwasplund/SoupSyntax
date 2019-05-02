#pragma once
#include "/AST/InnerTree/Declaration/SimpleDeclarationTests.h"

TestState RunInnerTreeSimpleDeclarationTests() 
 {
    auto className = "InnerTreeSimpleDeclarationTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeSimpleDeclarationTests>();
    TestState state = { 0, 0 };
    state += RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
    state += RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
    state += RunTest(className, "OperatorNotEqualDeclarationSpecifierSequence", [&testClass]() { testClass->OperatorNotEqualDeclarationSpecifierSequence(); });
    state += RunTest(className, "OperatorNotEqualInitializerDeclaratorList", [&testClass]() { testClass->OperatorNotEqualInitializerDeclaratorList(); });
    state += RunTest(className, "OperatorNotEqualSemicolonToken", [&testClass]() { testClass->OperatorNotEqualSemicolonToken(); });

    return state;
}