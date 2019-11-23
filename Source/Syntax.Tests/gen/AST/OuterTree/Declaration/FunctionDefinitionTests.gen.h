#pragma once
#include "AST/OuterTree/Declaration/FunctionDefinitionTests.h"

TestState RunOuterTreeFunctionDefinitionTests() 
 {
	auto className = "OuterTreeFunctionDefinitionTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeFunctionDefinitionTests>();
	TestState state = { 0, 0 };
	state += SoupTest::RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
	state += SoupTest::RunTest(className, "GetChildren", [&testClass]() { testClass->GetChildren(); });
	state += SoupTest::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualAttributeSpecifier", [&testClass]() { testClass->OperatorNotEqualAttributeSpecifier(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualReturnType", [&testClass]() { testClass->OperatorNotEqualReturnType(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualIdentifier", [&testClass]() { testClass->OperatorNotEqualIdentifier(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualParameterList", [&testClass]() { testClass->OperatorNotEqualParameterList(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualBody", [&testClass]() { testClass->OperatorNotEqualBody(); });

	return state;
}