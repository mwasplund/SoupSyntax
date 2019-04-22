#pragma once
#include "AST/InnerTree/Shared/DestructorIdentifierTests.h"
#include "RunTest.h"

TestState RunInnerTreeDestructorIdentifierTests()
{
    std::string className = "InnerTree::DestructorIdentifierTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::InnerTreeDestructorIdentifierTests>();
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
        "OperatorNotEqualTildeToken",
        [&testClass]() { testClass->OperatorNotEqualTildeToken(); });
    state += RunTest(
        className,
        "OperatorNotEqualIdentifier",
        [&testClass]() { testClass->OperatorNotEqualIdentifier(); });

    return state;
}