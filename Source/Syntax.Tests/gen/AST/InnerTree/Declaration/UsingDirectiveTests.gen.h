#pragma once
#include "AST/InnerTree/Declaration/UsingDirectiveTests.h"

TestState RunInnerTreeUsingDirectiveTests() 
 {
	auto className = "InnerTreeUsingDirectiveTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeUsingDirectiveTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "Initialize", [&testClass]() { testClass->Initialize(); });
	state += Soup::Test::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualUsingToken", [&testClass]() { testClass->OperatorNotEqualUsingToken(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualNamespaceToken", [&testClass]() { testClass->OperatorNotEqualNamespaceToken(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualNameIdentifierList", [&testClass]() { testClass->OperatorNotEqualNameIdentifierList(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualSemicolonToken", [&testClass]() { testClass->OperatorNotEqualSemicolonToken(); });

	return state;
}