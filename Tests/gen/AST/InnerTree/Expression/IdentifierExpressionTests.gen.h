#pragma once
#include "/AST/InnerTree/Expression/IdentifierExpressionTests.h"

TestState RunInnerTreeIdentifierExpressionTests() 
 {
    auto className = "InnerTreeIdentifierExpressionTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeIdentifierExpressionTests>();
    TestState state = { 0, 0 };
    state += SoupTest::RunTest(className, "InitializeUnqualified", [&testClass]() { testClass->InitializeUnqualified(); });
    state += SoupTest::RunTest(className, "InitializeGlobalQualified", [&testClass]() { testClass->InitializeGlobalQualified(); });
    state += SoupTest::RunTest(className, "InitializeSingleQualifiedIdentifier", [&testClass]() { testClass->InitializeSingleQualifiedIdentifier(); });
    state += SoupTest::RunTest(className, "OperatorEqualUnqualified", [&testClass]() { testClass->OperatorEqualUnqualified(); });
    state += SoupTest::RunTest(className, "OperatorEqualQualified", [&testClass]() { testClass->OperatorEqualQualified(); });
    state += SoupTest::RunTest(className, "OperatorNotEqualNoQualifier", [&testClass]() { testClass->OperatorNotEqualNoQualifier(); });
    state += SoupTest::RunTest(className, "OperatorNotEqualQualifier", [&testClass]() { testClass->OperatorNotEqualQualifier(); });
    state += SoupTest::RunTest(className, "OperatorNotEqualUnqualifiedIdentifier", [&testClass]() { testClass->OperatorNotEqualUnqualifiedIdentifier(); });

    return state;
}