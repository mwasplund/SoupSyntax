#pragma once
#include "AST/OuterTree/Declaration/ExportDeclarationTests.h"

TestState RunOuterTreeExportDeclarationTests() 
 {
	auto className = "OuterTreeExportDeclarationTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeExportDeclarationTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "Initialize", [&testClass]() { testClass->Initialize(); });
	state += Soup::Test::RunTest(className, "GetChildren", [&testClass]() { testClass->GetChildren(); });
	state += Soup::Test::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualExport", [&testClass]() { testClass->OperatorNotEqualExport(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualDeclaration", [&testClass]() { testClass->OperatorNotEqualDeclaration(); });

	return state;
}