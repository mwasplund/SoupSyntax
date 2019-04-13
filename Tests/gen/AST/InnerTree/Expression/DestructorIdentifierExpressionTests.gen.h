#pragma once
#include "DestructorIdentifierExpressionTests.h"
#include "../RunTest.h"

TestState RunDestructorIdentifierExpressionTests()
{
    std::string className = "DestructorIdentifierExpressionTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::DestructorIdentifierExpressionTests>();
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