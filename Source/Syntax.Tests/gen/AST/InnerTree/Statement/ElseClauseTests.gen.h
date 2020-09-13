#pragma once
#include "AST/InnerTree/Statement/ElseClauseTests.h"

TestState RunInnerTreeElseClauseTests() 
 {
	auto className = "InnerTreeElseClauseTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeElseClauseTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
	state += Soup::Test::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualElseToken", [&testClass]() { testClass->OperatorNotEqualElseToken(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualStatement", [&testClass]() { testClass->OperatorNotEqualStatement(); });

	return state;
}