#pragma once
#include "AST/InnerTree/Expression/SimpleIdentifierExpressionTests.h"
#include "RunTest.h"

TestState RunInnerTreeSimpleIdentifierExpressionTests()
{
    std::string className = "InnerTree::SimpleIdentifierExpressionTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::SimpleIdentifierExpressionTests>();
    TestState state = { 0, 0 };

    state += RunTest(
        className,
        "Initialize",
        [&testClass]() { testClass->Initialize(); });
    state += RunTest(
        className,
        "OperatorEqual",
        [&testClass]() { testClass->OperatorEqual(); });
    state += RunTest(
        className,
        "OperatorNotEqualIdentifier",
        [&testClass]() { testClass->OperatorNotEqualIdentifier(); });

    return state;
}