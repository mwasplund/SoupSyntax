#pragma once
#include "AST/InnerTree/Attribute/AttributeSpecifierTests.h"
#include "RunTest.h"

TestState RunInnerTreeAttributeSpecifierTests()
{
    std::string className = "InnerTree::AttributeSpecifierTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::AttributeSpecifierTests>();
    TestState state = { 0, 0 };

    state += RunTest(
        className,
        "InitializeSimple",
        [&testClass]() { testClass->InitializeSimple(); });
    state += RunTest(
        className,
        "InitializeComplex",
        [&testClass]() { testClass->InitializeComplex(); });
    state += RunTest(
        className,
        "OperatorEqual",
        [&testClass]() { testClass->OperatorEqual(); });
    state += RunTest(
        className,
        "OperatorNotEqualOuterOpenBracketToken",
        [&testClass]() { testClass->OperatorNotEqualOuterOpenBracketToken(); });
    state += RunTest(
        className,
        "OperatorNotEqualInnerOpenBracketToken",
        [&testClass]() { testClass->OperatorNotEqualInnerOpenBracketToken(); });
    state += RunTest(
        className,
        "OperatorNotEqualAttributes",
        [&testClass]() { testClass->OperatorNotEqualAttributes(); });
    state += RunTest(
        className,
        "OperatorNotEqualInnerCloseBracketToken",
        [&testClass]() { testClass->OperatorNotEqualInnerCloseBracketToken(); });
    state += RunTest(
        className,
        "OperatorNotEqualOuterCloseBracketToken",
        [&testClass]() { testClass->OperatorNotEqualOuterCloseBracketToken(); });

    return state;
}