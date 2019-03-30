#pragma once
#include "ParseReturnStatementTests.h"
#include "../../RunTest.h"

TestState RunParseReturnStatementTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ParseReturnStatementTests>();
    TestState state = { 0, 0 };

    std::cout << "Running ParseReturnStatementTests:" << std::endl;

    std::cout << "ReturnNoExpression" << std::endl;
    state += RunTest([&testClass]() { testClass->ReturnNoExpression(); });

    std::cout << "ReturnLiteralExpression" << std::endl;
    state += RunTest([&testClass]() { testClass->ReturnLiteralExpression(); });

    std::cout << "ReturnSimpleNameExpression" << std::endl;
    state += RunTest([&testClass]() { testClass->ReturnSimpleNameExpression(); });

    return state;
}
