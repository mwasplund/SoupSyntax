#pragma once
#include "/AST/InnerTree/Expression/LambdaExpressionTests.h"

TestState RunInnerTreeLambdaExpressionTests() 
 {
	auto className = "InnerTreeLambdaExpressionTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeLambdaExpressionTests>();
	TestState state = { 0, 0 };
	state += SoupTest::RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
	state += SoupTest::RunTest(className, "InitializeComplex", [&testClass]() { testClass->InitializeComplex(); });
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