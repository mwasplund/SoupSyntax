#pragma once
#include "ParseExpressionStatementTests.h"
#include "../../RunTest.h"

TestState RunParseExpressionStatementTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ParseExpressionStatementTests>();
    TestState state = { 0, 0 };

    std::cout << "Running ParseExpressionStatementTests:" << std::endl;

    std::cout << "SimpleNameExpression" << std::endl;
    state += RunTest([&testClass]() { testClass->SimpleNameExpression(); });

    return state;
}
