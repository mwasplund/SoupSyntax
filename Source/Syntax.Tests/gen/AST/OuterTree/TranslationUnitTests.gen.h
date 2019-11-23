#pragma once
#include "AST/OuterTree/TranslationUnitTests.h"

TestState RunOuterTreeTranslationUnitTests() 
 {
	auto className = "OuterTreeTranslationUnitTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeTranslationUnitTests>();
	TestState state = { 0, 0 };
	state += SoupTest::RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
	state += SoupTest::RunTest(className, "InitializeComplex", [&testClass]() { testClass->InitializeComplex(); });
	state += SoupTest::RunTest(className, "GetChildrenSimple", [&testClass]() { testClass->GetChildrenSimple(); });
	state += SoupTest::RunTest(className, "GetChildrenComplex", [&testClass]() { testClass->GetChildrenComplex(); });
	state += SoupTest::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualNoDeclarations", [&testClass]() { testClass->OperatorNotEqualNoDeclarations(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualWithDelarations", [&testClass]() { testClass->OperatorNotEqualWithDelarations(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualEndOfFileToken", [&testClass]() { testClass->OperatorNotEqualEndOfFileToken(); });

	return state;
}