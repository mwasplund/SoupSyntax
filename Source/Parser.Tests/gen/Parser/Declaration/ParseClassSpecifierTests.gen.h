#pragma once
#include "/Parser/Declaration/ParseClassSpecifierTests.h"

TestState RunParseClassSpecifierTests() 
 {
	auto className = "ParseClassSpecifierTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::ParseClassSpecifierTests>();
	TestState state = { 0, 0 };
	state += SoupTest::RunTest(className, "Simple", [&testClass]() { testClass->Simple(); });
	state += SoupTest::RunTest(className, "SingleDeclaration", [&testClass]() { testClass->SingleDeclaration(); });
	state += SoupTest::RunTest(className, "MultipleDeclarations", [&testClass]() { testClass->MultipleDeclarations(); });

	return state;
}