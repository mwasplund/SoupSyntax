#pragma once
#include "AST/OuterTree/Declaration/InitializerDeclaratorListTests.h"

TestState RunOuterTreeInitializerDeclaratorListTests() 
 {
	auto className = "OuterTreeInitializerDeclaratorListTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeInitializerDeclaratorListTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
	state += Soup::Test::RunTest(className, "GetChildren", [&testClass]() { testClass->GetChildren(); });
	state += Soup::Test::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualLessItems", [&testClass]() { testClass->OperatorNotEqualLessItems(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualWithItems", [&testClass]() { testClass->OperatorNotEqualWithItems(); });

	return state;
}