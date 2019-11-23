#pragma once
#include "AST/OuterTree/Declaration/ConstructorDefinitionTests.h"

TestState RunOuterTreeConstructorDefinitionTests() 
 {
	auto className = "OuterTreeConstructorDefinitionTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeConstructorDefinitionTests>();
	TestState state = { 0, 0 };
	state += SoupTest::RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
	state += SoupTest::RunTest(className, "InitializeComplex", [&testClass]() { testClass->InitializeComplex(); });
	state += SoupTest::RunTest(className, "GetChildrenSimple", [&testClass]() { testClass->GetChildrenSimple(); });
	state += SoupTest::RunTest(className, "GetChildrenComplex", [&testClass]() { testClass->GetChildrenComplex(); });
	state += SoupTest::RunTest(className, "OperatorEqualSimple", [&testClass]() { testClass->OperatorEqualSimple(); });
	state += SoupTest::RunTest(className, "OperatorEqualComplex", [&testClass]() { testClass->OperatorEqualComplex(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualIdentifier", [&testClass]() { testClass->OperatorNotEqualIdentifier(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualParameterList", [&testClass]() { testClass->OperatorNotEqualParameterList(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualNoConstructorInitializer", [&testClass]() { testClass->OperatorNotEqualNoConstructorInitializer(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualConstructorInitializer", [&testClass]() { testClass->OperatorNotEqualConstructorInitializer(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualBody", [&testClass]() { testClass->OperatorNotEqualBody(); });

	return state;
}