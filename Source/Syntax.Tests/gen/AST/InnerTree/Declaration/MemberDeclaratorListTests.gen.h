#pragma once
#include "AST/InnerTree/Declaration/MemberDeclaratorListTests.h"

TestState RunInnerTreeMemberDeclaratorListTests() 
 {
	auto className = "InnerTreeMemberDeclaratorListTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeMemberDeclaratorListTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
	state += Soup::Test::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualLessItems", [&testClass]() { testClass->OperatorNotEqualLessItems(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualWithItems", [&testClass]() { testClass->OperatorNotEqualWithItems(); });

	return state;
}