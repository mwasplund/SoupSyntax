#pragma once
#include "AST/InnerTree/Statement/ExpressionStatementTests.h"

TestState RunInnerTreeExpressionStatementTests() 
 {
	auto className = "InnerTreeExpressionStatementTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeExpressionStatementTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
	state += Soup::Test::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualExpression", [&testClass]() { testClass->OperatorNotEqualExpression(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualSemicolonToken", [&testClass]() { testClass->OperatorNotEqualSemicolonToken(); });

	return state;
}