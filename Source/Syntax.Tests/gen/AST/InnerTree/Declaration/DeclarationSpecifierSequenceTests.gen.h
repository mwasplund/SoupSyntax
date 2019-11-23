#pragma once
#include "AST/InnerTree/Declaration/DeclarationSpecifierSequenceTests.h"

TestState RunInnerTreeDeclarationSpecifierSequenceTests() 
 {
	auto className = "InnerTreeDeclarationSpecifierSequenceTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeDeclarationSpecifierSequenceTests>();
	TestState state = { 0, 0 };
	state += SoupTest::RunTest(className, "InitializeSimpleNoModifiers", [&testClass]() { testClass->InitializeSimpleNoModifiers(); });
	state += SoupTest::RunTest(className, "InitializeSimpleWithModifiers", [&testClass]() { testClass->InitializeSimpleWithModifiers(); });
	state += SoupTest::RunTest(className, "OperatorEqualNoModifiers", [&testClass]() { testClass->OperatorEqualNoModifiers(); });
	state += SoupTest::RunTest(className, "OperatorEqualWithModifiers", [&testClass]() { testClass->OperatorEqualWithModifiers(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualNoLeadingModifiers", [&testClass]() { testClass->OperatorNotEqualNoLeadingModifiers(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualLeadingModifiers", [&testClass]() { testClass->OperatorNotEqualLeadingModifiers(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualTypeSpecifier", [&testClass]() { testClass->OperatorNotEqualTypeSpecifier(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualNoTrailingModifiers", [&testClass]() { testClass->OperatorNotEqualNoTrailingModifiers(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualTrailingModifiers", [&testClass]() { testClass->OperatorNotEqualTrailingModifiers(); });

	return state;
}