#pragma once
#include "DeclarationSpecifierTests.h"
#include "../RunTest.h"

TestState RunDeclarationSpecifierTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::DeclarationSpecifierTests>();
    TestState state = { 0, 0 };

    std::cout << "Running DeclarationSpecifierTests:" << std::endl;

    state += RunTest(
        "InitializeSimpleNoModifiers",
        [&testClass]() { testClass->InitializeSimpleNoModifiers(); });

    state += RunTest(
        "InitializeSimpleWithModifiers",
        [&testClass]() { testClass->InitializeSimpleWithModifiers(); });

    state += RunTest(
        "GetChildrenNoModifiers",
        [&testClass]() { testClass->GetChildrenNoModifiers(); });

    state += RunTest(
        "GetChildrenWithModifiers",
        [&testClass]() { testClass->GetChildrenWithModifiers(); });

    state += RunTest(
        "OperatorEqualNoModifiers",
        [&testClass]() { testClass->OperatorEqualNoModifiers(); });

    state += RunTest(
        "OperatorEqualWithModifiers",
        [&testClass]() { testClass->OperatorEqualWithModifiers(); });

    state += RunTest(
        "OperatorNotEqualNoLeadingModifiers",
        [&testClass]() { testClass->OperatorNotEqualNoLeadingModifiers(); });

    state += RunTest(
        "OperatorNotEqualLeadingModifiers",
        [&testClass]() { testClass->OperatorNotEqualLeadingModifiers(); });

    state += RunTest(
        "OperatorNotEqualTypeSpecifier",
        [&testClass]() { testClass->OperatorNotEqualTypeSpecifier(); });

    state += RunTest(
        "OperatorNotEqualNoTrailingModifiers",
        [&testClass]() { testClass->OperatorNotEqualNoTrailingModifiers(); });

    state += RunTest(
        "OperatorNotEqualTrailingModifiers",
        [&testClass]() { testClass->OperatorNotEqualTrailingModifiers(); });

    return state;
}