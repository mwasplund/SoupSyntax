#pragma once
#include "AST/InnerTree/Shared/SimpleIdentifierTests.h"
#include "RunTest.h"

TestState RunInnerTreeSimpleIdentifierTests()
{
    std::string className = "InnerTree::SimpleIdentifierTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::InnerTreeSimpleIdentifierTests>();
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