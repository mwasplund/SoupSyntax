#pragma once
#include "/AST/InnerTree/Declaration/MemberDeclarationTests.h"

TestState RunInnerTreeMemberDeclarationTests() 
 {
    auto className = "InnerTreeMemberDeclarationTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeMemberDeclarationTests>();
    TestState state = { 0, 0 };
    state += RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
    state += RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
    state += RunTest(className, "OperatorNotEqualDeclarationSpecifierSequence", [&testClass]() { testClass->OperatorNotEqualDeclarationSpecifierSequence(); });
    state += RunTest(className, "OperatorNotEqualMemberDeclaratorList", [&testClass]() { testClass->OperatorNotEqualMemberDeclaratorList(); });
    state += RunTest(className, "OperatorNotEqualSemicolonToken", [&testClass]() { testClass->OperatorNotEqualSemicolonToken(); });

    return state;
}