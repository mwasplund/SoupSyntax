#pragma once
#include "ClassDeclarationTests.h"
#include "../RunTest.h"

TestState RunClassDeclarationTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ClassDeclarationTests>();
    TestState state = { 0, 0 };

    std::cout << "Running ClassDeclarationTests:" << std::endl;

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
        "OperatorNotEqualClassToken",
        [&testClass]() { testClass->OperatorNotEqualClassToken(); });

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
        "OperatorNotEqualMemberDeclarations",
        [&testClass]() { testClass->OperatorNotEqualMemberDeclarations(); });

    state += RunTest(
        "OperatorNotEqualCloseBraceToken",
        [&testClass]() { testClass->OperatorNotEqualCloseBraceToken(); });

    return state;
}