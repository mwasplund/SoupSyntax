#pragma once
#include "Parser/Expression/ParseLambdaExpressionTests.h"

TestState RunParseLambdaExpressionTests() 
 {
	auto className = "ParseLambdaExpressionTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::ParseLambdaExpressionTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "Simple", [&testClass]() { testClass->Simple(); });
	state += Soup::Test::RunTest(className, "EmptyParameterList", [&testClass]() { testClass->EmptyParameterList(); });
	state += Soup::Test::RunTest(className, "SingleCaptureReference", [&testClass]() { testClass->SingleCaptureReference(); });
	state += Soup::Test::RunTest(className, "SingleParameterAndReturnStatement", [&testClass]() { testClass->SingleParameterAndReturnStatement(); });

	return state;
}