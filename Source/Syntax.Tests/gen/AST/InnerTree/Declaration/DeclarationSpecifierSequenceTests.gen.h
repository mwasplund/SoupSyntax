#pragma once
#include "AST/InnerTree/Declaration/DeclarationSpecifierSequenceTests.h"

TestState RunInnerTreeDeclarationSpecifierSequenceTests() 
 {
	auto className = "InnerTreeDeclarationSpecifierSequenceTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeDeclarationSpecifierSequenceTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "InitializeSimpleNoModifiers", [&testClass]() { testClass->InitializeSimpleNoModifiers(); });
	state += Soup::Test::RunTest(className, "InitializeSimpleWithModifiers", [&testClass]() { testClass->InitializeSimpleWithModifiers(); });
	state += Soup::Test::RunTest(className, "OperatorEqualNoModifiers", [&testClass]() { testClass->OperatorEqualNoModifiers(); });
	state += Soup::Test::RunTest(className, "OperatorEqualWithModifiers", [&testClass]() { testClass->OperatorEqualWithModifiers(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualNoLeadingModifiers", [&testClass]() { testClass->OperatorNotEqualNoLeadingModifiers(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualLeadingModifiers", [&testClass]() { testClass->OperatorNotEqualLeadingModifiers(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualTypeSpecifier", [&testClass]() { testClass->OperatorNotEqualTypeSpecifier(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualNoTrailingModifiers", [&testClass]() { testClass->OperatorNotEqualNoTrailingModifiers(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualTrailingModifiers", [&testClass]() { testClass->OperatorNotEqualTrailingModifiers(); });

	return state;
}