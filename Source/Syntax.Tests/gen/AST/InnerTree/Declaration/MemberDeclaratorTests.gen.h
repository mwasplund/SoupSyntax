#pragma once
#include "AST/InnerTree/Declaration/MemberDeclaratorTests.h"

TestState RunInnerTreeMemberDeclaratorTests() 
 {
	auto className = "InnerTreeMemberDeclaratorTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeMemberDeclaratorTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "InitializeSimpleNoInitializer", [&testClass]() { testClass->InitializeSimpleNoInitializer(); });
	state += Soup::Test::RunTest(className, "InitializeSimpleWithInitializer", [&testClass]() { testClass->InitializeSimpleWithInitializer(); });
	state += Soup::Test::RunTest(className, "OperatorEqualNoInitializer", [&testClass]() { testClass->OperatorEqualNoInitializer(); });
	state += Soup::Test::RunTest(className, "OperatorEqualWithInitializer", [&testClass]() { testClass->OperatorEqualWithInitializer(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualDeclarator", [&testClass]() { testClass->OperatorNotEqualDeclarator(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualNoInitializer", [&testClass]() { testClass->OperatorNotEqualNoInitializer(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualWithInitializer", [&testClass]() { testClass->OperatorNotEqualWithInitializer(); });

	return state;
}