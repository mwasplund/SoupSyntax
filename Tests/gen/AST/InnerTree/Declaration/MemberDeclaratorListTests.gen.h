#pragma once
#include "/AST/InnerTree/Declaration/MemberDeclaratorListTests.h"

TestState RunInnerTreeMemberDeclaratorListTests() 
 {
    auto className = "InnerTreeMemberDeclaratorListTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeMemberDeclaratorListTests>();
    TestState state = { 0, 0 };
    state += RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
    state += RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
    state += RunTest(className, "OperatorNotEqualLessItems", [&testClass]() { testClass->OperatorNotEqualLessItems(); });
    state += RunTest(className, "OperatorNotEqualWithItems", [&testClass]() { testClass->OperatorNotEqualWithItems(); });

    return state;
}