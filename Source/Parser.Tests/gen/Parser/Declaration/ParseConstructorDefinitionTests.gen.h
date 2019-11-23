#pragma once
#include "Parser/Declaration/ParseConstructorDefinitionTests.h"

TestState RunParseConstructorDefinitionTests() 
 {
	auto className = "ParseConstructorDefinitionTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::ParseConstructorDefinitionTests>();
	TestState state = { 0, 0 };
	state += SoupTest::RunTest(className, "SimpleRegular", [&testClass]() { testClass->SimpleRegular(); });
	state += SoupTest::RunTest(className, "SimpleDefault", [&testClass]() { testClass->SimpleDefault(); });
	state += SoupTest::RunTest(className, "SimpleDelete", [&testClass]() { testClass->SimpleDelete(); });
	state += SoupTest::RunTest(className, "ComplexParameterAndInitializer", [&testClass]() { testClass->ComplexParameterAndInitializer(); });

	return state;
}