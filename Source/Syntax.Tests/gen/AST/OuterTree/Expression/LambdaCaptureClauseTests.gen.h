#pragma once
#include "AST/OuterTree/Expression/LambdaCaptureClauseTests.h"

TestState RunOuterTreeLambdaCaptureClauseTests() 
 {
	auto className = "OuterTreeLambdaCaptureClauseTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeLambdaCaptureClauseTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
	state += Soup::Test::RunTest(className, "InitializeComplex", [&testClass]() { testClass->InitializeComplex(); });
	state += Soup::Test::RunTest(className, "GetChildrenSimple", [&testClass]() { testClass->GetChildrenSimple(); });
	state += Soup::Test::RunTest(className, "GetChildrenComplex", [&testClass]() { testClass->GetChildrenComplex(); });
	state += Soup::Test::RunTest(className, "OperatorEqualSimple", [&testClass]() { testClass->OperatorEqualSimple(); });
	state += Soup::Test::RunTest(className, "OperatorEqualComplex", [&testClass]() { testClass->OperatorEqualComplex(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualNoAmpersandToken", [&testClass]() { testClass->OperatorNotEqualNoAmpersandToken(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualAmpersandToken", [&testClass]() { testClass->OperatorNotEqualAmpersandToken(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualIdentifierToken", [&testClass]() { testClass->OperatorNotEqualIdentifierToken(); });

	return state;
}