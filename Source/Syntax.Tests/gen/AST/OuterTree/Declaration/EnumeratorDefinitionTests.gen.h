#pragma once
#include "AST/OuterTree/Declaration/EnumeratorDefinitionTests.h"

TestState RunOuterTreeEnumeratorDefinitionTests() 
 {
	auto className = "OuterTreeEnumeratorDefinitionTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeEnumeratorDefinitionTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "Initialize", [&testClass]() { testClass->Initialize(); });
	state += Soup::Test::RunTest(className, "GetChildren", [&testClass]() { testClass->GetChildren(); });
	state += Soup::Test::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualIdentifierToken", [&testClass]() { testClass->OperatorNotEqualIdentifierToken(); });

	return state;
}