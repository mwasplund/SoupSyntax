#pragma once
#include "AST/InnerTree/Declaration/SimpleDeclarationTests.h"

TestState RunInnerTreeSimpleDeclarationTests() 
 {
	auto className = "InnerTreeSimpleDeclarationTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeSimpleDeclarationTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
	state += Soup::Test::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualDeclarationSpecifierSequence", [&testClass]() { testClass->OperatorNotEqualDeclarationSpecifierSequence(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualInitializerDeclaratorList", [&testClass]() { testClass->OperatorNotEqualInitializerDeclaratorList(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualSemicolonToken", [&testClass]() { testClass->OperatorNotEqualSemicolonToken(); });

	return state;
}