#pragma once
#include "Parser/Declaration/ParseFunctionDefinitionTests.h"

TestState RunParseFunctionDefinitionTests() 
 {
	auto className = "ParseFunctionDefinitionTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::ParseFunctionDefinitionTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "SimpleFunctionRegular", [&testClass]() { testClass->SimpleFunctionRegular(); });
	state += Soup::Test::RunTest(className, "SimpleFunctionDefault", [&testClass]() { testClass->SimpleFunctionDefault(); });
	state += Soup::Test::RunTest(className, "SimpleFunctionDelete", [&testClass]() { testClass->SimpleFunctionDelete(); });
	state += Soup::Test::RunTest(className, "SimpleFunctionParameter", [&testClass]() { testClass->SimpleFunctionParameter(); });
	state += Soup::Test::RunTest(className, "SimpleFunctionAttribute", [&testClass]() { testClass->SimpleFunctionAttribute(); });

	return state;
}