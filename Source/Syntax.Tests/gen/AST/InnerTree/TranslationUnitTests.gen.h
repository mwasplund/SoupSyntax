#pragma once
#include "/AST/InnerTree/TranslationUnitTests.h"

TestState RunInnerTreeTranslationUnitTests() 
 {
	auto className = "InnerTreeTranslationUnitTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeTranslationUnitTests>();
	TestState state = { 0, 0 };
	state += SoupTest::RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
	state += SoupTest::RunTest(className, "InitializeComplex", [&testClass]() { testClass->InitializeComplex(); });
	state += SoupTest::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualNoDeclarations", [&testClass]() { testClass->OperatorNotEqualNoDeclarations(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualWithDelarations", [&testClass]() { testClass->OperatorNotEqualWithDelarations(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualEndOfFileToken", [&testClass]() { testClass->OperatorNotEqualEndOfFileToken(); });

	return state;
}