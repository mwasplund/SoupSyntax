#pragma once
#include "AST/OuterTree/Declaration/PointerDeclaratorTests.h"
#include "RunTest.h"

TestState RunOuterTreePointerDeclaratorTests()
{
    std::string className = "OuterTree::PointerDeclaratorTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::OuterTreePointerDeclaratorTests>();
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
        "OperatorNotEqualPointerOperator",
        [&testClass]() { testClass->OperatorNotEqualPointerOperator(); });
    state += RunTest(
        className,
        "OperatorNotEqualDeclarator",
        [&testClass]() { testClass->OperatorNotEqualDeclarator(); });

    return state;
}