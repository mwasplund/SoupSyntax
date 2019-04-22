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
        "SingleSimpleIdentifier",
        [&testClass]() { testClass->SingleSimpleIdentifier(); });
    state += RunTest(
        className,
        "SingleQualifiedIdentifier",
        [&testClass]() { testClass->SingleQualifiedIdentifier(); });
    state += RunTest(
        className,
        "SingleTemplateIdentifier",
        [&testClass]() { testClass->SingleTemplateIdentifier(); });
    state += RunTest(
        className,
        "SingleDestructorIdentifier",
        [&testClass]() { testClass->SingleDestructorIdentifier(); });

    return state;
}
