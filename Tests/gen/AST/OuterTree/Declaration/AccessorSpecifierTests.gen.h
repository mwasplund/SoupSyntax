#pragma once
#include "AST/OuterTree/Declaration/AccessorSpecifierTests.h"
#include "RunTest.h"

TestState RunOuterTreeAccessorSpecifierTests()
{
    std::string className = "OuterTree::AccessorSpecifierTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::OuterTreeAccessorSpecifierTests>();
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
        "OperatorNotEqualAccessorToken",
        [&testClass]() { testClass->OperatorNotEqualAccessorToken(); });
    state += RunTest(
        className,
        "OperatorNotEqualColonToken",
        [&testClass]() { testClass->OperatorNotEqualColonToken(); });

    return state;
}