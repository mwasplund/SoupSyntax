#pragma once
#include "ClassDeclarationTests.h"
#include "../RunTest.h"

TestState RunClassDeclarationTests()
{
    std::string className = "ClassDeclarationTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::ClassDeclarationTests>();
    TestState state = { 0, 0 };

    state += RunTest(
        className,
        "InitializeNoIdentifier",
        [&testClass]() { testClass->InitializeNoIdentifier(); });
    state += RunTest(
        className,
        "InitializeWithIdentifier",
        [&testClass]() { testClass->InitializeWithIdentifier(); });
    state += RunTest(
        className,
        "OperatorEqualNoIdentifier",
        [&testClass]() { testClass->OperatorEqualNoIdentifier(); });
    state += RunTest(
        className,
        "OperatorEqualWithIdentifier",
        [&testClass]() { testClass->OperatorEqualWithIdentifier(); });
    state += RunTest(
        className,
        "OperatorNotEqualClassToken",
        [&testClass]() { testClass->OperatorNotEqualClassToken(); });
    state += RunTest(
        className,
        "OperatorNotEqualNoIdentifier",
        [&testClass]() { testClass->OperatorNotEqualNoIdentifier(); });
    state += RunTest(
        className,
        "OperatorNotEqualWithIdentifier",
        [&testClass]() { testClass->OperatorNotEqualWithIdentifier(); });
    state += RunTest(
        className,
        "OperatorNotEqualOpenBraceToken",
        [&testClass]() { testClass->OperatorNotEqualOpenBraceToken(); });
    state += RunTest(
        className,
        "OperatorNotEqualMemberDeclarations",
        [&testClass]() { testClass->OperatorNotEqualMemberDeclarations(); });
    state += RunTest(
        className,
        "OperatorNotEqualCloseBraceToken",
        [&testClass]() { testClass->OperatorNotEqualCloseBraceToken(); });

    return state;
}