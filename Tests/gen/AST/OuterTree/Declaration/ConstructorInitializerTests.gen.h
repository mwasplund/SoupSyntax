#pragma once
#include "/AST/OuterTree/Declaration/ConstructorInitializerTests.h"

TestState RunOuterTreeConstructorInitializerTests() 
 {
    auto className = "OuterTreeConstructorInitializerTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeConstructorInitializerTests>();
    TestState state = { 0, 0 };
    state += RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
    state += RunTest(className, "InitializeComplex", [&testClass]() { testClass->InitializeComplex(); });
    state += RunTest(className, "GetChildrenSimple", [&testClass]() { testClass->GetChildrenSimple(); });
    state += RunTest(className, "GetChildrenComplex", [&testClass]() { testClass->GetChildrenComplex(); });
    state += RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
    state += RunTest(className, "OperatorNotEqualColonToken", [&testClass]() { testClass->OperatorNotEqualColonToken(); });
    state += RunTest(className, "OperatorNotEqualInitializers", [&testClass]() { testClass->OperatorNotEqualInitializers(); });

    return state;
}