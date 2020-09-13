#pragma once
#include "Parser/Declaration/ParseMemberDeclarationTests.h"

TestState RunParseMemberDeclarationTests() 
 {
	auto className = "ParseMemberDeclarationTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::ParseMemberDeclarationTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "SingleIntVariable", [&testClass]() { testClass->SingleIntVariable(); });
	state += Soup::Test::RunTest(className, "SingleClassVariable", [&testClass]() { testClass->SingleClassVariable(); });
	state += Soup::Test::RunTest(className, "SingleTemplateClassVariable", [&testClass]() { testClass->SingleTemplateClassVariable(); });
	state += Soup::Test::RunTest(className, "SingleIntVariableWithInitializer", [&testClass]() { testClass->SingleIntVariableWithInitializer(); });
	state += Soup::Test::RunTest(className, "DoubleIntVariable", [&testClass]() { testClass->DoubleIntVariable(); });
	state += Soup::Test::RunTest(className, "DoubleIntVariableSingleWithInitializer", [&testClass]() { testClass->DoubleIntVariableSingleWithInitializer(); });
	state += Soup::Test::RunTest(className, "DoubleIntVariableBothWithInitializer", [&testClass]() { testClass->DoubleIntVariableBothWithInitializer(); });
	state += Soup::Test::RunTest(className, "SingleIntLeadingAndTrailingModifierVariable", [&testClass]() { testClass->SingleIntLeadingAndTrailingModifierVariable(); });

	return state;
}