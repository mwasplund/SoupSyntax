#pragma once
#include "AST/OuterTree/Expression/LambdaExpressionTests.h"

TestState RunOuterTreeLambdaExpressionTests() 
 {
	auto className = "OuterTreeLambdaExpressionTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeLambdaExpressionTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
	state += Soup::Test::RunTest(className, "InitializeComplex", [&testClass]() { testClass->InitializeComplex(); });
	state += Soup::Test::RunTest(className, "GetChildrenSimple", [&testClass]() { testClass->GetChildrenSimple(); });
	state += Soup::Test::RunTest(className, "GetChildrenComplex", [&testClass]() { testClass->GetChildrenComplex(); });
	state += Soup::Test::RunTest(className, "OperatorEqualSimple", [&testClass]() { testClass->OperatorEqualSimple(); });
	state += Soup::Test::RunTest(className, "OperatorEqualComplex", [&testClass]() { testClass->OperatorEqualComplex(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualOpenBracketToken", [&testClass]() { testClass->OperatorNotEqualOpenBracketToken(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualCaptureList", [&testClass]() { testClass->OperatorNotEqualCaptureList(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualCloseBracketToken", [&testClass]() { testClass->OperatorNotEqualCloseBracketToken(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualNoParameterList", [&testClass]() { testClass->OperatorNotEqualNoParameterList(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualParameterList", [&testClass]() { testClass->OperatorNotEqualParameterList(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualBody", [&testClass]() { testClass->OperatorNotEqualBody(); });

	return state;
}