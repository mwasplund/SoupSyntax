#pragma once
#include "AST/OuterTree/Declaration/ValueEqualInitializerTests.h"

TestState RunOuterTreeValueEqualInitializerTests() 
 {
	auto className = "OuterTreeValueEqualInitializerTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeValueEqualInitializerTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
	state += Soup::Test::RunTest(className, "GetChildren", [&testClass]() { testClass->GetChildren(); });
	state += Soup::Test::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualEqualToken", [&testClass]() { testClass->OperatorNotEqualEqualToken(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualExpression", [&testClass]() { testClass->OperatorNotEqualExpression(); });

	return state;
}