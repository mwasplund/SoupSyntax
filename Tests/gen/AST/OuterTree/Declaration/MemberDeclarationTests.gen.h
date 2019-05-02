#pragma once
#include "/AST/OuterTree/Declaration/MemberDeclarationTests.h"

TestState RunOuterTreeMemberDeclarationTests() 
 {
    auto className = "OuterTreeMemberDeclarationTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeMemberDeclarationTests>();
    TestState state = { 0, 0 };
    state += RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
    state += RunTest(className, "GetChildren", [&testClass]() { testClass->GetChildren(); });
    state += RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
    state += RunTest(className, "OperatorNotEqualDeclarationSpecifierSequence", [&testClass]() { testClass->OperatorNotEqualDeclarationSpecifierSequence(); });
    state += RunTest(className, "OperatorNotEqualMemberDeclaratorList", [&testClass]() { testClass->OperatorNotEqualMemberDeclaratorList(); });
    state += RunTest(className, "OperatorNotEqualSemicolonToken", [&testClass]() { testClass->OperatorNotEqualSemicolonToken(); });

    return state;
}