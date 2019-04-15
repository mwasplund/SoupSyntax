#pragma once
#include "ParseReturnStatementTests.h"
#include "../../RunTest.h"

TestState RunParseReturnStatementTests()
{
    std::string className = "ParseReturnStatementTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::ParseReturnStatementTests>();
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
        "ReturnSimpleIdentifierExpression",
        [&testClass]() { testClass->ReturnSimpleIdentifierExpression(); });

    return state;
}
