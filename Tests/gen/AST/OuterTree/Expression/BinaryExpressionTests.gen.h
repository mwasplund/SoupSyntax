#pragma once
#include "/AST/OuterTree/Expression/BinaryExpressionTests.h"

TestState RunOuterTreeBinaryExpressionTests() 
 {
    auto className = "OuterTreeBinaryExpressionTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeBinaryExpressionTests>();
    TestState state = { 0, 0 };
    state += RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
    state += RunTest(className, "GetChildren", [&testClass]() { testClass->GetChildren(); });
    state += RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
    state += RunTest(className, "OperatorNotEqualOperatorType", [&testClass]() { testClass->OperatorNotEqualOperatorType(); });
    state += RunTest(className, "OperatorNotEqualLeft", [&testClass]() { testClass->OperatorNotEqualLeft(); });
    state += RunTest(className, "OperatorNotEqualOperatorToken", [&testClass]() { testClass->OperatorNotEqualOperatorToken(); });
    state += RunTest(className, "OperatorNotEqualRight", [&testClass]() { testClass->OperatorNotEqualRight(); });

    return state;
}