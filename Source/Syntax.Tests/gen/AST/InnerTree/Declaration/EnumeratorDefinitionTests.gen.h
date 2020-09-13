#pragma once
#include "AST/InnerTree/Declaration/EnumeratorDefinitionTests.h"

TestState RunInnerTreeEnumeratorDefinitionTests() 
 {
	auto className = "InnerTreeEnumeratorDefinitionTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeEnumeratorDefinitionTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "Initialize", [&testClass]() { testClass->Initialize(); });
	state += Soup::Test::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualIdentifierToken", [&testClass]() { testClass->OperatorNotEqualIdentifierToken(); });

	return state;
}