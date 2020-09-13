#pragma once
#include "AST/InnerTree/Declaration/ModuleDeclarationTests.h"

TestState RunInnerTreeModuleDeclarationTests() 
 {
	auto className = "InnerTreeModuleDeclarationTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeModuleDeclarationTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "InitializeNoExport", [&testClass]() { testClass->InitializeNoExport(); });
	state += Soup::Test::RunTest(className, "InitializeWithExport", [&testClass]() { testClass->InitializeWithExport(); });
	state += Soup::Test::RunTest(className, "OperatorEqualNoExport", [&testClass]() { testClass->OperatorEqualNoExport(); });
	state += Soup::Test::RunTest(className, "OperatorEqualWithExport", [&testClass]() { testClass->OperatorEqualWithExport(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualNoExport", [&testClass]() { testClass->OperatorNotEqualNoExport(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualWithExport", [&testClass]() { testClass->OperatorNotEqualWithExport(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualModule", [&testClass]() { testClass->OperatorNotEqualModule(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualName", [&testClass]() { testClass->OperatorNotEqualName(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualSemicolon", [&testClass]() { testClass->OperatorNotEqualSemicolon(); });

	return state;
}