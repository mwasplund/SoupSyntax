#pragma once
#include "AST/InnerTree/Declaration/DeleteFunctionBodyTests.h"

TestState RunInnerTreeDeleteFunctionBodyTests() 
 {
	auto className = "InnerTreeDeleteFunctionBodyTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeDeleteFunctionBodyTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
	state += Soup::Test::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualEqualToken", [&testClass]() { testClass->OperatorNotEqualEqualToken(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualDeleteToken", [&testClass]() { testClass->OperatorNotEqualDeleteToken(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualSemicolonToken", [&testClass]() { testClass->OperatorNotEqualSemicolonToken(); });

	return state;
}