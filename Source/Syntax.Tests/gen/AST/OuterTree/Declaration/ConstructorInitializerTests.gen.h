#pragma once
#include "AST/OuterTree/Declaration/ConstructorInitializerTests.h"

TestState RunOuterTreeConstructorInitializerTests() 
 {
	auto className = "OuterTreeConstructorInitializerTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeConstructorInitializerTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
	state += Soup::Test::RunTest(className, "InitializeComplex", [&testClass]() { testClass->InitializeComplex(); });
	state += Soup::Test::RunTest(className, "GetChildrenSimple", [&testClass]() { testClass->GetChildrenSimple(); });
	state += Soup::Test::RunTest(className, "GetChildrenComplex", [&testClass]() { testClass->GetChildrenComplex(); });
	state += Soup::Test::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualColonToken", [&testClass]() { testClass->OperatorNotEqualColonToken(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualInitializers", [&testClass]() { testClass->OperatorNotEqualInitializers(); });

	return state;
}