#pragma once
#include "AST/OuterTree/Shared/DestructorIdentifierTests.h"

TestState RunOuterTreeDestructorIdentifierTests() 
 {
	auto className = "OuterTreeDestructorIdentifierTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeDestructorIdentifierTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "Initialize", [&testClass]() { testClass->Initialize(); });
	state += Soup::Test::RunTest(className, "GetChildren", [&testClass]() { testClass->GetChildren(); });
	state += Soup::Test::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualTildeToken", [&testClass]() { testClass->OperatorNotEqualTildeToken(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualIdentifier", [&testClass]() { testClass->OperatorNotEqualIdentifier(); });

	return state;
}