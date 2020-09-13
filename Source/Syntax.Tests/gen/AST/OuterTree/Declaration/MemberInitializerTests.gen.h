#pragma once
#include "AST/OuterTree/Declaration/MemberInitializerTests.h"

TestState RunOuterTreeMemberInitializerTests() 
 {
	auto className = "OuterTreeMemberInitializerTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeMemberInitializerTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
	state += Soup::Test::RunTest(className, "GetChildren", [&testClass]() { testClass->GetChildren(); });
	state += Soup::Test::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualIdentifierToken", [&testClass]() { testClass->OperatorNotEqualIdentifierToken(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualInitializer", [&testClass]() { testClass->OperatorNotEqualInitializer(); });

	return state;
}