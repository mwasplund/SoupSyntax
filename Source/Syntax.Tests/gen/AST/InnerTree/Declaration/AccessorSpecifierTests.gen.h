#pragma once
#include "AST/InnerTree/Declaration/AccessorSpecifierTests.h"

TestState RunInnerTreeAccessorSpecifierTests() 
 {
	auto className = "InnerTreeAccessorSpecifierTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeAccessorSpecifierTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "Initialize", [&testClass]() { testClass->Initialize(); });
	state += Soup::Test::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualAccessorToken", [&testClass]() { testClass->OperatorNotEqualAccessorToken(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualColonToken", [&testClass]() { testClass->OperatorNotEqualColonToken(); });

	return state;
}