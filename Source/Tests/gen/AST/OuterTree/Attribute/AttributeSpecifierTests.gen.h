#pragma once
#include "/AST/OuterTree/Attribute/AttributeSpecifierTests.h"

TestState RunOuterTreeAttributeSpecifierTests() 
 {
    auto className = "OuterTreeAttributeSpecifierTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeAttributeSpecifierTests>();
    TestState state = { 0, 0 };
    state += SoupTest::RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
    state += SoupTest::RunTest(className, "InitializeComplex", [&testClass]() { testClass->InitializeComplex(); });
    state += SoupTest::RunTest(className, "GetChildrenSimple", [&testClass]() { testClass->GetChildrenSimple(); });
    state += SoupTest::RunTest(className, "GetChildrenComplex", [&testClass]() { testClass->GetChildrenComplex(); });
    state += SoupTest::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
    state += SoupTest::RunTest(className, "OperatorNotEqualOuterOpenBracketToken", [&testClass]() { testClass->OperatorNotEqualOuterOpenBracketToken(); });
    state += SoupTest::RunTest(className, "OperatorNotEqualInnerOpenBracketToken", [&testClass]() { testClass->OperatorNotEqualInnerOpenBracketToken(); });
    state += SoupTest::RunTest(className, "OperatorNotEqualAttributes", [&testClass]() { testClass->OperatorNotEqualAttributes(); });
    state += SoupTest::RunTest(className, "OperatorNotEqualInnerCloseBracketToken", [&testClass]() { testClass->OperatorNotEqualInnerCloseBracketToken(); });
    state += SoupTest::RunTest(className, "OperatorNotEqualOuterCloseBracketToken", [&testClass]() { testClass->OperatorNotEqualOuterCloseBracketToken(); });

    return state;
}