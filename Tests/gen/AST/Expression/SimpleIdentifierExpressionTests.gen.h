#pragma once
#include "SimpleIdentifierExpressionTests.h"
#include "../RunTest.h"

TestState RunSimpleIdentifierExpressionTests()
{
    std::string className = "SimpleIdentifierExpressionTests";
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::SimpleIdentifierExpressionTests>();
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