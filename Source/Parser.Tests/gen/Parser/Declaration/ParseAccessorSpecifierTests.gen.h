#pragma once
#include "Parser/Declaration/ParseAccessorSpecifierTests.h"

TestState RunParseAccessorSpecifierTests() 
 {
	auto className = "ParseAccessorSpecifierTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::ParseAccessorSpecifierTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "SimplePublic", [&testClass]() { testClass->SimplePublic(); });
	state += Soup::Test::RunTest(className, "SimplePrivate", [&testClass]() { testClass->SimplePrivate(); });
	state += Soup::Test::RunTest(className, "SimpleProtected", [&testClass]() { testClass->SimpleProtected(); });

	return state;
}