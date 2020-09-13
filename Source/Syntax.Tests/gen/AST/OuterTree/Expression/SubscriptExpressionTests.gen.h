#pragma once
#include "AST/OuterTree/Expression/SubscriptExpressionTests.h"

TestState RunOuterTreeSubscriptExpressionTests() 
 {
	auto className = "OuterTreeSubscriptExpressionTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeSubscriptExpressionTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
	state += Soup::Test::RunTest(className, "GetChildren", [&testClass]() { testClass->GetChildren(); });
	state += Soup::Test::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualLeft", [&testClass]() { testClass->OperatorNotEqualLeft(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualOpenBracket", [&testClass]() { testClass->OperatorNotEqualOpenBracket(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualRight", [&testClass]() { testClass->OperatorNotEqualRight(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualCloseBracket", [&testClass]() { testClass->OperatorNotEqualCloseBracket(); });

	return state;
}