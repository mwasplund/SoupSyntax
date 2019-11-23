#pragma once
#include "Parser/Expression/ParseUnaryExpressionTests.h"

TestState RunParseUnaryExpressionTests() 
 {
	auto className = "ParseUnaryExpressionTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::ParseUnaryExpressionTests>();
	TestState state = { 0, 0 };
	state += SoupTest::RunTest(className, "SingleIdentifierPlus", [&testClass]() { testClass->SingleIdentifierPlus(); });
	state += SoupTest::RunTest(className, "SingleIdentifierMinus", [&testClass]() { testClass->SingleIdentifierMinus(); });
	state += SoupTest::RunTest(className, "SingleIdentifierPreIncrement", [&testClass]() { testClass->SingleIdentifierPreIncrement(); });
	state += SoupTest::RunTest(className, "SingleIdentifierPreDecrement", [&testClass]() { testClass->SingleIdentifierPreDecrement(); });
	state += SoupTest::RunTest(className, "SingleIdentifierPostIncrement", [&testClass]() { testClass->SingleIdentifierPostIncrement(); });
	state += SoupTest::RunTest(className, "SingleIdentifierPostDecrement", [&testClass]() { testClass->SingleIdentifierPostDecrement(); });
	state += SoupTest::RunTest(className, "SingleIdentifierLogicalNot", [&testClass]() { testClass->SingleIdentifierLogicalNot(); });
	state += SoupTest::RunTest(className, "SingleIdentifierIndirection", [&testClass]() { testClass->SingleIdentifierIndirection(); });
	state += SoupTest::RunTest(className, "SingleIdentifierAddressOf", [&testClass]() { testClass->SingleIdentifierAddressOf(); });

	return state;
}