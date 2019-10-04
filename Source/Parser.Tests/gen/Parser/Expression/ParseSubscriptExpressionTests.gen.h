#pragma once
#include "/Parser/Expression/ParseSubscriptExpressionTests.h"

TestState RunParseSubscriptExpressionTests() 
 {
	auto className = "ParseSubscriptExpressionTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::ParseSubscriptExpressionTests>();
	TestState state = { 0, 0 };
	state += SoupTest::RunTest(className, "SingleSubscriptExpression", [&testClass]() { testClass->SingleSubscriptExpression(); });

	return state;
}