#pragma once
#include "Parser/Expression/ParseInvocationExpressionTests.h"

TestState RunParseInvocationExpressionTests() 
 {
	auto className = "ParseInvocationExpressionTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::ParseInvocationExpressionTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "SimpleInvocation", [&testClass]() { testClass->SimpleInvocation(); });
	state += Soup::Test::RunTest(className, "ComplexInvocation", [&testClass]() { testClass->ComplexInvocation(); });
	state += Soup::Test::RunTest(className, "BracedInitializerParameter", [&testClass]() { testClass->BracedInitializerParameter(); });
	state += Soup::Test::RunTest(className, "EnumValueParameter", [&testClass]() { testClass->EnumValueParameter(); });
	state += Soup::Test::RunTest(className, "QualifiedTemplateSpecification", [&testClass]() { testClass->QualifiedTemplateSpecification(); });

	return state;
}