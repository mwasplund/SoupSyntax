#pragma once
#include "ParseIdentifierExpressionTests.h"
#include "../../RunTest.h"

TestState RunParseIdentifierExpressionTests()
{
    std::string className = "ParseIdentifierExpressionTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::ParseIdentifierExpressionTests>();
    TestState state = { 0, 0 };

    state += RunTest(
        className,
        "SingleSimpleIdentifierExpression",
        [&testClass]() { testClass->SingleSimpleIdentifierExpression(); });
    state += RunTest(
        className,
        "SingleQualifiedIdentifierExpression",
        [&testClass]() { testClass->SingleQualifiedIdentifierExpression(); });
    state += RunTest(
        className,
        "SingleTemplateIdentifierExpression",
        [&testClass]() { testClass->SingleTemplateIdentifierExpression(); });
    state += RunTest(
        className,
        "SingleDestructorIdentifierExpression",
        [&testClass]() { testClass->SingleDestructorIdentifierExpression(); });

    return state;
}
