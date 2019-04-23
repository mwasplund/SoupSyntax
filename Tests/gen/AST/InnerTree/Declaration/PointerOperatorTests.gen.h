#pragma once
#include "AST/InnerTree/Declaration/PointerOperatorTests.h"
#include "RunTest.h"

TestState RunInnerTreePointerOperatorTests()
{
    std::string className = "InnerTree::PointerOperatorTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::InnerTreePointerOperatorTests>();
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
        "OperatorNotEqualOperatorToken",
        [&testClass]() { testClass->OperatorNotEqualOperatorToken(); });

    return state;
}