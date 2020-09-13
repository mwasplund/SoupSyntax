#pragma once
#include "AST/InnerTree/Expression/LiteralExpressionTests.h"

TestState RunInnerTreeLiteralExpressionTests() 
 {
	auto className = "InnerTreeLiteralExpressionTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeLiteralExpressionTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
	state += Soup::Test::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualType", [&testClass]() { testClass->OperatorNotEqualType(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualToken", [&testClass]() { testClass->OperatorNotEqualToken(); });

	return state;
}