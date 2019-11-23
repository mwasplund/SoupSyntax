#pragma once
#include "Parser/Attribute/ParseAttributeSpecifierTests.h"

TestState RunParseAttributeSpecifierTests() 
 {
	auto className = "ParseAttributeSpecifierTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::ParseAttributeSpecifierTests>();
	TestState state = { 0, 0 };
	state += SoupTest::RunTest(className, "Empty", [&testClass]() { testClass->Empty(); });
	state += SoupTest::RunTest(className, "EmptySpacing", [&testClass]() { testClass->EmptySpacing(); });
	state += SoupTest::RunTest(className, "Simple", [&testClass]() { testClass->Simple(); });
	state += SoupTest::RunTest(className, "SingleEmptyArgumentClause", [&testClass]() { testClass->SingleEmptyArgumentClause(); });
	state += SoupTest::RunTest(className, "SingleArgumentClause", [&testClass]() { testClass->SingleArgumentClause(); });

	return state;
}