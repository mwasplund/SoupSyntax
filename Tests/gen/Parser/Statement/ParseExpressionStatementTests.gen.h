#pragma once
#include "ParseExpressionStatementTests.h"
#include "../../RunTest.h"

TestState RunParseExpressionStatementTests()
{
    std::string className = "ParseExpressionStatementTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::ParseExpressionStatementTests>();
    TestState state = { 0, 0 };

    state += RunTest(
        className,
        "SimpleIdentifierExpression",
        [&testClass]() { testClass->SimpleIdentifierExpression(); });

    return state;
}
