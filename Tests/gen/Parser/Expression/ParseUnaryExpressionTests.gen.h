#pragma once
#include "ParseUnaryExpressionTests.h"
#include "../../RunTest.h"

TestState RunParseUnaryExpressionTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ParseUnaryExpressionTests>();
    TestState state = { 0, 0 };

    std::cout << "Running ParseUnaryExpressionTests:" << std::endl;

    state += RunTest(
        "SingleIdentifierPlus",
        [&testClass]() { testClass->SingleIdentifierPlus(); });

    state += RunTest(
        "SingleIdentifierMinus",
        [&testClass]() { testClass->SingleIdentifierMinus(); });

    state += RunTest(
        "SingleIdentifierBitwiseNot",
        [&testClass]() { testClass->SingleIdentifierBitwiseNot(); });

    state += RunTest(
        "SingleIdentifierPreIncrement",
        [&testClass]() { testClass->SingleIdentifierPreIncrement(); });

    state += RunTest(
        "SingleIdentifierPreDecrement",
        [&testClass]() { testClass->SingleIdentifierPreDecrement(); });

    state += RunTest(
        "SingleIdentifierPostIncrement",
        [&testClass]() { testClass->SingleIdentifierPostIncrement(); });

    state += RunTest(
        "SingleIdentifierPostDecrement",
        [&testClass]() { testClass->SingleIdentifierPostDecrement(); });

    state += RunTest(
        "SingleIdentifierLogicalNot",
        [&testClass]() { testClass->SingleIdentifierLogicalNot(); });

    state += RunTest(
        "SingleIdentifierIndirection",
        [&testClass]() { testClass->SingleIdentifierIndirection(); });

    state += RunTest(
        "SingleIdentifierAddressOf",
        [&testClass]() { testClass->SingleIdentifierAddressOf(); });

    return state;
}
