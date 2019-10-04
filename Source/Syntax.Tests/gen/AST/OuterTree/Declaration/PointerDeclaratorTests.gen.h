#pragma once
#include "/AST/OuterTree/Declaration/PointerDeclaratorTests.h"

TestState RunOuterTreePointerDeclaratorTests() 
 {
	o className = "OuterTreePointerDeclaratorTests";
	o testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreePointerDeclaratorTests>();
	tState state = { 0, 0 };
	te += SoupTest::RunTest(className, "Initialize", [&testClass]() { testClass->Initialize(); });
	te += SoupTest::RunTest(className, "GetChildren", [&testClass]() { testClass->GetChildren(); });
	te += SoupTest::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	te += SoupTest::RunTest(className, "OperatorNotEqualPointerOperator", [&testClass]() { testClass->OperatorNotEqualPointerOperator(); });
	te += SoupTest::RunTest(className, "OperatorNotEqualDeclarator", [&testClass]() { testClass->OperatorNotEqualDeclarator(); });

	urn state;
}