#pragma once
#include "AST/OuterTree/Expression/InvocationExpressionTests.h"

TestState RunOuterTreeInvocationExpressionTests() 
 {
	auto className = "OuterTreeInvocationExpressionTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeInvocationExpressionTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
	state += Soup::Test::RunTest(className, "InitializeComplex", [&testClass]() { testClass->InitializeComplex(); });
	state += Soup::Test::RunTest(className, "GetChildrenSimple", [&testClass]() { testClass->GetChildrenSimple(); });
	state += Soup::Test::RunTest(className, "GetChildrenComplex", [&testClass]() { testClass->GetChildrenComplex(); });
	state += Soup::Test::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualLeftExpression", [&testClass]() { testClass->OperatorNotEqualLeftExpression(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualOpenParenthesisToken", [&testClass]() { testClass->OperatorNotEqualOpenParenthesisToken(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualParameters", [&testClass]() { testClass->OperatorNotEqualParameters(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualCloseParenthesisToken", [&testClass]() { testClass->OperatorNotEqualCloseParenthesisToken(); });

	return state;
}