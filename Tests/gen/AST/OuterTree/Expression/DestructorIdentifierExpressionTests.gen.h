#pragma once
#include "AST/OuterTree/Expression/DestructorIdentifierExpressionTests.h"
#include "RunTest.h"

TestState RunOuterTreeDestructorIdentifierExpressionTests()
{
    std::string className = "OuterTree::DestructorIdentifierExpressionTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::OuterTreeDestructorIdentifierExpressionTests>();
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
        "OperatorNotEqualTildeToken",
        [&testClass]() { testClass->OperatorNotEqualTildeToken(); });
    state += RunTest(
        className,
        "OperatorNotEqualIdentifier",
        [&testClass]() { testClass->OperatorNotEqualIdentifier(); });

    return state;
}