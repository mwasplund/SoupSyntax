#pragma once
#include "AST/InnerTree/Declaration/MemberInitializerTests.h"

TestState RunInnerTreeMemberInitializerTests() 
 {
	auto className = "InnerTreeMemberInitializerTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeMemberInitializerTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
	state += Soup::Test::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualIdentifierToken", [&testClass]() { testClass->OperatorNotEqualIdentifierToken(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualInitializer", [&testClass]() { testClass->OperatorNotEqualInitializer(); });

	return state;
}