#pragma once
#include "AST/OuterTree/Statement/ElseClauseTests.h"

TestState RunOuterTreeElseClauseTests() 
 {
	auto className = "OuterTreeElseClauseTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeElseClauseTests>();
	TestState state = { 0, 0 };
	state += SoupTest::RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
	state += SoupTest::RunTest(className, "GetChildren", [&testClass]() { testClass->GetChildren(); });
	state += SoupTest::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualElseToken", [&testClass]() { testClass->OperatorNotEqualElseToken(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualStatement", [&testClass]() { testClass->OperatorNotEqualStatement(); });

	return state;
}