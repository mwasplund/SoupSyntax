#pragma once
#include "ParseLambdaExpressionTests.h"
#include "RunTest.h"

TestState RunParseLambdaExpressionTests()
{
    std::string className = "ParseLambdaExpressionTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::ParseLambdaExpressionTests>();
    TestState state = { 0, 0 };

    state += RunTest(
        className,
        "Simple",
        [&testClass]() { testClass->Simple(); });
    state += RunTest(
        className,
        "Complex",
        [&testClass]() { testClass->Complex(); });

    return state;
}
