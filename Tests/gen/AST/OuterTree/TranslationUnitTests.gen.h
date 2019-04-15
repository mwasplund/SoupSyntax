#pragma once
#include "AST/OuterTree/TranslationUnitTests.h"
#include "RunTest.h"

TestState RunOuterTreeTranslationUnitTests()
{
    std::string className = "OuterTree::TranslationUnitTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::OuterTreeTranslationUnitTests>();
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
        "OperatorNotEqualNoDeclarations",
        [&testClass]() { testClass->OperatorNotEqualNoDeclarations(); });
    state += RunTest(
        className,
        "OperatorNotEqualWithDelarations",
        [&testClass]() { testClass->OperatorNotEqualWithDelarations(); });
    state += RunTest(
        className,
        "OperatorNotEqualEndOfFileToken",
        [&testClass]() { testClass->OperatorNotEqualEndOfFileToken(); });

    return state;
}