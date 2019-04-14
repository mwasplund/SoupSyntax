#pragma once
#include "AST/OuterTree/Attribute/AttributeSpecifierTests.h"
#include "RunTest.h"

TestState RunOuterTreeAttributeSpecifierTests()
{
    std::string className = "OuterTree::AttributeSpecifierTests";
    auto testClass = std::make_unique<Soup::Syntax::OuterTree::UnitTests::AttributeSpecifierTests>();
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
        "GetChildrenSimple",
        [&testClass]() { testClass->GetChildrenSimple(); });
    state += RunTest(
        className,
        "GetChildrenComplex",
        [&testClass]() { testClass->GetChildrenComplex(); });
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