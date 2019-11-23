#pragma once
#include "AST/OuterTree/Expression/LambdaExpressionTests.h"

TestState RunOuterTreeLambdaExpressionTests() 
 {
	auto className = "OuterTreeLambdaExpressionTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeLambdaExpressionTests>();
	TestState state = { 0, 0 };
	state += SoupTest::RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
	state += SoupTest::RunTest(className, "InitializeComplex", [&testClass]() { testClass->InitializeComplex(); });
	state += SoupTest::RunTest(className, "GetChildrenSimple", [&testClass]() { testClass->GetChildrenSimple(); });
	state += SoupTest::RunTest(className, "GetChildrenComplex", [&testClass]() { testClass->GetChildrenComplex(); });
	state += SoupTest::RunTest(className, "OperatorEqualSimple", [&testClass]() { testClass->OperatorEqualSimple(); });
	state += SoupTest::RunTest(className, "OperatorEqualComplex", [&testClass]() { testClass->OperatorEqualComplex(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualOpenBracketToken", [&testClass]() { testClass->OperatorNotEqualOpenBracketToken(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualCaptureList", [&testClass]() { testClass->OperatorNotEqualCaptureList(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualCloseBracketToken", [&testClass]() { testClass->OperatorNotEqualCloseBracketToken(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualNoParameterList", [&testClass]() { testClass->OperatorNotEqualNoParameterList(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualParameterList", [&testClass]() { testClass->OperatorNotEqualParameterList(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualBody", [&testClass]() { testClass->OperatorNotEqualBody(); });

	return state;
}