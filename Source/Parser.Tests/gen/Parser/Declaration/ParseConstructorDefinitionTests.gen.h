#pragma once
#include "Parser/Declaration/ParseConstructorDefinitionTests.h"

TestState RunParseConstructorDefinitionTests() 
 {
	auto className = "ParseConstructorDefinitionTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::ParseConstructorDefinitionTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "SimpleRegular", [&testClass]() { testClass->SimpleRegular(); });
	state += Soup::Test::RunTest(className, "SimpleDefault", [&testClass]() { testClass->SimpleDefault(); });
	state += Soup::Test::RunTest(className, "SimpleDelete", [&testClass]() { testClass->SimpleDelete(); });
	state += Soup::Test::RunTest(className, "ComplexParameterAndInitializer", [&testClass]() { testClass->ComplexParameterAndInitializer(); });

	return state;
}