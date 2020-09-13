#pragma once
#include "AST/InnerTree/Shared/SimpleTemplateIdentifierTests.h"

TestState RunInnerTreeSimpleTemplateIdentifierTests() 
 {
	auto className = "InnerTreeSimpleTemplateIdentifierTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeSimpleTemplateIdentifierTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "InitializeNoArguments", [&testClass]() { testClass->InitializeNoArguments(); });
	state += Soup::Test::RunTest(className, "InitializeWithArguments", [&testClass]() { testClass->InitializeWithArguments(); });
	state += Soup::Test::RunTest(className, "OperatorEqualNoArguments", [&testClass]() { testClass->OperatorEqualNoArguments(); });
	state += Soup::Test::RunTest(className, "OperatorEqualWithArguments", [&testClass]() { testClass->OperatorEqualWithArguments(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualIdentifier", [&testClass]() { testClass->OperatorNotEqualIdentifier(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualLessThanToken", [&testClass]() { testClass->OperatorNotEqualLessThanToken(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualNoArguments", [&testClass]() { testClass->OperatorNotEqualNoArguments(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualWithArguments", [&testClass]() { testClass->OperatorNotEqualWithArguments(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualGreaterThanToken", [&testClass]() { testClass->OperatorNotEqualGreaterThanToken(); });

	return state;
}