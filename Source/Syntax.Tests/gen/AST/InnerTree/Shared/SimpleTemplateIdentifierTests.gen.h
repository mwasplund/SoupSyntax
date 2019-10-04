#pragma once
#include "/AST/InnerTree/Shared/SimpleTemplateIdentifierTests.h"

TestState RunInnerTreeSimpleTemplateIdentifierTests() 
 {
	auto className = "InnerTreeSimpleTemplateIdentifierTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeSimpleTemplateIdentifierTests>();
	TestState state = { 0, 0 };
	state += SoupTest::RunTest(className, "InitializeNoArguments", [&testClass]() { testClass->InitializeNoArguments(); });
	state += SoupTest::RunTest(className, "InitializeWithArguments", [&testClass]() { testClass->InitializeWithArguments(); });
	state += SoupTest::RunTest(className, "OperatorEqualNoArguments", [&testClass]() { testClass->OperatorEqualNoArguments(); });
	state += SoupTest::RunTest(className, "OperatorEqualWithArguments", [&testClass]() { testClass->OperatorEqualWithArguments(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualIdentifier", [&testClass]() { testClass->OperatorNotEqualIdentifier(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualLessThanToken", [&testClass]() { testClass->OperatorNotEqualLessThanToken(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualNoArguments", [&testClass]() { testClass->OperatorNotEqualNoArguments(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualWithArguments", [&testClass]() { testClass->OperatorNotEqualWithArguments(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualGreaterThanToken", [&testClass]() { testClass->OperatorNotEqualGreaterThanToken(); });

	return state;
}