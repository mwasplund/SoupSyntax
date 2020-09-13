#pragma once
#include "AST/InnerTree/TranslationUnitTests.h"

TestState RunInnerTreeTranslationUnitTests() 
 {
	auto className = "InnerTreeTranslationUnitTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeTranslationUnitTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
	state += Soup::Test::RunTest(className, "InitializeComplex", [&testClass]() { testClass->InitializeComplex(); });
	state += Soup::Test::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualNoDeclarations", [&testClass]() { testClass->OperatorNotEqualNoDeclarations(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualWithDelarations", [&testClass]() { testClass->OperatorNotEqualWithDelarations(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualEndOfFileToken", [&testClass]() { testClass->OperatorNotEqualEndOfFileToken(); });

	return state;
}