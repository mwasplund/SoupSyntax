#pragma once
#include "AST/OuterTree/Expression/ThisExpressionTests.h"

TestState RunOuterTreeThisExpressionTests() 
 {
	auto className = "OuterTreeThisExpressionTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeThisExpressionTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
	state += Soup::Test::RunTest(className, "GetChildren", [&testClass]() { testClass->GetChildren(); });
	state += Soup::Test::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualToken", [&testClass]() { testClass->OperatorNotEqualToken(); });

	return state;
}