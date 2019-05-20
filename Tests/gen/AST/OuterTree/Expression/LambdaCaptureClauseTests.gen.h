#pragma once
#include "/AST/OuterTree/Expression/LambdaCaptureClauseTests.h"

TestState RunOuterTreeLambdaCaptureClauseTests() 
 {
    auto className = "OuterTreeLambdaCaptureClauseTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeLambdaCaptureClauseTests>();
    TestState state = { 0, 0 };
    state += SoupTest::RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
    state += SoupTest::RunTest(className, "InitializeComplex", [&testClass]() { testClass->InitializeComplex(); });
    state += SoupTest::RunTest(className, "GetChildrenSimple", [&testClass]() { testClass->GetChildrenSimple(); });
    state += SoupTest::RunTest(className, "GetChildrenComplex", [&testClass]() { testClass->GetChildrenComplex(); });
    state += SoupTest::RunTest(className, "OperatorEqualSimple", [&testClass]() { testClass->OperatorEqualSimple(); });
    state += SoupTest::RunTest(className, "OperatorEqualComplex", [&testClass]() { testClass->OperatorEqualComplex(); });
    state += SoupTest::RunTest(className, "OperatorNotEqualNoAmpersandToken", [&testClass]() { testClass->OperatorNotEqualNoAmpersandToken(); });
    state += SoupTest::RunTest(className, "OperatorNotEqualAmpersandToken", [&testClass]() { testClass->OperatorNotEqualAmpersandToken(); });
    state += SoupTest::RunTest(className, "OperatorNotEqualIdentifierToken", [&testClass]() { testClass->OperatorNotEqualIdentifierToken(); });

    return state;
}