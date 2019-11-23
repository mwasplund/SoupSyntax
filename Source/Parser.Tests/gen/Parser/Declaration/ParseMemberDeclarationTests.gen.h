#pragma once
#include "Parser/Declaration/ParseMemberDeclarationTests.h"

TestState RunParseMemberDeclarationTests() 
 {
	auto className = "ParseMemberDeclarationTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::ParseMemberDeclarationTests>();
	TestState state = { 0, 0 };
	state += SoupTest::RunTest(className, "SingleIntVariable", [&testClass]() { testClass->SingleIntVariable(); });
	state += SoupTest::RunTest(className, "SingleClassVariable", [&testClass]() { testClass->SingleClassVariable(); });
	state += SoupTest::RunTest(className, "SingleTemplateClassVariable", [&testClass]() { testClass->SingleTemplateClassVariable(); });
	state += SoupTest::RunTest(className, "SingleIntVariableWithInitializer", [&testClass]() { testClass->SingleIntVariableWithInitializer(); });
	state += SoupTest::RunTest(className, "DoubleIntVariable", [&testClass]() { testClass->DoubleIntVariable(); });
	state += SoupTest::RunTest(className, "DoubleIntVariableSingleWithInitializer", [&testClass]() { testClass->DoubleIntVariableSingleWithInitializer(); });
	state += SoupTest::RunTest(className, "DoubleIntVariableBothWithInitializer", [&testClass]() { testClass->DoubleIntVariableBothWithInitializer(); });
	state += SoupTest::RunTest(className, "SingleIntLeadingAndTrailingModifierVariable", [&testClass]() { testClass->SingleIntLeadingAndTrailingModifierVariable(); });

	return state;
}