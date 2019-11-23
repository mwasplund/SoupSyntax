#pragma once
#include "Parser/Declaration/ParseAccessorSpecifierTests.h"

TestState RunParseAccessorSpecifierTests() 
 {
	auto className = "ParseAccessorSpecifierTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::ParseAccessorSpecifierTests>();
	TestState state = { 0, 0 };
	state += SoupTest::RunTest(className, "SimplePublic", [&testClass]() { testClass->SimplePublic(); });
	state += SoupTest::RunTest(className, "SimplePrivate", [&testClass]() { testClass->SimplePrivate(); });
	state += SoupTest::RunTest(className, "SimpleProtected", [&testClass]() { testClass->SimpleProtected(); });

	return state;
}