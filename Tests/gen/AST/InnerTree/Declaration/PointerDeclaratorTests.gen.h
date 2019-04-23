#pragma once
#include "AST/InnerTree/Declaration/PointerDeclaratorTests.h"
#include "RunTest.h"

TestState RunInnerTreePointerDeclaratorTests()
{
    std::string className = "InnerTree::PointerDeclaratorTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::InnerTreePointerDeclaratorTests>();
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
        "OperatorNotEqualPointerOperator",
        [&testClass]() { testClass->OperatorNotEqualPointerOperator(); });
    state += RunTest(
        className,
        "OperatorNotEqualDeclarator",
        [&testClass]() { testClass->OperatorNotEqualDeclarator(); });

    return state;
}