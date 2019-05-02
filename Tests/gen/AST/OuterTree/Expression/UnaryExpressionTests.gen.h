#pragma once
#include "/AST/OuterTree/Expression/UnaryExpressionTests.h"

TestState RunOuterTreeUnaryExpressionTests() 
 {
    auto className = "OuterTreeUnaryExpressionTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeUnaryExpressionTests>();
    TestState state = { 0, 0 };
    state += RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
    state += RunTest(className, "PostfixOperatorGetChildren", [&testClass]() { testClass->PostfixOperatorGetChildren(); });
    state += RunTest(className, "PrefixOperatorGetChildren", [&testClass]() { testClass->PrefixOperatorGetChildren(); });
    state += RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
    state += RunTest(className, "OperatorNotEqualOperator", [&testClass]() { testClass->OperatorNotEqualOperator(); });
    state += RunTest(className, "OperatorNotEqualOperand", [&testClass]() { testClass->OperatorNotEqualOperand(); });
    state += RunTest(className, "OperatorNotEqualOperatorToken", [&testClass]() { testClass->OperatorNotEqualOperatorToken(); });

    return state;
}