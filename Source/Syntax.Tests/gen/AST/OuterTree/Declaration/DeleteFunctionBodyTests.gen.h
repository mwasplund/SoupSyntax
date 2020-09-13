#pragma once
#include "AST/OuterTree/Declaration/DeleteFunctionBodyTests.h"

TestState RunOuterTreeDeleteFunctionBodyTests() 
 {
	auto className = "OuterTreeDeleteFunctionBodyTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeDeleteFunctionBodyTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
	state += Soup::Test::RunTest(className, "GetChildren", [&testClass]() { testClass->GetChildren(); });
	state += Soup::Test::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualEqualToken", [&testClass]() { testClass->OperatorNotEqualEqualToken(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualDeleteToken", [&testClass]() { testClass->OperatorNotEqualDeleteToken(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualSemicolonToken", [&testClass]() { testClass->OperatorNotEqualSemicolonToken(); });

	return state;
}