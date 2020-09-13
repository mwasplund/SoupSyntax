#pragma once
#include "AST/OuterTree/Declaration/NamespaceDefinitionTests.h"

TestState RunOuterTreeNamespaceDefinitionTests() 
 {
	auto className = "OuterTreeNamespaceDefinitionTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeNamespaceDefinitionTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "InitializeNoIdentifier", [&testClass]() { testClass->InitializeNoIdentifier(); });
	state += Soup::Test::RunTest(className, "InitializeWithIdentifier", [&testClass]() { testClass->InitializeWithIdentifier(); });
	state += Soup::Test::RunTest(className, "GetChildrenNoIdentifier", [&testClass]() { testClass->GetChildrenNoIdentifier(); });
	state += Soup::Test::RunTest(className, "GetChildrenWithIdentifier", [&testClass]() { testClass->GetChildrenWithIdentifier(); });
	state += Soup::Test::RunTest(className, "OperatorEqualNoIdentifier", [&testClass]() { testClass->OperatorEqualNoIdentifier(); });
	state += Soup::Test::RunTest(className, "OperatorEqualWithIdentifier", [&testClass]() { testClass->OperatorEqualWithIdentifier(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualNamespaceToken", [&testClass]() { testClass->OperatorNotEqualNamespaceToken(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualNoIdentifier", [&testClass]() { testClass->OperatorNotEqualNoIdentifier(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualWithIdentifier", [&testClass]() { testClass->OperatorNotEqualWithIdentifier(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualOpenBraceToken", [&testClass]() { testClass->OperatorNotEqualOpenBraceToken(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualBody", [&testClass]() { testClass->OperatorNotEqualBody(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualCloseBraceToken", [&testClass]() { testClass->OperatorNotEqualCloseBraceToken(); });

	return state;
}