#pragma once
#include "AST/InnerTree/Shared/SimpleIdentifierTests.h"

TestState RunInnerTreeSimpleIdentifierTests() 
 {
	auto className = "InnerTreeSimpleIdentifierTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeSimpleIdentifierTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "Initialize", [&testClass]() { testClass->Initialize(); });
	state += Soup::Test::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualIdentifier", [&testClass]() { testClass->OperatorNotEqualIdentifier(); });

	return state;
}