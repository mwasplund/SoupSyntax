#pragma once
#include "/AST/InnerTree/Declaration/InitializerListTests.h"

TestState RunInnerTreeInitializerListTests() 
 {
	auto className = "InnerTreeInitializerListTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeInitializerListTests>();
	TestState state = { 0, 0 };
	state += SoupTest::RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
	state += SoupTest::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualOpenParenthesisToken", [&testClass]() { testClass->OperatorNotEqualOpenParenthesisToken(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualValues", [&testClass]() { testClass->OperatorNotEqualValues(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualCloseParenthesisToken", [&testClass]() { testClass->OperatorNotEqualCloseParenthesisToken(); });

	return state;
}