#pragma once
#include "Parser/Expression/ParseIdentifierExpressionTests.h"

TestState RunParseIdentifierExpressionTests() 
 {
	auto className = "ParseIdentifierExpressionTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::ParseIdentifierExpressionTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "SingleSimpleIdentifier", [&testClass]() { testClass->SingleSimpleIdentifier(); });
	state += Soup::Test::RunTest(className, "SingleQualifiedIdentifier", [&testClass]() { testClass->SingleQualifiedIdentifier(); });
	state += Soup::Test::RunTest(className, "DoubleQualifiedIdentifier", [&testClass]() { testClass->DoubleQualifiedIdentifier(); });
	state += Soup::Test::RunTest(className, "SingleTemplateIdentifier", [&testClass]() { testClass->SingleTemplateIdentifier(); });
	state += Soup::Test::RunTest(className, "SingleDestructorIdentifier", [&testClass]() { testClass->SingleDestructorIdentifier(); });

	return state;
}