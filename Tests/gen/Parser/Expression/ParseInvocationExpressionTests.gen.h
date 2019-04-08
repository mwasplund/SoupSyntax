#pragma once
#include "ParseInvocationExpressionTests.h"
#include "../../RunTest.h"

TestState RunParseInvocationExpressionTests()
{
    std::string className = "ParseInvocationExpressionTests";
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ParseInvocationExpressionTests>();
    TestState state = { 0, 0 };

    state += RunTest(
        className,
        "SimpleInvocation",
        [&testClass]() { testClass->SimpleInvocation(); });
    state += RunTest(
        className,
        "ComplexInvocation",
        [&testClass]() { testClass->ComplexInvocation(); });

    return state;
}
