#pragma once
#include "AST/InnerTree/Expression/DestructorIdentifierExpressionTests.h"
#include "RunTest.h"

TestState RunInnerTreeDestructorIdentifierExpressionTests()
{
    std::string className = "InnerTree::DestructorIdentifierExpressionTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::InnerTreeDestructorIdentifierExpressionTests>();
    TestState state = { 0, 0 };

    state += RunTest(
        className,
        "Initialize",
        [&testClass]() { testClass->Initialize(); });
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