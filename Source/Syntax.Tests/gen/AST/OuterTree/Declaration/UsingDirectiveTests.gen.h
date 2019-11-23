#pragma once
#include "AST/OuterTree/Declaration/UsingDirectiveTests.h"

TestState RunOuterTreeUsingDirectiveTests() 
 {
	auto className = "OuterTreeUsingDirectiveTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeUsingDirectiveTests>();
	TestState state = { 0, 0 };
	state += SoupTest::RunTest(className, "Initialize", [&testClass]() { testClass->Initialize(); });
	state += SoupTest::RunTest(className, "GetChildren", [&testClass]() { testClass->GetChildren(); });
	state += SoupTest::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualUsingToken", [&testClass]() { testClass->OperatorNotEqualUsingToken(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualNamespaceToken", [&testClass]() { testClass->OperatorNotEqualNamespaceToken(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualNameIdentifierList", [&testClass]() { testClass->OperatorNotEqualNameIdentifierList(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualSemicolonToken", [&testClass]() { testClass->OperatorNotEqualSemicolonToken(); });

	return state;
}