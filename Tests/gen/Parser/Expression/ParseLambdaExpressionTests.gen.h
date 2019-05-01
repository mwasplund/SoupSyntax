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
        "EmptyParameterList",
        [&testClass]() { testClass->EmptyParameterList(); });
    state += RunTest(
        className,
        "SingleCaptureReference",
        [&testClass]() { testClass->SingleCaptureReference(); });
    state += RunTest(
        className,
        "SingleParameterAndReturnStatement",
        [&testClass]() { testClass->SingleParameterAndReturnStatement(); });

    return state;
}
