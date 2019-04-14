#pragma once
#include "AST/OuterTree/Attribute/AttributeTests.h"
#include "RunTest.h"

TestState RunOuterTreeAttributeTests()
{
    std::string className = "OuterTree::AttributeTests";
    auto testClass = std::make_unique<Soup::Syntax::OuterTree::UnitTests::AttributeTests>();
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
        "OperatorNotEqualIdentifier",
        [&testClass]() { testClass->OperatorNotEqualIdentifier(); });

    return state;
}