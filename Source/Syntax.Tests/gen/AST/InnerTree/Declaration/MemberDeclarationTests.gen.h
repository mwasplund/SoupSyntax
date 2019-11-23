#pragma once
#include "AST/InnerTree/Declaration/MemberDeclarationTests.h"

TestState RunInnerTreeMemberDeclarationTests() 
 {
	auto className = "InnerTreeMemberDeclarationTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeMemberDeclarationTests>();
	TestState state = { 0, 0 };
	state += SoupTest::RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
	state += SoupTest::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualDeclarationSpecifierSequence", [&testClass]() { testClass->OperatorNotEqualDeclarationSpecifierSequence(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualMemberDeclaratorList", [&testClass]() { testClass->OperatorNotEqualMemberDeclaratorList(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualSemicolonToken", [&testClass]() { testClass->OperatorNotEqualSemicolonToken(); });

	return state;
}