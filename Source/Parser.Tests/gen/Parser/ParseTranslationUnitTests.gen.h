#pragma once
#include "Parser/ParseTranslationUnitTests.h"

TestState RunParseTranslationUnitTests() 
 {
	auto className = "ParseTranslationUnitTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::ParseTranslationUnitTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "EmptyFile", [&testClass]() { testClass->EmptyFile(); });
	state += Soup::Test::RunTest(className, "OnlyTrivia", [&testClass]() { testClass->OnlyTrivia(); });
	state += Soup::Test::RunTest(className, "OnlyComments", [&testClass]() { testClass->OnlyComments(); });
	state += Soup::Test::RunTest(className, "SingleEmptyDeclaration", [&testClass]() { testClass->SingleEmptyDeclaration(); });
	state += Soup::Test::RunTest(className, "MultipleDeclarations", [&testClass]() { testClass->MultipleDeclarations(); });

	return state;
}