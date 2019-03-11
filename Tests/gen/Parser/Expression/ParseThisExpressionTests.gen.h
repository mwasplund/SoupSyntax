#pragma once
#include "ParseThisExpressionTests.h"
#include "../../RunTest.h"

TestState RunParseThisExpressionTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ParseThisExpressionTests>();
    TestState state = { 0, 0 };

    std::wcout << L"Running ParseThisExpressionTests:" << std::endl;

    std::wcout << L"SingleThisExpression" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleThisExpression(); });

    return state;
}
