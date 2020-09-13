#pragma once
#include "AST/InnerTree/Declaration/PrimitiveDataTypeSpecifierTests.h"

TestState RunInnerTreePrimitiveDataTypeSpecifierTests() 
 {
	auto className = "InnerTreePrimitiveDataTypeSpecifierTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreePrimitiveDataTypeSpecifierTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
	state += Soup::Test::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualPrimitiveType", [&testClass]() { testClass->OperatorNotEqualPrimitiveType(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualToken", [&testClass]() { testClass->OperatorNotEqualToken(); });

	return state;
}