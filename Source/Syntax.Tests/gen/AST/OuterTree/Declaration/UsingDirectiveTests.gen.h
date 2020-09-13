#pragma once
#include "AST/OuterTree/Declaration/UsingDirectiveTests.h"

TestState RunOuterTreeUsingDirectiveTests() 
 {
	auto className = "OuterTreeUsingDirectiveTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeUsingDirectiveTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "Initialize", [&testClass]() { testClass->Initialize(); });
	state += Soup::Test::RunTest(className, "GetChildren", [&testClass]() { testClass->GetChildren(); });
	state += Soup::Test::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualUsingToken", [&testClass]() { testClass->OperatorNotEqualUsingToken(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualNamespaceToken", [&testClass]() { testClass->OperatorNotEqualNamespaceToken(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualNameIdentifierList", [&testClass]() { testClass->OperatorNotEqualNameIdentifierList(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualSemicolonToken", [&testClass]() { testClass->OperatorNotEqualSemicolonToken(); });

	return state;
}