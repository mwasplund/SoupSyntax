#pragma once
#include "ParseNameExpressionTests.h"
#include "../../RunTest.h"

TestState RunParseNameExpressionTests()
{
    std::string className = "ParseNameExpressionTests";
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ParseNameExpressionTests>();
    TestState state = { 0, 0 };

    state += RunTest(
        className,
        "SingleSimpleNameExpression",
        [&testClass]() { testClass->SingleSimpleNameExpression(); });
    state += RunTest(
        className,
        "SingleQualifiedNameExpression",
        [&testClass]() { testClass->SingleQualifiedNameExpression(); });

    return state;
}
