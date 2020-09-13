#pragma once
#include "AST/OuterTree/Declaration/ConstructorDefinitionTests.h"

TestState RunOuterTreeConstructorDefinitionTests() 
 {
	auto className = "OuterTreeConstructorDefinitionTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeConstructorDefinitionTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
	state += Soup::Test::RunTest(className, "InitializeComplex", [&testClass]() { testClass->InitializeComplex(); });
	state += Soup::Test::RunTest(className, "GetChildrenSimple", [&testClass]() { testClass->GetChildrenSimple(); });
	state += Soup::Test::RunTest(className, "GetChildrenComplex", [&testClass]() { testClass->GetChildrenComplex(); });
	state += Soup::Test::RunTest(className, "OperatorEqualSimple", [&testClass]() { testClass->OperatorEqualSimple(); });
	state += Soup::Test::RunTest(className, "OperatorEqualComplex", [&testClass]() { testClass->OperatorEqualComplex(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualIdentifier", [&testClass]() { testClass->OperatorNotEqualIdentifier(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualParameterList", [&testClass]() { testClass->OperatorNotEqualParameterList(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualNoConstructorInitializer", [&testClass]() { testClass->OperatorNotEqualNoConstructorInitializer(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualConstructorInitializer", [&testClass]() { testClass->OperatorNotEqualConstructorInitializer(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualBody", [&testClass]() { testClass->OperatorNotEqualBody(); });

	return state;
}