#pragma once
#include "AST/InnerTree/Expression/SimpleTemplateIdentifierExpressionTests.h"
#include "RunTest.h"

TestState RunInnerTreeSimpleTemplateIdentifierExpressionTests()
{
    std::string className = "InnerTree::SimpleTemplateIdentifierExpressionTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::SimpleTemplateIdentifierExpressionTests>();
    TestState state = { 0, 0 };

    state += RunTest(
        className,
        "InitializeNoArguments",
        [&testClass]() { testClass->InitializeNoArguments(); });
    state += RunTest(
        className,
        "InitializeWithArguments",
        [&testClass]() { testClass->InitializeWithArguments(); });
    state += RunTest(
        className,
        "OperatorEqualNoArguments",
        [&testClass]() { testClass->OperatorEqualNoArguments(); });
    state += RunTest(
        className,
        "OperatorEqualWithArguments",
        [&testClass]() { testClass->OperatorEqualWithArguments(); });
    state += RunTest(
        className,
        "OperatorNotEqualIdentifier",
        [&testClass]() { testClass->OperatorNotEqualIdentifier(); });
    state += RunTest(
        className,
        "OperatorNotEqualLessThanToken",
        [&testClass]() { testClass->OperatorNotEqualLessThanToken(); });
    state += RunTest(
        className,
        "OperatorNotEqualNoArguments",
        [&testClass]() { testClass->OperatorNotEqualNoArguments(); });
    state += RunTest(
        className,
        "OperatorNotEqualWithArguments",
        [&testClass]() { testClass->OperatorNotEqualWithArguments(); });
    state += RunTest(
        className,
        "OperatorNotEqualGreaterThanToken",
        [&testClass]() { testClass->OperatorNotEqualGreaterThanToken(); });

    return state;
}