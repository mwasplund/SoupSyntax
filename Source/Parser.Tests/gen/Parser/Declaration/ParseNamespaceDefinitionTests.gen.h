#pragma once
#include "/Parser/Declaration/ParseNamespaceDefinitionTests.h"

TestState RunParseNamespaceDefinitionTests() 
 {
	auto className = "ParseNamespaceDefinitionTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::ParseNamespaceDefinitionTests>();
	TestState state = { 0, 0 };
	state += SoupTest::RunTest(className, "SimpleAnonymous", [&testClass]() { testClass->SimpleAnonymous(); });
	state += SoupTest::RunTest(className, "SimpleNamed", [&testClass]() { testClass->SimpleNamed(); });
	state += SoupTest::RunTest(className, "NestedName", [&testClass]() { testClass->NestedName(); });
	state += SoupTest::RunTest(className, "SimpleNamedNamespaceSingleDeclaration", [&testClass]() { testClass->SimpleNamedNamespaceSingleDeclaration(); });

	return state;
}