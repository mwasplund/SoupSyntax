#pragma once
#include "Parser/Attribute/ParseAttributeSpecifierTests.h"

TestState RunParseAttributeSpecifierTests() 
 {
	auto className = "ParseAttributeSpecifierTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::ParseAttributeSpecifierTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "Empty", [&testClass]() { testClass->Empty(); });
	state += Soup::Test::RunTest(className, "EmptySpacing", [&testClass]() { testClass->EmptySpacing(); });
	state += Soup::Test::RunTest(className, "Simple", [&testClass]() { testClass->Simple(); });
	state += Soup::Test::RunTest(className, "SingleEmptyArgumentClause", [&testClass]() { testClass->SingleEmptyArgumentClause(); });
	state += Soup::Test::RunTest(className, "SingleArgumentClause", [&testClass]() { testClass->SingleArgumentClause(); });

	return state;
}