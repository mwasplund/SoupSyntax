#pragma once
#include "Parser/Statement/ParseIfStatementTests.h"

TestState RunParseIfStatementTests() 
 {
	auto className = "ParseIfStatementTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::ParseIfStatementTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "IfEmptyStatement", [&testClass]() { testClass->IfEmptyStatement(); });
	state += Soup::Test::RunTest(className, "IfEmptyStatementWithElseClause", [&testClass]() { testClass->IfEmptyStatementWithElseClause(); });
	state += Soup::Test::RunTest(className, "IfStatementReturnWithElseClause", [&testClass]() { testClass->IfStatementReturnWithElseClause(); });

	return state;
}