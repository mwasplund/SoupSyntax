#pragma once
#include "ParseReturnStatementTests.h"
#include "../../RunTest.h"

TestState RunParseReturnStatementTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ParseReturnStatementTests>();
    TestState state = { 0, 0 };

    std::cout << "Running ParseReturnStatementTests:" << std::endl;

    state += RunTest(
        "ReturnNoExpression",
        [&testClass]() { testClass->ReturnNoExpression(); });

    state += RunTest(
        "ReturnLiteralExpression",
        [&testClass]() { testClass->ReturnLiteralExpression(); });

    state += RunTest(
        "ReturnSimpleNameExpression",
        [&testClass]() { testClass->ReturnSimpleNameExpression(); });

    return state;
}
