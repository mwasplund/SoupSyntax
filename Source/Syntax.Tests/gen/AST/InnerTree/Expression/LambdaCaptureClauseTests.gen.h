#pragma once
#include "/AST/InnerTree/Expression/LambdaCaptureClauseTests.h"

TestState RunInnerTreeLambdaCaptureClauseTests() 
 {
	auto className = "InnerTreeLambdaCaptureClauseTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeLambdaCaptureClauseTests>();
	TestState state = { 0, 0 };
	state += SoupTest::RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
	state += SoupTest::RunTest(className, "InitializeComplex", [&testClass]() { testClass->InitializeComplex(); });
	state += SoupTest::RunTest(className, "OperatorEqualSimple", [&testClass]() { testClass->OperatorEqualSimple(); });
	state += SoupTest::RunTest(className, "OperatorEqualComplex", [&testClass]() { testClass->OperatorEqualComplex(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualNoAmpersandToken", [&testClass]() { testClass->OperatorNotEqualNoAmpersandToken(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualAmpersandToken", [&testClass]() { testClass->OperatorNotEqualAmpersandToken(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualIdentifierToken", [&testClass]() { testClass->OperatorNotEqualIdentifierToken(); });

	return state;
}