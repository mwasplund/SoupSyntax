#pragma once
#include "AST/InnerTree/Statement/EmptyStatementTests.h"

TestState RunInnerTreeEmptyStatementTests() 
 {
	auto className = "InnerTreeEmptyStatementTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeEmptyStatementTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
	state += Soup::Test::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualSemicolonToken", [&testClass]() { testClass->OperatorNotEqualSemicolonToken(); });

	return state;
}