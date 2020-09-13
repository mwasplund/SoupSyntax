#pragma once
#include "AST/InnerTree/Statement/ReturnStatementTests.h"

TestState RunInnerTreeReturnStatementTests() 
 {
	auto className = "InnerTreeReturnStatementTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeReturnStatementTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "InitializeNoExpression", [&testClass]() { testClass->InitializeNoExpression(); });
	state += Soup::Test::RunTest(className, "InitializeWithExpression", [&testClass]() { testClass->InitializeWithExpression(); });
	state += Soup::Test::RunTest(className, "OperatorEqualNoExpression", [&testClass]() { testClass->OperatorEqualNoExpression(); });
	state += Soup::Test::RunTest(className, "OperatorEqualWithExpression", [&testClass]() { testClass->OperatorEqualWithExpression(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualReturnToken", [&testClass]() { testClass->OperatorNotEqualReturnToken(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualNoExpression", [&testClass]() { testClass->OperatorNotEqualNoExpression(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualWithExpression", [&testClass]() { testClass->OperatorNotEqualWithExpression(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualSemicolonToken", [&testClass]() { testClass->OperatorNotEqualSemicolonToken(); });

	return state;
}