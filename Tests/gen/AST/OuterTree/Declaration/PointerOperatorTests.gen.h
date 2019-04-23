#pragma once
#include "AST/OuterTree/Declaration/PointerOperatorTests.h"
#include "RunTest.h"

TestState RunOuterTreePointerOperatorTests()
{
    std::string className = "OuterTree::PointerOperatorTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::OuterTreePointerOperatorTests>();
    TestState state = { 0, 0 };

    state += RunTest(
        className,
        "Initialize",
        [&testClass]() { testClass->Initialize(); });
    state += RunTest(
        className,
        "GetChildren",
        [&testClass]() { testClass->GetChildren(); });
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