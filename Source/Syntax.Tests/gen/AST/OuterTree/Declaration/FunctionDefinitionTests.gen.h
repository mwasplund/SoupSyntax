#pragma once
#include "AST/OuterTree/Declaration/FunctionDefinitionTests.h"

TestState RunOuterTreeFunctionDefinitionTests() 
 {
	auto className = "OuterTreeFunctionDefinitionTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeFunctionDefinitionTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
	state += Soup::Test::RunTest(className, "GetChildren", [&testClass]() { testClass->GetChildren(); });
	state += Soup::Test::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualAttributeSpecifier", [&testClass]() { testClass->OperatorNotEqualAttributeSpecifier(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualReturnType", [&testClass]() { testClass->OperatorNotEqualReturnType(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualIdentifier", [&testClass]() { testClass->OperatorNotEqualIdentifier(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualParameterList", [&testClass]() { testClass->OperatorNotEqualParameterList(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualBody", [&testClass]() { testClass->OperatorNotEqualBody(); });

	return state;
}