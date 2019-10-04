#pragma once
#include "/Parser/Statement/ParseExpressionStatementTests.h"

TestState RunParseExpressionStatementTests() 
 {
	auto className = "ParseExpressionStatementTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::ParseExpressionStatementTests>();
	TestState state = { 0, 0 };
	state += SoupTest::RunTest(className, "SimpleIdentifier", [&testClass]() { testClass->SimpleIdentifier(); });

	return state;
}