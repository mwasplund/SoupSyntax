#pragma once
#include "ParseThisExpressionTests.h"
#include "../../RunTest.h"

TestState RunParseThisExpressionTests()
{
    std::string className = "ParseThisExpressionTests";
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ParseThisExpressionTests>();
    TestState state = { 0, 0 };

    state += RunTest(
        className,
        "SingleThisExpression",
        [&testClass]() { testClass->SingleThisExpression(); });

    return state;
}
