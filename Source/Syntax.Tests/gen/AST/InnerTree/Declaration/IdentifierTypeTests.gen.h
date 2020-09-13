#pragma once
#include "AST/InnerTree/Declaration/IdentifierTypeTests.h"

TestState RunInnerTreeIdentifierTypeTests() 
 {
	auto className = "InnerTreeIdentifierTypeTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeIdentifierTypeTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "InitializeUnqualified", [&testClass]() { testClass->InitializeUnqualified(); });
	state += Soup::Test::RunTest(className, "InitializeGlobalQualified", [&testClass]() { testClass->InitializeGlobalQualified(); });
	state += Soup::Test::RunTest(className, "InitializeSingleQualifiedIdentifier", [&testClass]() { testClass->InitializeSingleQualifiedIdentifier(); });
	state += Soup::Test::RunTest(className, "OperatorEqualUnqualified", [&testClass]() { testClass->OperatorEqualUnqualified(); });
	state += Soup::Test::RunTest(className, "OperatorEqualQualified", [&testClass]() { testClass->OperatorEqualQualified(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualNoQualifier", [&testClass]() { testClass->OperatorNotEqualNoQualifier(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualQualifier", [&testClass]() { testClass->OperatorNotEqualQualifier(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualUnqualifiedIdentifier", [&testClass]() { testClass->OperatorNotEqualUnqualifiedIdentifier(); });

	return state;
}