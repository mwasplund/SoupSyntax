#pragma once
#include "AST/InnerTree/Declaration/InitializerListTests.h"

TestState RunInnerTreeInitializerListTests() 
 {
	auto className = "InnerTreeInitializerListTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeInitializerListTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
	state += Soup::Test::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualOpenParenthesisToken", [&testClass]() { testClass->OperatorNotEqualOpenParenthesisToken(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualValues", [&testClass]() { testClass->OperatorNotEqualValues(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualCloseParenthesisToken", [&testClass]() { testClass->OperatorNotEqualCloseParenthesisToken(); });

	return state;
}