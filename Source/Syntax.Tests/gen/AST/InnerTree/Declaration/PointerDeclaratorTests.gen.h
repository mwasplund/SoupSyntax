#pragma once
#include "AST/InnerTree/Declaration/PointerDeclaratorTests.h"

TestState RunInnerTreePointerDeclaratorTests() 
 {
	auto className = "InnerTreePointerDeclaratorTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreePointerDeclaratorTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "Initialize", [&testClass]() { testClass->Initialize(); });
	state += Soup::Test::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualPointerOperator", [&testClass]() { testClass->OperatorNotEqualPointerOperator(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualDeclarator", [&testClass]() { testClass->OperatorNotEqualDeclarator(); });

	return state;
}