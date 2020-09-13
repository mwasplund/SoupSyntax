#pragma once
#include "AST/OuterTree/Declaration/AccessorSpecifierTests.h"

TestState RunOuterTreeAccessorSpecifierTests() 
 {
	auto className = "OuterTreeAccessorSpecifierTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeAccessorSpecifierTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "Initialize", [&testClass]() { testClass->Initialize(); });
	state += Soup::Test::RunTest(className, "GetChildren", [&testClass]() { testClass->GetChildren(); });
	state += Soup::Test::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualAccessorToken", [&testClass]() { testClass->OperatorNotEqualAccessorToken(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualColonToken", [&testClass]() { testClass->OperatorNotEqualColonToken(); });

	return state;
}