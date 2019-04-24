#pragma once
#include "AST/OuterTree/Declaration/TypeSpecifierSequenceTests.h"
#include "RunTest.h"

TestState RunOuterTreeTypeSpecifierSequenceTests()
{
    std::string className = "OuterTree::TypeSpecifierSequenceTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::OuterTreeTypeSpecifierSequenceTests>();
    TestState state = { 0, 0 };

    state += RunTest(
        className,
        "InitializeSimpleNoModifiers",
        [&testClass]() { testClass->InitializeSimpleNoModifiers(); });
    state += RunTest(
        className,
        "InitializeSimpleWithModifiers",
        [&testClass]() { testClass->InitializeSimpleWithModifiers(); });
    state += RunTest(
        className,
        "GetChildrenNoModifiers",
        [&testClass]() { testClass->GetChildrenNoModifiers(); });
    state += RunTest(
        className,
        "GetChildrenWithModifiers",
        [&testClass]() { testClass->GetChildrenWithModifiers(); });
    state += RunTest(
        className,
        "OperatorEqualNoModifiers",
        [&testClass]() { testClass->OperatorEqualNoModifiers(); });
    state += RunTest(
        className,
        "OperatorEqualWithModifiers",
        [&testClass]() { testClass->OperatorEqualWithModifiers(); });
    state += RunTest(
        className,
        "OperatorNotEqualNoLeadingModifiers",
        [&testClass]() { testClass->OperatorNotEqualNoLeadingModifiers(); });
    state += RunTest(
        className,
        "OperatorNotEqualLeadingModifiers",
        [&testClass]() { testClass->OperatorNotEqualLeadingModifiers(); });
    state += RunTest(
        className,
        "OperatorNotEqualTypeSpecifier",
        [&testClass]() { testClass->OperatorNotEqualTypeSpecifier(); });
    state += RunTest(
        className,
        "OperatorNotEqualNoTrailingModifiers",
        [&testClass]() { testClass->OperatorNotEqualNoTrailingModifiers(); });
    state += RunTest(
        className,
        "OperatorNotEqualTrailingModifiers",
        [&testClass]() { testClass->OperatorNotEqualTrailingModifiers(); });

    return state;
}