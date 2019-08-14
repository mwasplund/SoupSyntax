#pragma once
#include "/AST/OuterTree/Attribute/AttributeTests.h"

TestState RunOuterTreeAttributeTests() 
 {
    auto className = "OuterTreeAttributeTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeAttributeTests>();
    TestState state = { 0, 0 };
    state += SoupTest::RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
    state += SoupTest::RunTest(className, "InitializeComplex", [&testClass]() { testClass->InitializeComplex(); });
    state += SoupTest::RunTest(className, "GetChildrenSimple", [&testClass]() { testClass->GetChildrenSimple(); });
    state += SoupTest::RunTest(className, "GetChildrenComplex", [&testClass]() { testClass->GetChildrenComplex(); });
    state += SoupTest::RunTest(className, "OperatorEqualSimple", [&testClass]() { testClass->OperatorEqualSimple(); });
    state += SoupTest::RunTest(className, "OperatorEqualComplex", [&testClass]() { testClass->OperatorEqualComplex(); });
    state += SoupTest::RunTest(className, "OperatorNotEqualIdentifier", [&testClass]() { testClass->OperatorNotEqualIdentifier(); });
    state += SoupTest::RunTest(className, "OperatorNotEqualArgumentClause", [&testClass]() { testClass->OperatorNotEqualArgumentClause(); });
    state += SoupTest::RunTest(className, "OperatorNotEqualNoArgumentClause", [&testClass]() { testClass->OperatorNotEqualNoArgumentClause(); });

    return state;
}