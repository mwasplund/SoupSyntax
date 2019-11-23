#pragma once
#include "Parser/Expression/ParseInvocationExpressionTests.h"

TestState RunParseInvocationExpressionTests() 
 {
	auto className = "ParseInvocationExpressionTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::ParseInvocationExpressionTests>();
	TestState state = { 0, 0 };
	state += SoupTest::RunTest(className, "SimpleInvocation", [&testClass]() { testClass->SimpleInvocation(); });
	state += SoupTest::RunTest(className, "ComplexInvocation", [&testClass]() { testClass->ComplexInvocation(); });
	state += SoupTest::RunTest(className, "BracedInitializerParameter", [&testClass]() { testClass->BracedInitializerParameter(); });
	state += SoupTest::RunTest(className, "EnumValueParameter", [&testClass]() { testClass->EnumValueParameter(); });
	state += SoupTest::RunTest(className, "QualifiedTemplateSpecification", [&testClass]() { testClass->QualifiedTemplateSpecification(); });

	return state;
}