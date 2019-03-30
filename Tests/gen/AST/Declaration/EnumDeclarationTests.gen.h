#pragma once
#include "EnumDeclarationTests.h"
#include "../RunTest.h"

TestState RunEnumDeclarationTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::EnumDeclarationTests>();
    TestState state = { 0, 0 };

    std::cout << "Running EnumDeclarationTests:" << std::endl;

    state += RunTest(
        "InitializeNoClassOrIdentifier",
        [&testClass]() { testClass->InitializeNoClassOrIdentifier(); });

    state += RunTest(
        "InitializeWithClassAndIdentifier",
        [&testClass]() { testClass->InitializeWithClassAndIdentifier(); });

    state += RunTest(
        "GetChildrenNoClassOrIdentifier",
        [&testClass]() { testClass->GetChildrenNoClassOrIdentifier(); });

    state += RunTest(
        "GetChildrenWithClassAndIdentifier",
        [&testClass]() { testClass->GetChildrenWithClassAndIdentifier(); });

    state += RunTest(
        "OperatorEqualNoClassOrIdentifier",
        [&testClass]() { testClass->OperatorEqualNoClassOrIdentifier(); });

    state += RunTest(
        "OperatorEqualWithClassAndIdentifier",
        [&testClass]() { testClass->OperatorEqualWithClassAndIdentifier(); });

    state += RunTest(
        "OperatorNotEqualEnumToken",
        [&testClass]() { testClass->OperatorNotEqualEnumToken(); });

    state += RunTest(
        "OperatorNotEqualNoClass",
        [&testClass]() { testClass->OperatorNotEqualNoClass(); });

    state += RunTest(
        "OperatorNotEqualWithClass",
        [&testClass]() { testClass->OperatorNotEqualWithClass(); });

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
        "OperatorNotEqualEnumeratorList",
        [&testClass]() { testClass->OperatorNotEqualEnumeratorList(); });

    state += RunTest(
        "OperatorNotEqualCloseBraceToken",
        [&testClass]() { testClass->OperatorNotEqualCloseBraceToken(); });

    return state;
}