#pragma once
#include "AST/OuterTree/Expression/UnaryExpressionTests.h"

TestState RunOuterTreeUnaryExpressionTests() 
 {
	auto className = "OuterTreeUnaryExpressionTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeUnaryExpressionTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
	state += Soup::Test::RunTest(className, "PostfixOperatorGetChildren", [&testClass]() { testClass->PostfixOperatorGetChildren(); });
	state += Soup::Test::RunTest(className, "PrefixOperatorGetChildren", [&testClass]() { testClass->PrefixOperatorGetChildren(); });
	state += Soup::Test::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualOperator", [&testClass]() { testClass->OperatorNotEqualOperator(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualOperand", [&testClass]() { testClass->OperatorNotEqualOperand(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualOperatorToken", [&testClass]() { testClass->OperatorNotEqualOperatorToken(); });

	return state;
}