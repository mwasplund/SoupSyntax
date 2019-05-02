#pragma once
#include "/AST/InnerTree/Expression/UnaryExpressionTests.h"

TestState RunInnerTreeUnaryExpressionTests() 
 {
    auto className = "InnerTreeUnaryExpressionTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeUnaryExpressionTests>();
    TestState state = { 0, 0 };
    state += RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
    state += RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
    state += RunTest(className, "OperatorNotEqualOperator", [&testClass]() { testClass->OperatorNotEqualOperator(); });
    state += RunTest(className, "OperatorNotEqualOperand", [&testClass]() { testClass->OperatorNotEqualOperand(); });
    state += RunTest(className, "OperatorNotEqualOperatorToken", [&testClass]() { testClass->OperatorNotEqualOperatorToken(); });

    return state;
}