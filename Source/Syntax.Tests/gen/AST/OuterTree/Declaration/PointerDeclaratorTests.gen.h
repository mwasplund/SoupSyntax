#pragma once
#include "/AST/OuterTree/Declaration/PointerDeclaratorTests.h"

TestState RunOuterTreePointerDeclaratorTests() 
 {
	auto className = "OuterTreePointerDeclaratorTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreePointerDeclaratorTests>();
	TestState state = { 0, 0 };
	state += SoupTest::RunTest(className, "Initialize", [&testClass]() { testClass->Initialize(); });
	state += SoupTest::RunTest(className, "GetChildren", [&testClass]() { testClass->GetChildren(); });
	state += SoupTest::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualPointerOperator", [&testClass]() { testClass->OperatorNotEqualPointerOperator(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualDeclarator", [&testClass]() { testClass->OperatorNotEqualDeclarator(); });

	return state;
}