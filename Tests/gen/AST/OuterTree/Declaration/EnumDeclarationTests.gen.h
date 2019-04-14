#pragma once
#include "AST/OuterTree/Declaration/EnumDeclarationTests.h"
#include "RunTest.h"

TestState RunOuterTreeEnumDeclarationTests()
{
    std::string className = "OuterTree::EnumDeclarationTests";
    auto testClass = std::make_unique<Soup::Syntax::OuterTree::UnitTests::EnumDeclarationTests>();
    TestState state = { 0, 0 };

    state += RunTest(
        className,
        "InitializeNoClassOrIdentifier",
        [&testClass]() { testClass->InitializeNoClassOrIdentifier(); });
    state += RunTest(
        className,
        "InitializeWithClassAndIdentifier",
        [&testClass]() { testClass->InitializeWithClassAndIdentifier(); });
    state += RunTest(
        className,
        "GetChildrenNoClassOrIdentifier",
        [&testClass]() { testClass->GetChildrenNoClassOrIdentifier(); });
    state += RunTest(
        className,
        "GetChildrenWithClassAndIdentifier",
        [&testClass]() { testClass->GetChildrenWithClassAndIdentifier(); });
    state += RunTest(
        className,
        "OperatorEqualNoClassOrIdentifier",
        [&testClass]() { testClass->OperatorEqualNoClassOrIdentifier(); });
    state += RunTest(
        className,
        "OperatorEqualWithClassAndIdentifier",
        [&testClass]() { testClass->OperatorEqualWithClassAndIdentifier(); });
    state += RunTest(
        className,
        "OperatorNotEqualEnumToken",
        [&testClass]() { testClass->OperatorNotEqualEnumToken(); });
    state += RunTest(
        className,
        "OperatorNotEqualNoClass",
        [&testClass]() { testClass->OperatorNotEqualNoClass(); });
    state += RunTest(
        className,
        "OperatorNotEqualWithClass",
        [&testClass]() { testClass->OperatorNotEqualWithClass(); });
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
        "OperatorNotEqualEnumeratorList",
        [&testClass]() { testClass->OperatorNotEqualEnumeratorList(); });
    state += RunTest(
        className,
        "OperatorNotEqualCloseBraceToken",
        [&testClass]() { testClass->OperatorNotEqualCloseBraceToken(); });

    return state;
}