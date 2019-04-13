#pragma once
#include "AttributeTests.h"
#include "../RunTest.h"

TestState RunAttributeTests()
{
    std::string className = "AttributeTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::AttributeTests>();
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
        "OperatorNotEqualIdentifier",
        [&testClass]() { testClass->OperatorNotEqualIdentifier(); });

    return state;
}