#pragma once
#include "ParseNameExpressionTests.h"
#include "../../RunTest.h"

TestState RunParseNameExpressionTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ParseNameExpressionTests>();
    TestState state = { 0, 0 };

    std::cout << "Running ParseNameExpressionTests:" << std::endl;

    state += RunTest(
        "SingleSimpleNameExpression",
        [&testClass]() { testClass->SingleSimpleNameExpression(); });
    
    state += RunTest(
        "SingleQualifiedNameExpression",
        [&testClass]() { testClass->SingleQualifiedNameExpression(); });

    return state;
}
