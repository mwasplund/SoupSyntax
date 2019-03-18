#pragma once
#include "ParseReturnStatementTests.h"
#include "../../RunTest.h"

TestState RunParseReturnStatementTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ParseReturnStatementTests>();
    TestState state = { 0, 0 };

    std::wcout << L"Running ParseReturnStatementTests:" << std::endl;

    std::wcout << L"ReturnNoExpression" << std::endl;
    state += RunTest([&testClass]() { testClass->ReturnNoExpression(); });

    std::wcout << L"ReturnLiteralExpression" << std::endl;
    state += RunTest([&testClass]() { testClass->ReturnLiteralExpression(); });

    std::wcout << L"ReturnSimpleNameExpression" << std::endl;
    state += RunTest([&testClass]() { testClass->ReturnSimpleNameExpression(); });

    return state;
}
