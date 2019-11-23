#pragma once
#include "AST/InnerTree/Declaration/DefaultFunctionBodyTests.h"

TestState RunInnerTreeDefaultFunctionBodyTests() 
 {
	auto className = "InnerTreeDefaultFunctionBodyTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeDefaultFunctionBodyTests>();
	TestState state = { 0, 0 };
	state += SoupTest::RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
	state += SoupTest::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualEqualToken", [&testClass]() { testClass->OperatorNotEqualEqualToken(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualDefaultToken", [&testClass]() { testClass->OperatorNotEqualDefaultToken(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualSemicolonToken", [&testClass]() { testClass->OperatorNotEqualSemicolonToken(); });

	return state;
}