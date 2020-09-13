#pragma once
#include "AST/InnerTree/Statement/CompoundStatementTests.h"

TestState RunInnerTreeCompoundStatementTests() 
 {
	auto className = "InnerTreeCompoundStatementTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeCompoundStatementTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "InitializeEmpty", [&testClass]() { testClass->InitializeEmpty(); });
	state += Soup::Test::RunTest(className, "InitializeSingleStatement", [&testClass]() { testClass->InitializeSingleStatement(); });
	state += Soup::Test::RunTest(className, "OperatorEqualEmpty", [&testClass]() { testClass->OperatorEqualEmpty(); });
	state += Soup::Test::RunTest(className, "OperatorEqualSingleStatement", [&testClass]() { testClass->OperatorEqualSingleStatement(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualOpenBraceToken", [&testClass]() { testClass->OperatorNotEqualOpenBraceToken(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualEmpty", [&testClass]() { testClass->OperatorNotEqualEmpty(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualSingleStatement", [&testClass]() { testClass->OperatorNotEqualSingleStatement(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualCloseBraceToken", [&testClass]() { testClass->OperatorNotEqualCloseBraceToken(); });

	return state;
}