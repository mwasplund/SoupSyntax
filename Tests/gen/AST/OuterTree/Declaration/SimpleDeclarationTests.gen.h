#pragma once
#include "/AST/OuterTree/Declaration/SimpleDeclarationTests.h"

TestState RunOuterTreeSimpleDeclarationTests() 
 {
    auto className = "OuterTreeSimpleDeclarationTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeSimpleDeclarationTests>();
    TestState state = { 0, 0 };
    state += RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
    state += RunTest(className, "GetChildren", [&testClass]() { testClass->GetChildren(); });
    state += RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
    state += RunTest(className, "OperatorNotEqualDeclarationSpecifierSequence", [&testClass]() { testClass->OperatorNotEqualDeclarationSpecifierSequence(); });
    state += RunTest(className, "OperatorNotEqualInitializerDeclaratorList", [&testClass]() { testClass->OperatorNotEqualInitializerDeclaratorList(); });
    state += RunTest(className, "OperatorNotEqualSemicolonToken", [&testClass]() { testClass->OperatorNotEqualSemicolonToken(); });

    return state;
}