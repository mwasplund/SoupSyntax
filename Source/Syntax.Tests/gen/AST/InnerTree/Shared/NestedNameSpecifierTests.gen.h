#pragma once
#include "AST/InnerTree/Shared/NestedNameSpecifierTests.h"

TestState RunInnerTreeNestedNameSpecifierTests() 
 {
	auto className = "InnerTreeNestedNameSpecifierTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeNestedNameSpecifierTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "Initialize", [&testClass]() { testClass->Initialize(); });
	state += Soup::Test::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualSpecifierSequence", [&testClass]() { testClass->OperatorNotEqualSpecifierSequence(); });

	return state;
}