#pragma once
#include "AST/OuterTree/Declaration/IdentifierTypeTests.h"

TestState RunOuterTreeIdentifierTypeTests() 
 {
	auto className = "OuterTreeIdentifierTypeTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeIdentifierTypeTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "InitializeUnqualified", [&testClass]() { testClass->InitializeUnqualified(); });
	state += Soup::Test::RunTest(className, "InitializeGlobalQualified", [&testClass]() { testClass->InitializeGlobalQualified(); });
	state += Soup::Test::RunTest(className, "InitializeSingleQualifiedIdentifier", [&testClass]() { testClass->InitializeSingleQualifiedIdentifier(); });
	state += Soup::Test::RunTest(className, "GetChildrenUnqualified", [&testClass]() { testClass->GetChildrenUnqualified(); });
	state += Soup::Test::RunTest(className, "GetChildrenGlobalQualified", [&testClass]() { testClass->GetChildrenGlobalQualified(); });
	state += Soup::Test::RunTest(className, "GetChildrenSingleQualifiedIdentifier", [&testClass]() { testClass->GetChildrenSingleQualifiedIdentifier(); });
	state += Soup::Test::RunTest(className, "OperatorEqualUnqualified", [&testClass]() { testClass->OperatorEqualUnqualified(); });
	state += Soup::Test::RunTest(className, "OperatorEqualQualified", [&testClass]() { testClass->OperatorEqualQualified(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualNoQualifier", [&testClass]() { testClass->OperatorNotEqualNoQualifier(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualQualifier", [&testClass]() { testClass->OperatorNotEqualQualifier(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualUnqualifiedIdentifier", [&testClass]() { testClass->OperatorNotEqualUnqualifiedIdentifier(); });

	return state;
}