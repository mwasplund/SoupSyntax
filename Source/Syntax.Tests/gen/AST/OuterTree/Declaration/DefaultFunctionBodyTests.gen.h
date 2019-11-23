#pragma once
#include "AST/OuterTree/Declaration/DefaultFunctionBodyTests.h"

TestState RunOuterTreeDefaultFunctionBodyTests() 
 {
	auto className = "OuterTreeDefaultFunctionBodyTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeDefaultFunctionBodyTests>();
	TestState state = { 0, 0 };
	state += SoupTest::RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
	state += SoupTest::RunTest(className, "GetChildren", [&testClass]() { testClass->GetChildren(); });
	state += SoupTest::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualEqualToken", [&testClass]() { testClass->OperatorNotEqualEqualToken(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualDefaultToken", [&testClass]() { testClass->OperatorNotEqualDefaultToken(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualSemicolonToken", [&testClass]() { testClass->OperatorNotEqualSemicolonToken(); });

	return state;
}