#pragma once
#include "AST/InnerTree/Declaration/ConstructorInitializerTests.h"

TestState RunInnerTreeConstructorInitializerTests() 
 {
	auto className = "InnerTreeConstructorInitializerTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeConstructorInitializerTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
	state += Soup::Test::RunTest(className, "InitializeComplex", [&testClass]() { testClass->InitializeComplex(); });
	state += Soup::Test::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualColonToken", [&testClass]() { testClass->OperatorNotEqualColonToken(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualInitializers", [&testClass]() { testClass->OperatorNotEqualInitializers(); });

	return state;
}