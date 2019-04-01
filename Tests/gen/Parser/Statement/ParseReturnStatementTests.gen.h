#pragma once
#include "ParseReturnStatementTests.h"
#include "../../RunTest.h"

TestState RunParseReturnStatementTests()
{
    std::string className = "ParseReturnStatementTests";
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ParseReturnStatementTests>();
    TestState state = { 0, 0 };

    state += RunTest(
        className,
        "ReturnNoExpression",
        [&testClass]() { testClass->ReturnNoExpression(); });
    state += RunTest(
        className,
        "ReturnLiteralExpression",
        [&testClass]() { testClass->ReturnLiteralExpression(); });
    state += RunTest(
        className,
        "ReturnSimpleNameExpression",
        [&testClass]() { testClass->ReturnSimpleNameExpression(); });

    return state;
}
