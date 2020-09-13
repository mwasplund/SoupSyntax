#pragma once
#include "AST/OuterTree/Shared/NestedNameSpecifierTests.h"

TestState RunOuterTreeNestedNameSpecifierTests() 
 {
	auto className = "OuterTreeNestedNameSpecifierTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeNestedNameSpecifierTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "Initialize", [&testClass]() { testClass->Initialize(); });
	state += Soup::Test::RunTest(className, "GetChildren", [&testClass]() { testClass->GetChildren(); });
	state += Soup::Test::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualSpecifierSequence", [&testClass]() { testClass->OperatorNotEqualSpecifierSequence(); });

	return state;
}