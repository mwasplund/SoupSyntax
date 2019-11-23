#pragma once
#include "AST/OuterTree/Expression/UnaryExpressionTests.h"

TestState RunOuterTreeUnaryExpressionTests() 
 {
	auto className = "OuterTreeUnaryExpressionTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeUnaryExpressionTests>();
	TestState state = { 0, 0 };
	state += SoupTest::RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
	state += SoupTest::RunTest(className, "PostfixOperatorGetChildren", [&testClass]() { testClass->PostfixOperatorGetChildren(); });
	state += SoupTest::RunTest(className, "PrefixOperatorGetChildren", [&testClass]() { testClass->PrefixOperatorGetChildren(); });
	state += SoupTest::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualOperator", [&testClass]() { testClass->OperatorNotEqualOperator(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualOperand", [&testClass]() { testClass->OperatorNotEqualOperand(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualOperatorToken", [&testClass]() { testClass->OperatorNotEqualOperatorToken(); });

	return state;
}