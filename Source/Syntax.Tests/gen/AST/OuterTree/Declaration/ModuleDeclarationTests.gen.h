#pragma once
#include "AST/OuterTree/Declaration/ModuleDeclarationTests.h"

TestState RunOuterTreeModuleDeclarationTests() 
 {
	auto className = "OuterTreeModuleDeclarationTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeModuleDeclarationTests>();
	TestState state = { 0, 0 };
	state += SoupTest::RunTest(className, "InitializeNoExport", [&testClass]() { testClass->InitializeNoExport(); });
	state += SoupTest::RunTest(className, "InitializeWithExport", [&testClass]() { testClass->InitializeWithExport(); });
	state += SoupTest::RunTest(className, "GetChildrenNoExport", [&testClass]() { testClass->GetChildrenNoExport(); });
	state += SoupTest::RunTest(className, "GetChildrenWithExport", [&testClass]() { testClass->GetChildrenWithExport(); });
	state += SoupTest::RunTest(className, "OperatorEqualNoExport", [&testClass]() { testClass->OperatorEqualNoExport(); });
	state += SoupTest::RunTest(className, "OperatorEqualWithExport", [&testClass]() { testClass->OperatorEqualWithExport(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualNoExport", [&testClass]() { testClass->OperatorNotEqualNoExport(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualWithExport", [&testClass]() { testClass->OperatorNotEqualWithExport(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualModule", [&testClass]() { testClass->OperatorNotEqualModule(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualName", [&testClass]() { testClass->OperatorNotEqualName(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualSemicolon", [&testClass]() { testClass->OperatorNotEqualSemicolon(); });

	return state;
}