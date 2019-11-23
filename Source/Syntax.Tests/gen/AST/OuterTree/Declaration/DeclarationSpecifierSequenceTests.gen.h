#pragma once
#include "AST/OuterTree/Declaration/DeclarationSpecifierSequenceTests.h"

TestState RunOuterTreeDeclarationSpecifierSequenceTests() 
 {
	auto className = "OuterTreeDeclarationSpecifierSequenceTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeDeclarationSpecifierSequenceTests>();
	TestState state = { 0, 0 };
	state += SoupTest::RunTest(className, "InitializeSimpleNoModifiers", [&testClass]() { testClass->InitializeSimpleNoModifiers(); });
	state += SoupTest::RunTest(className, "InitializeSimpleWithModifiers", [&testClass]() { testClass->InitializeSimpleWithModifiers(); });
	state += SoupTest::RunTest(className, "GetChildrenNoModifiers", [&testClass]() { testClass->GetChildrenNoModifiers(); });
	state += SoupTest::RunTest(className, "GetChildrenWithModifiers", [&testClass]() { testClass->GetChildrenWithModifiers(); });
	state += SoupTest::RunTest(className, "OperatorEqualNoModifiers", [&testClass]() { testClass->OperatorEqualNoModifiers(); });
	state += SoupTest::RunTest(className, "OperatorEqualWithModifiers", [&testClass]() { testClass->OperatorEqualWithModifiers(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualNoLeadingModifiers", [&testClass]() { testClass->OperatorNotEqualNoLeadingModifiers(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualLeadingModifiers", [&testClass]() { testClass->OperatorNotEqualLeadingModifiers(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualTypeSpecifier", [&testClass]() { testClass->OperatorNotEqualTypeSpecifier(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualNoTrailingModifiers", [&testClass]() { testClass->OperatorNotEqualNoTrailingModifiers(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualTrailingModifiers", [&testClass]() { testClass->OperatorNotEqualTrailingModifiers(); });

	return state;
}