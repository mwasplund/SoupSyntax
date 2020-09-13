#pragma once
#include "AST/InnerTree/Declaration/PointerOperatorTests.h"

TestState RunInnerTreePointerOperatorTests() 
 {
	auto className = "InnerTreePointerOperatorTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreePointerOperatorTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "Initialize", [&testClass]() { testClass->Initialize(); });
	state += Soup::Test::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualOperatorToken", [&testClass]() { testClass->OperatorNotEqualOperatorToken(); });

	return state;
}