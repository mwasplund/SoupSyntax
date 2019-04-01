#pragma once
#include "ParseSubscriptExpressionTests.h"
#include "../../RunTest.h"

TestState RunParseSubscriptExpressionTests()
{
    std::string className = "ParseSubscriptExpressionTests";
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ParseSubscriptExpressionTests>();
    TestState state = { 0, 0 };

    state += RunTest(
        className,
        "SingleSubscriptExpression",
        [&testClass]() { testClass->SingleSubscriptExpression(); });

    return state;
}
