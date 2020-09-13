#pragma once
#include "Parser/Expression/ParseUnaryExpressionTests.h"

TestState RunParseUnaryExpressionTests() 
 {
	auto className = "ParseUnaryExpressionTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::ParseUnaryExpressionTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "SingleIdentifierPlus", [&testClass]() { testClass->SingleIdentifierPlus(); });
	state += Soup::Test::RunTest(className, "SingleIdentifierMinus", [&testClass]() { testClass->SingleIdentifierMinus(); });
	state += Soup::Test::RunTest(className, "SingleIdentifierPreIncrement", [&testClass]() { testClass->SingleIdentifierPreIncrement(); });
	state += Soup::Test::RunTest(className, "SingleIdentifierPreDecrement", [&testClass]() { testClass->SingleIdentifierPreDecrement(); });
	state += Soup::Test::RunTest(className, "SingleIdentifierPostIncrement", [&testClass]() { testClass->SingleIdentifierPostIncrement(); });
	state += Soup::Test::RunTest(className, "SingleIdentifierPostDecrement", [&testClass]() { testClass->SingleIdentifierPostDecrement(); });
	state += Soup::Test::RunTest(className, "SingleIdentifierLogicalNot", [&testClass]() { testClass->SingleIdentifierLogicalNot(); });
	state += Soup::Test::RunTest(className, "SingleIdentifierIndirection", [&testClass]() { testClass->SingleIdentifierIndirection(); });
	state += Soup::Test::RunTest(className, "SingleIdentifierAddressOf", [&testClass]() { testClass->SingleIdentifierAddressOf(); });

	return state;
}