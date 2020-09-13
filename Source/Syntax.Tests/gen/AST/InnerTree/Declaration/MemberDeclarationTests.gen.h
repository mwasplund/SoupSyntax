#pragma once
#include "AST/InnerTree/Declaration/MemberDeclarationTests.h"

TestState RunInnerTreeMemberDeclarationTests() 
 {
	auto className = "InnerTreeMemberDeclarationTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeMemberDeclarationTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
	state += Soup::Test::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualDeclarationSpecifierSequence", [&testClass]() { testClass->OperatorNotEqualDeclarationSpecifierSequence(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualMemberDeclaratorList", [&testClass]() { testClass->OperatorNotEqualMemberDeclaratorList(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualSemicolonToken", [&testClass]() { testClass->OperatorNotEqualSemicolonToken(); });

	return state;
}