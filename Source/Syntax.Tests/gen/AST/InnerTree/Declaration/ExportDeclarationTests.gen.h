#pragma once
#include "AST/InnerTree/Declaration/ExportDeclarationTests.h"

TestState RunInnerTreeExportDeclarationTests() 
 {
	auto className = "InnerTreeExportDeclarationTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeExportDeclarationTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "Initialize", [&testClass]() { testClass->Initialize(); });
	state += Soup::Test::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualExport", [&testClass]() { testClass->OperatorNotEqualExport(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualDeclaration", [&testClass]() { testClass->OperatorNotEqualDeclaration(); });

	return state;
}