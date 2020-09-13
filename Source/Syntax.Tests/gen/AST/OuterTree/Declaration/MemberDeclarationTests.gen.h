#pragma once
#include "AST/OuterTree/Declaration/MemberDeclarationTests.h"

TestState RunOuterTreeMemberDeclarationTests() 
 {
	auto className = "OuterTreeMemberDeclarationTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeMemberDeclarationTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
	state += Soup::Test::RunTest(className, "GetChildren", [&testClass]() { testClass->GetChildren(); });
	state += Soup::Test::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualDeclarationSpecifierSequence", [&testClass]() { testClass->OperatorNotEqualDeclarationSpecifierSequence(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualMemberDeclaratorList", [&testClass]() { testClass->OperatorNotEqualMemberDeclaratorList(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualSemicolonToken", [&testClass]() { testClass->OperatorNotEqualSemicolonToken(); });

	return state;
}