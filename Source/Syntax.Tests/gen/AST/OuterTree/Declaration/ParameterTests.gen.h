#pragma once
#include "AST/OuterTree/Declaration/ParameterTests.h"

TestState RunOuterTreeParameterTests() 
 {
	auto className = "OuterTreeParameterTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeParameterTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
	state += Soup::Test::RunTest(className, "GetChildren", [&testClass]() { testClass->GetChildren(); });
	state += Soup::Test::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualDeclarationSpecifierSequence", [&testClass]() { testClass->OperatorNotEqualDeclarationSpecifierSequence(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualDeclarator", [&testClass]() { testClass->OperatorNotEqualDeclarator(); });

	return state;
}