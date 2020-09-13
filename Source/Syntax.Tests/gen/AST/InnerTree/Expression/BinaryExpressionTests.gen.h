#pragma once
#include "AST/InnerTree/Expression/BinaryExpressionTests.h"

TestState RunInnerTreeBinaryExpressionTests() 
 {
	auto className = "InnerTreeBinaryExpressionTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeBinaryExpressionTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
	state += Soup::Test::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualOperatorType", [&testClass]() { testClass->OperatorNotEqualOperatorType(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualLeft", [&testClass]() { testClass->OperatorNotEqualLeft(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualOperatorToken", [&testClass]() { testClass->OperatorNotEqualOperatorToken(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualRight", [&testClass]() { testClass->OperatorNotEqualRight(); });

	return state;
}