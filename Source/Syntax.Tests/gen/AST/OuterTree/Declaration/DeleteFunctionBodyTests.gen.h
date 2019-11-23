#pragma once
#include "AST/OuterTree/Declaration/DeleteFunctionBodyTests.h"

TestState RunOuterTreeDeleteFunctionBodyTests() 
 {
	auto className = "OuterTreeDeleteFunctionBodyTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeDeleteFunctionBodyTests>();
	TestState state = { 0, 0 };
	state += SoupTest::RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
	state += SoupTest::RunTest(className, "GetChildren", [&testClass]() { testClass->GetChildren(); });
	state += SoupTest::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualEqualToken", [&testClass]() { testClass->OperatorNotEqualEqualToken(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualDeleteToken", [&testClass]() { testClass->OperatorNotEqualDeleteToken(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualSemicolonToken", [&testClass]() { testClass->OperatorNotEqualSemicolonToken(); });

	return state;
}