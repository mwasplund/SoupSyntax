#pragma once
#include "/AST/InnerTree/Statement/IfStatementTests.h"

TestState RunInnerTreeIfStatementTests() 
 {
    auto className = "InnerTreeIfStatementTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeIfStatementTests>();
    TestState state = { 0, 0 };
    state += SoupTest::RunTest(className, "InitializeNoElseClause", [&testClass]() { testClass->InitializeNoElseClause(); });
    state += SoupTest::RunTest(className, "InitializeWithElseClause", [&testClass]() { testClass->InitializeWithElseClause(); });
    state += SoupTest::RunTest(className, "OperatorEqualNoElseClause", [&testClass]() { testClass->OperatorEqualNoElseClause(); });
    state += SoupTest::RunTest(className, "OperatorEqualWithElseClause", [&testClass]() { testClass->OperatorEqualWithElseClause(); });
    state += SoupTest::RunTest(className, "OperatorNotEqualIfToken", [&testClass]() { testClass->OperatorNotEqualIfToken(); });
    state += SoupTest::RunTest(className, "OperatorNotEqualOpenParenthesisToken", [&testClass]() { testClass->OperatorNotEqualOpenParenthesisToken(); });
    state += SoupTest::RunTest(className, "OperatorNotEqualConditionExpression", [&testClass]() { testClass->OperatorNotEqualConditionExpression(); });
    state += SoupTest::RunTest(className, "OperatorNotEqualCloseParenthesisToken", [&testClass]() { testClass->OperatorNotEqualCloseParenthesisToken(); });
    state += SoupTest::RunTest(className, "OperatorNotEqualStatement", [&testClass]() { testClass->OperatorNotEqualStatement(); });
    state += SoupTest::RunTest(className, "OperatorNotEqualNoElseClause", [&testClass]() { testClass->OperatorNotEqualNoElseClause(); });
    state += SoupTest::RunTest(className, "OperatorNotEqualWithElseClause", [&testClass]() { testClass->OperatorNotEqualWithElseClause(); });

    return state;
}