#pragma once
#include "AST/OuterTree/Expression/LiteralExpressionTests.h"

TestState RunOuterTreeLiteralExpressionTests() 
 {
	auto className = "OuterTreeLiteralExpressionTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeLiteralExpressionTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
	state += Soup::Test::RunTest(className, "GetChildren", [&testClass]() { testClass->GetChildren(); });
	state += Soup::Test::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualType", [&testClass]() { testClass->OperatorNotEqualType(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualToken", [&testClass]() { testClass->OperatorNotEqualToken(); });

	return state;
}