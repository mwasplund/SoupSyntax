#pragma once
#include "AST/InnerTree/Shared/DestructorIdentifierTests.h"

TestState RunInnerTreeDestructorIdentifierTests() 
 {
	auto className = "InnerTreeDestructorIdentifierTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeDestructorIdentifierTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "Initialize", [&testClass]() { testClass->Initialize(); });
	state += Soup::Test::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualTildeToken", [&testClass]() { testClass->OperatorNotEqualTildeToken(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualIdentifier", [&testClass]() { testClass->OperatorNotEqualIdentifier(); });

	return state;
}