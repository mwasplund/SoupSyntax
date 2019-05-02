#pragma once
#include "/AST/InnerTree/Expression/SubscriptExpressionTests.h"

TestState RunInnerTreeSubscriptExpressionTests() 
 {
    auto className = "InnerTreeSubscriptExpressionTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeSubscriptExpressionTests>();
    TestState state = { 0, 0 };
    state += RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
    state += RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
    state += RunTest(className, "OperatorNotEqualLeft", [&testClass]() { testClass->OperatorNotEqualLeft(); });
    state += RunTest(className, "OperatorNotEqualOpenBracket", [&testClass]() { testClass->OperatorNotEqualOpenBracket(); });
    state += RunTest(className, "OperatorNotEqualRight", [&testClass]() { testClass->OperatorNotEqualRight(); });
    state += RunTest(className, "OperatorNotEqualCloseBracket", [&testClass]() { testClass->OperatorNotEqualCloseBracket(); });

    return state;
}