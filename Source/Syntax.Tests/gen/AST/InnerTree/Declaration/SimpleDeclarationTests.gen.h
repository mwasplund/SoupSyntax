#pragma once
#include "AST/InnerTree/Declaration/SimpleDeclarationTests.h"

TestState RunInnerTreeSimpleDeclarationTests() 
 {
	auto className = "InnerTreeSimpleDeclarationTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeSimpleDeclarationTests>();
	TestState state = { 0, 0 };
	state += SoupTest::RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
	state += SoupTest::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualDeclarationSpecifierSequence", [&testClass]() { testClass->OperatorNotEqualDeclarationSpecifierSequence(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualInitializerDeclaratorList", [&testClass]() { testClass->OperatorNotEqualInitializerDeclaratorList(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualSemicolonToken", [&testClass]() { testClass->OperatorNotEqualSemicolonToken(); });

	return state;
}