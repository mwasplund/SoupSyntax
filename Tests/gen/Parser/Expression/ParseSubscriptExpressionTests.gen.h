#pragma once
#include "ParseSubscriptExpressionTests.h"
#include "../../RunTest.h"

TestState RunParseSubscriptExpressionTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ParseSubscriptExpressionTests>();
    TestState state = { 0, 0 };

    std::wcout << L"Running ParseSubscriptExpressionTests:" << std::endl;

    std::wcout << L"SingleSubscriptExpression" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleSubscriptExpression(); });

    return state;
}
