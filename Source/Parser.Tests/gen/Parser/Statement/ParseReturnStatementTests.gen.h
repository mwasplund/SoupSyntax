#pragma once
#include "Parser/Statement/ParseReturnStatementTests.h"

TestState RunParseReturnStatementTests() 
 {
	auto className = "ParseReturnStatementTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::ParseReturnStatementTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "ReturnNoExpression", [&testClass]() { testClass->ReturnNoExpression(); });
	state += Soup::Test::RunTest(className, "ReturnLiteralExpression", [&testClass]() { testClass->ReturnLiteralExpression(); });
	state += Soup::Test::RunTest(className, "ReturnIdentifierExpression", [&testClass]() { testClass->ReturnIdentifierExpression(); });

	return state;
}