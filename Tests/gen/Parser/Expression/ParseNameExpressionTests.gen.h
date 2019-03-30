#pragma once
#include "ParseNameExpressionTests.h"
#include "../../RunTest.h"

TestState RunParseNameExpressionTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ParseNameExpressionTests>();
    TestState state = { 0, 0 };

    std::cout << "Running ParseNameExpressionTests:" << std::endl;

    std::cout << "SingleSimpleNameExpression" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleSimpleNameExpression(); });
    
    std::cout << "SingleQualifiedNameExpression" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleQualifiedNameExpression(); });

    return state;
}
