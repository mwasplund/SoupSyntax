#pragma once
#include "AST/OuterTree/Declaration/ParameterListTests.h"

TestState RunOuterTreeParameterListTests() 
 {
	auto className = "OuterTreeParameterListTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeParameterListTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
	state += Soup::Test::RunTest(className, "GetChildren", [&testClass]() { testClass->GetChildren(); });
	state += Soup::Test::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualOpenParenthesisToken", [&testClass]() { testClass->OperatorNotEqualOpenParenthesisToken(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualParameters", [&testClass]() { testClass->OperatorNotEqualParameters(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualCloseParenthesisToken", [&testClass]() { testClass->OperatorNotEqualCloseParenthesisToken(); });

	return state;
}