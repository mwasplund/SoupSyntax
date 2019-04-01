#pragma once
#include "TranslationUnitTests.h"
#include "../RunTest.h"

TestState RunTranslationUnitTests()
{
    std::string className = "TranslationUnitTests";
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::TranslationUnitTests>();
    TestState state = { 0, 0 };

    state += RunTest(
        className,
        "Initialize",
        [&testClass]() { testClass->Initialize(); });
    state += RunTest(
        className,
        "GetChildren",
        [&testClass]() { testClass->GetChildren(); });
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