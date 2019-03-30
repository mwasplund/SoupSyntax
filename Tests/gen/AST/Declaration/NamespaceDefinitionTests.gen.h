#pragma once
#include "NamespaceDefinitionTests.h"
#include "../RunTest.h"

TestState RunNamespaceDefinitionTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::NamespaceDefinitionTests>();
    TestState state = { 0, 0 };

    std::cout << "Running NamespaceDefinitionTests:" << std::endl;

    state += RunTest(
        "InitializeNoIdentifier",
        [&testClass]() { testClass->InitializeNoIdentifier(); });

    state += RunTest(
        "InitializeWithIdentifier",
        [&testClass]() { testClass->InitializeWithIdentifier(); });

    state += RunTest(
        "GetChildrenNoIdentifier",
        [&testClass]() { testClass->GetChildrenNoIdentifier(); });

    state += RunTest(
        "GetChildrenWithIdentifier",
        [&testClass]() { testClass->GetChildrenWithIdentifier(); });

    state += RunTest(
        "OperatorEqualNoIdentifier",
        [&testClass]() { testClass->OperatorEqualNoIdentifier(); });

    state += RunTest(
        "OperatorEqualWithIdentifier",
        [&testClass]() { testClass->OperatorEqualWithIdentifier(); });

    state += RunTest(
        "OperatorNotEqualNamespaceToken",
        [&testClass]() { testClass->OperatorNotEqualNamespaceToken(); });

    state += RunTest(
        "OperatorNotEqualNoIdentifier",
        [&testClass]() { testClass->OperatorNotEqualNoIdentifier(); });

    state += RunTest(
        "OperatorNotEqualWithIdentifier",
        [&testClass]() { testClass->OperatorNotEqualWithIdentifier(); });

    state += RunTest(
        "OperatorNotEqualOpenBraceToken",
        [&testClass]() { testClass->OperatorNotEqualOpenBraceToken(); });

    state += RunTest(
        "OperatorNotEqualBody",
        [&testClass]() { testClass->OperatorNotEqualBody(); });

    state += RunTest(
        "OperatorNotEqualCloseBraceToken",
        [&testClass]() { testClass->OperatorNotEqualCloseBraceToken(); });

    return state;
}