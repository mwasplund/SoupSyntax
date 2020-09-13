#pragma once
#include "AST/OuterTree/Statement/IfStatementTests.h"

TestState RunOuterTreeIfStatementTests() 
 {
	auto className = "OuterTreeIfStatementTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeIfStatementTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "InitializeNoElseClause", [&testClass]() { testClass->InitializeNoElseClause(); });
	state += Soup::Test::RunTest(className, "InitializeWithElseClause", [&testClass]() { testClass->InitializeWithElseClause(); });
	state += Soup::Test::RunTest(className, "GetChildrenNoElseClause", [&testClass]() { testClass->GetChildrenNoElseClause(); });
	state += Soup::Test::RunTest(className, "GetChildrenWithElseClause", [&testClass]() { testClass->GetChildrenWithElseClause(); });
	state += Soup::Test::RunTest(className, "OperatorEqualNoElseClause", [&testClass]() { testClass->OperatorEqualNoElseClause(); });
	state += Soup::Test::RunTest(className, "OperatorEqualWithElseClause", [&testClass]() { testClass->OperatorEqualWithElseClause(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualIfToken", [&testClass]() { testClass->OperatorNotEqualIfToken(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualOpenParenthesisToken", [&testClass]() { testClass->OperatorNotEqualOpenParenthesisToken(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualConditionExpression", [&testClass]() { testClass->OperatorNotEqualConditionExpression(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualCloseParenthesisToken", [&testClass]() { testClass->OperatorNotEqualCloseParenthesisToken(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualStatement", [&testClass]() { testClass->OperatorNotEqualStatement(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualNoElseClause", [&testClass]() { testClass->OperatorNotEqualNoElseClause(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualWithElseClause", [&testClass]() { testClass->OperatorNotEqualWithElseClause(); });

	return state;
}