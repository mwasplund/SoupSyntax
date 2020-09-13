#pragma once
#include "AST/OuterTree/Declaration/PointerOperatorTests.h"

TestState RunOuterTreePointerOperatorTests() 
 {
	auto className = "OuterTreePointerOperatorTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreePointerOperatorTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "Initialize", [&testClass]() { testClass->Initialize(); });
	state += Soup::Test::RunTest(className, "GetChildren", [&testClass]() { testClass->GetChildren(); });
	state += Soup::Test::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualOperatorToken", [&testClass]() { testClass->OperatorNotEqualOperatorToken(); });

	return state;
}