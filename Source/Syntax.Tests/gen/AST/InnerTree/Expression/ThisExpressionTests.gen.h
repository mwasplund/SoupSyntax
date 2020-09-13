#pragma once
#include "AST/InnerTree/Expression/ThisExpressionTests.h"

TestState RunInnerTreeThisExpressionTests() 
 {
	auto className = "InnerTreeThisExpressionTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeThisExpressionTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
	state += Soup::Test::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualToken", [&testClass]() { testClass->OperatorNotEqualToken(); });

	return state;
}