#pragma once
#include "AST/OuterTree/Statement/EmptyStatementTests.h"

TestState RunOuterTreeEmptyStatementTests() 
 {
	auto className = "OuterTreeEmptyStatementTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeEmptyStatementTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
	state += Soup::Test::RunTest(className, "GetChildren", [&testClass]() { testClass->GetChildren(); });
	state += Soup::Test::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualSemicolonToken", [&testClass]() { testClass->OperatorNotEqualSemicolonToken(); });

	return state;
}