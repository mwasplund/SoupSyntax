#pragma once
#include "AST/InnerTree/Statement/DeclarationStatementTests.h"

TestState RunInnerTreeDeclarationStatementTests() 
 {
	auto className = "InnerTreeDeclarationStatementTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeDeclarationStatementTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
	state += Soup::Test::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualDeclaration", [&testClass]() { testClass->OperatorNotEqualDeclaration(); });

	return state;
}