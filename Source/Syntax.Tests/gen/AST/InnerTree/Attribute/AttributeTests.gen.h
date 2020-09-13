#pragma once
#include "AST/InnerTree/Attribute/AttributeTests.h"

TestState RunInnerTreeAttributeTests() 
 {
	auto className = "InnerTreeAttributeTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeAttributeTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
	state += Soup::Test::RunTest(className, "InitializeComplex", [&testClass]() { testClass->InitializeComplex(); });
	state += Soup::Test::RunTest(className, "OperatorEqualSimple", [&testClass]() { testClass->OperatorEqualSimple(); });
	state += Soup::Test::RunTest(className, "OperatorEqualComplex", [&testClass]() { testClass->OperatorEqualComplex(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualIdentifier", [&testClass]() { testClass->OperatorNotEqualIdentifier(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualArgumentClause", [&testClass]() { testClass->OperatorNotEqualArgumentClause(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualNoArgumentClause", [&testClass]() { testClass->OperatorNotEqualNoArgumentClause(); });

	return state;
}