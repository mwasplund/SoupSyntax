#pragma once
#include "AST/InnerTree/Declaration/ValueEqualInitializerTests.h"

TestState RunInnerTreeValueEqualInitializerTests() 
 {
	auto className = "InnerTreeValueEqualInitializerTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeValueEqualInitializerTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
	state += Soup::Test::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualEqualToken", [&testClass]() { testClass->OperatorNotEqualEqualToken(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualExpression", [&testClass]() { testClass->OperatorNotEqualExpression(); });

	return state;
}