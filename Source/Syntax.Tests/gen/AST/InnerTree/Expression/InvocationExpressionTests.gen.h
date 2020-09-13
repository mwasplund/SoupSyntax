#pragma once
#include "AST/InnerTree/Expression/InvocationExpressionTests.h"

TestState RunInnerTreeInvocationExpressionTests() 
 {
	auto className = "InnerTreeInvocationExpressionTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeInvocationExpressionTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
	state += Soup::Test::RunTest(className, "InitializeComplex", [&testClass]() { testClass->InitializeComplex(); });
	state += Soup::Test::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualLeftExpression", [&testClass]() { testClass->OperatorNotEqualLeftExpression(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualOpenParenthesisToken", [&testClass]() { testClass->OperatorNotEqualOpenParenthesisToken(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualParameters", [&testClass]() { testClass->OperatorNotEqualParameters(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualCloseParenthesisToken", [&testClass]() { testClass->OperatorNotEqualCloseParenthesisToken(); });

	return state;
}