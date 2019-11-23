#pragma once
#include "AST/InnerTree/Declaration/ConstructorInitializerTests.h"

TestState RunInnerTreeConstructorInitializerTests() 
 {
	auto className = "InnerTreeConstructorInitializerTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeConstructorInitializerTests>();
	TestState state = { 0, 0 };
	state += SoupTest::RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
	state += SoupTest::RunTest(className, "InitializeComplex", [&testClass]() { testClass->InitializeComplex(); });
	state += SoupTest::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualColonToken", [&testClass]() { testClass->OperatorNotEqualColonToken(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualInitializers", [&testClass]() { testClass->OperatorNotEqualInitializers(); });

	return state;
}