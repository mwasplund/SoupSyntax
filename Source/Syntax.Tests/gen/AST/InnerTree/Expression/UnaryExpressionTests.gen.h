#pragma once
#include "AST/InnerTree/Expression/UnaryExpressionTests.h"

TestState RunInnerTreeUnaryExpressionTests() 
 {
	auto className = "InnerTreeUnaryExpressionTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeUnaryExpressionTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
	state += Soup::Test::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualOperator", [&testClass]() { testClass->OperatorNotEqualOperator(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualOperand", [&testClass]() { testClass->OperatorNotEqualOperand(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualOperatorToken", [&testClass]() { testClass->OperatorNotEqualOperatorToken(); });

	return state;
}