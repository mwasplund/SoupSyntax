#pragma once
#include "AST/InnerTree/Declaration/ParameterTests.h"

TestState RunInnerTreeParameterTests() 
 {
	auto className = "InnerTreeParameterTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeParameterTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
	state += Soup::Test::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualDeclarationSpecifierSequence", [&testClass]() { testClass->OperatorNotEqualDeclarationSpecifierSequence(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualDeclarator", [&testClass]() { testClass->OperatorNotEqualDeclarator(); });

	return state;
}