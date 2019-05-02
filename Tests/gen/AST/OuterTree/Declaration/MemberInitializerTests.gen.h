#pragma once
#include "/AST/OuterTree/Declaration/MemberInitializerTests.h"

TestState RunOuterTreeMemberInitializerTests() 
 {
    auto className = "OuterTreeMemberInitializerTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeMemberInitializerTests>();
    TestState state = { 0, 0 };
    state += RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
    state += RunTest(className, "GetChildren", [&testClass]() { testClass->GetChildren(); });
    state += RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
    state += RunTest(className, "OperatorNotEqualIdentifierToken", [&testClass]() { testClass->OperatorNotEqualIdentifierToken(); });
    state += RunTest(className, "OperatorNotEqualInitializer", [&testClass]() { testClass->OperatorNotEqualInitializer(); });

    return state;
}