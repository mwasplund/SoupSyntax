#pragma once
#include "AST/OuterTree/Statement/CompoundStatementTests.h"

TestState RunOuterTreeCompoundStatementTests() 
 {
	auto className = "OuterTreeCompoundStatementTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeCompoundStatementTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "InitializeEmpty", [&testClass]() { testClass->InitializeEmpty(); });
	state += Soup::Test::RunTest(className, "InitializeSingleStatement", [&testClass]() { testClass->InitializeSingleStatement(); });
	state += Soup::Test::RunTest(className, "GetChildrenEmpty", [&testClass]() { testClass->GetChildrenEmpty(); });
	state += Soup::Test::RunTest(className, "GetChildrenSingleStatement", [&testClass]() { testClass->GetChildrenSingleStatement(); });
	state += Soup::Test::RunTest(className, "OperatorEqualEmpty", [&testClass]() { testClass->OperatorEqualEmpty(); });
	state += Soup::Test::RunTest(className, "OperatorEqualSingleStatement", [&testClass]() { testClass->OperatorEqualSingleStatement(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualOpenBraceToken", [&testClass]() { testClass->OperatorNotEqualOpenBraceToken(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualEmpty", [&testClass]() { testClass->OperatorNotEqualEmpty(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualSingleStatement", [&testClass]() { testClass->OperatorNotEqualSingleStatement(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualCloseBraceToken", [&testClass]() { testClass->OperatorNotEqualCloseBraceToken(); });

	return state;
}