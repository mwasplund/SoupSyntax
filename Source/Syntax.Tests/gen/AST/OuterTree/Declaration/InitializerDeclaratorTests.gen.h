#pragma once
#include "AST/OuterTree/Declaration/InitializerDeclaratorTests.h"

TestState RunOuterTreeInitializerDeclaratorTests() 
 {
	auto className = "OuterTreeInitializerDeclaratorTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeInitializerDeclaratorTests>();
	TestState state = { 0, 0 };
	state += SoupTest::RunTest(className, "InitializeSimpleNoInitializer", [&testClass]() { testClass->InitializeSimpleNoInitializer(); });
	state += SoupTest::RunTest(className, "InitializeSimpleWithInitializer", [&testClass]() { testClass->InitializeSimpleWithInitializer(); });
	state += SoupTest::RunTest(className, "GetChildrenNoInitializer", [&testClass]() { testClass->GetChildrenNoInitializer(); });
	state += SoupTest::RunTest(className, "GetChildrenWithInitializer", [&testClass]() { testClass->GetChildrenWithInitializer(); });
	state += SoupTest::RunTest(className, "OperatorEqualNoInitializer", [&testClass]() { testClass->OperatorEqualNoInitializer(); });
	state += SoupTest::RunTest(className, "OperatorEqualWithInitializer", [&testClass]() { testClass->OperatorEqualWithInitializer(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualDeclarator", [&testClass]() { testClass->OperatorNotEqualDeclarator(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualNoInitializer", [&testClass]() { testClass->OperatorNotEqualNoInitializer(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualWithInitializer", [&testClass]() { testClass->OperatorNotEqualWithInitializer(); });

	return state;
}