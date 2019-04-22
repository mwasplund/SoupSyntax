#pragma once
#include "AST/OuterTree/Shared/SimpleTemplateIdentifierTests.h"
#include "RunTest.h"

TestState RunOuterTreeSimpleTemplateIdentifierTests()
{
    std::string className = "OuterTree::SimpleTemplateIdentifierTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::OuterTreeSimpleTemplateIdentifierTests>();
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
        "GetChildrenNoArguments",
        [&testClass]() { testClass->GetChildrenNoArguments(); });
    state += RunTest(
        className,
        "GetChildrenWithArguments",
        [&testClass]() { testClass->GetChildrenWithArguments(); });
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