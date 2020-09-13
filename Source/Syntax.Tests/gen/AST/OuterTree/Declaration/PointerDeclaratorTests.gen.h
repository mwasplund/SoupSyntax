#pragma once
#include "AST/OuterTree/Declaration/PointerDeclaratorTests.h"

TestState RunOuterTreePointerDeclaratorTests() 
 {
	auto className = "OuterTreePointerDeclaratorTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreePointerDeclaratorTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "Initialize", [&testClass]() { testClass->Initialize(); });
	state += Soup::Test::RunTest(className, "GetChildren", [&testClass]() { testClass->GetChildren(); });
	state += Soup::Test::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualPointerOperator", [&testClass]() { testClass->OperatorNotEqualPointerOperator(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualDeclarator", [&testClass]() { testClass->OperatorNotEqualDeclarator(); });

	return state;
}