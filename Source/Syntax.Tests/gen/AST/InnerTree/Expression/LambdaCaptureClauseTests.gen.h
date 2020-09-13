#pragma once
#include "AST/InnerTree/Expression/LambdaCaptureClauseTests.h"

TestState RunInnerTreeLambdaCaptureClauseTests() 
 {
	auto className = "InnerTreeLambdaCaptureClauseTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeLambdaCaptureClauseTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
	state += Soup::Test::RunTest(className, "InitializeComplex", [&testClass]() { testClass->InitializeComplex(); });
	state += Soup::Test::RunTest(className, "OperatorEqualSimple", [&testClass]() { testClass->OperatorEqualSimple(); });
	state += Soup::Test::RunTest(className, "OperatorEqualComplex", [&testClass]() { testClass->OperatorEqualComplex(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualNoAmpersandToken", [&testClass]() { testClass->OperatorNotEqualNoAmpersandToken(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualAmpersandToken", [&testClass]() { testClass->OperatorNotEqualAmpersandToken(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualIdentifierToken", [&testClass]() { testClass->OperatorNotEqualIdentifierToken(); });

	return state;
}