#pragma once
#include "AST/InnerTree/Declaration/ModuleImportDeclarationTests.h"

TestState RunInnerTreeModuleImportDeclarationTests() 
 {
	auto className = "InnerTreeModuleImportDeclarationTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeModuleImportDeclarationTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "Initialize", [&testClass]() { testClass->Initialize(); });
	state += Soup::Test::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualImport", [&testClass]() { testClass->OperatorNotEqualImport(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualName", [&testClass]() { testClass->OperatorNotEqualName(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualSemicolon", [&testClass]() { testClass->OperatorNotEqualSemicolon(); });

	return state;
}