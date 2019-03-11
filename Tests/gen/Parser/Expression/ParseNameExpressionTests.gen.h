#pragma once
#include "ParseNameExpressionTests.h"
#include "../../RunTest.h"

TestState RunParseNameExpressionTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ParseNameExpressionTests>();
    TestState state = { 0, 0 };

    std::wcout << L"Running ParseNameExpressionTests:" << std::endl;

    std::wcout << L"SingleSimpleNameExpression" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleSimpleNameExpression(); });
    
    std::wcout << L"SingleQualifiedNameExpression" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleQualifiedNameExpression(); });

    return state;
}
