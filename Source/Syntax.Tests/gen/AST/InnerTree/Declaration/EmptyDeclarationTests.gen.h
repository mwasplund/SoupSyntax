#pragma once
#include "AST/InnerTree/Declaration/EmptyDeclarationTests.h"

TestState RunInnerTreeEmptyDeclarationTests() 
 {
	auto className = "InnerTreeEmptyDeclarationTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeEmptyDeclarationTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
	state += Soup::Test::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualSemicolonToken", [&testClass]() { testClass->OperatorNotEqualSemicolonToken(); });

	return state;
}