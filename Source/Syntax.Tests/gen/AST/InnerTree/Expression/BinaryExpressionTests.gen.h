#pragma once
#include "AST/InnerTree/Expression/BinaryExpressionTests.h"

TestState RunInnerTreeBinaryExpressionTests() 
 {
	auto className = "InnerTreeBinaryExpressionTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeBinaryExpressionTests>();
	TestState state = { 0, 0 };
	state += SoupTest::RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
	state += SoupTest::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualOperatorType", [&testClass]() { testClass->OperatorNotEqualOperatorType(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualLeft", [&testClass]() { testClass->OperatorNotEqualLeft(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualOperatorToken", [&testClass]() { testClass->OperatorNotEqualOperatorToken(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualRight", [&testClass]() { testClass->OperatorNotEqualRight(); });

	return state;
}