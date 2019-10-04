#pragma once
#include "/Parser/Statement/ParseCompoundStatementTests.h"

TestState RunParseCompoundStatementTests() 
 {
	auto className = "ParseCompoundStatementTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::ParseCompoundStatementTests>();
	TestState state = { 0, 0 };
	state += SoupTest::RunTest(className, "EmptyCompoundStatement", [&testClass]() { testClass->EmptyCompoundStatement(); });
	state += SoupTest::RunTest(className, "CompoundStatementWithSingleStatment", [&testClass]() { testClass->CompoundStatementWithSingleStatment(); });

	return state;
}