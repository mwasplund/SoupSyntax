#pragma once
#include "AST/OuterTree/TranslationUnitTests.h"

TestState RunOuterTreeTranslationUnitTests() 
 {
	auto className = "OuterTreeTranslationUnitTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeTranslationUnitTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
	state += Soup::Test::RunTest(className, "InitializeComplex", [&testClass]() { testClass->InitializeComplex(); });
	state += Soup::Test::RunTest(className, "GetChildrenSimple", [&testClass]() { testClass->GetChildrenSimple(); });
	state += Soup::Test::RunTest(className, "GetChildrenComplex", [&testClass]() { testClass->GetChildrenComplex(); });
	state += Soup::Test::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualNoDeclarations", [&testClass]() { testClass->OperatorNotEqualNoDeclarations(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualWithDelarations", [&testClass]() { testClass->OperatorNotEqualWithDelarations(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualEndOfFileToken", [&testClass]() { testClass->OperatorNotEqualEndOfFileToken(); });

	return state;
}