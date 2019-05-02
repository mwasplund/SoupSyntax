#pragma once
#include "/AST/OuterTree/Expression/SubscriptExpressionTests.h"

TestState RunOuterTreeSubscriptExpressionTests() 
 {
    auto className = "OuterTreeSubscriptExpressionTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeSubscriptExpressionTests>();
    TestState state = { 0, 0 };
    state += RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
    state += RunTest(className, "GetChildren", [&testClass]() { testClass->GetChildren(); });
    state += RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
    state += RunTest(className, "OperatorNotEqualLeft", [&testClass]() { testClass->OperatorNotEqualLeft(); });
    state += RunTest(className, "OperatorNotEqualOpenBracket", [&testClass]() { testClass->OperatorNotEqualOpenBracket(); });
    state += RunTest(className, "OperatorNotEqualRight", [&testClass]() { testClass->OperatorNotEqualRight(); });
    state += RunTest(className, "OperatorNotEqualCloseBracket", [&testClass]() { testClass->OperatorNotEqualCloseBracket(); });

    return state;
}