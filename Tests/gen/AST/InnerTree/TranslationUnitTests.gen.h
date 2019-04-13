#pragma once
#include "TranslationUnitTests.h"
#include "../RunTest.h"

TestState RunTranslationUnitTests()
{
    std::string className = "TranslationUnitTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::TranslationUnitTests>();
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