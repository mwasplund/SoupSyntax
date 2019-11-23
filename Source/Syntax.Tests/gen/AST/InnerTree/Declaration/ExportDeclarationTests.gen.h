#pragma once
#include "AST/InnerTree/Declaration/ExportDeclarationTests.h"

TestState RunInnerTreeExportDeclarationTests() 
 {
	auto className = "InnerTreeExportDeclarationTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeExportDeclarationTests>();
	TestState state = { 0, 0 };
	state += SoupTest::RunTest(className, "Initialize", [&testClass]() { testClass->Initialize(); });
	state += SoupTest::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualExport", [&testClass]() { testClass->OperatorNotEqualExport(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualDeclaration", [&testClass]() { testClass->OperatorNotEqualDeclaration(); });

	return state;
}