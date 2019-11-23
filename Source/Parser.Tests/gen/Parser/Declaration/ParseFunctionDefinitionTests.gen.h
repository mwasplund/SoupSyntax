#pragma once
#include "Parser/Declaration/ParseFunctionDefinitionTests.h"

TestState RunParseFunctionDefinitionTests() 
 {
	auto className = "ParseFunctionDefinitionTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::ParseFunctionDefinitionTests>();
	TestState state = { 0, 0 };
	state += SoupTest::RunTest(className, "SimpleFunctionRegular", [&testClass]() { testClass->SimpleFunctionRegular(); });
	state += SoupTest::RunTest(className, "SimpleFunctionDefault", [&testClass]() { testClass->SimpleFunctionDefault(); });
	state += SoupTest::RunTest(className, "SimpleFunctionDelete", [&testClass]() { testClass->SimpleFunctionDelete(); });
	state += SoupTest::RunTest(className, "SimpleFunctionParameter", [&testClass]() { testClass->SimpleFunctionParameter(); });
	state += SoupTest::RunTest(className, "SimpleFunctionAttribute", [&testClass]() { testClass->SimpleFunctionAttribute(); });

	return state;
}