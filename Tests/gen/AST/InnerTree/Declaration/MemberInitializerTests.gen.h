#pragma once
#include "/AST/InnerTree/Declaration/MemberInitializerTests.h"

TestState RunInnerTreeMemberInitializerTests() 
 {
    auto className = "InnerTreeMemberInitializerTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeMemberInitializerTests>();
    TestState state = { 0, 0 };
    state += RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
    state += RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
    state += RunTest(className, "OperatorNotEqualIdentifierToken", [&testClass]() { testClass->OperatorNotEqualIdentifierToken(); });
    state += RunTest(className, "OperatorNotEqualInitializer", [&testClass]() { testClass->OperatorNotEqualInitializer(); });

    return state;
}