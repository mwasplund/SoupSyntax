#pragma once
#include "AST/OuterTree/Declaration/DefaultFunctionBodyTests.h"

TestState RunOuterTreeDefaultFunctionBodyTests() 
 {
	auto className = "OuterTreeDefaultFunctionBodyTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeDefaultFunctionBodyTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
	state += Soup::Test::RunTest(className, "GetChildren", [&testClass]() { testClass->GetChildren(); });
	state += Soup::Test::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualEqualToken", [&testClass]() { testClass->OperatorNotEqualEqualToken(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualDefaultToken", [&testClass]() { testClass->OperatorNotEqualDefaultToken(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualSemicolonToken", [&testClass]() { testClass->OperatorNotEqualSemicolonToken(); });

	return state;
}