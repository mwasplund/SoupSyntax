#pragma once
#include "AST/OuterTree/Shared/NestedNameSpecifierTests.h"
#include "RunTest.h"

TestState RunOuterTreeNestedNameSpecifierTests()
{
    std::string className = "OuterTree::NestedNameSpecifierTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::OuterTreeNestedNameSpecifierTests>();
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
        "OperatorNotEqualSpecifierSequence",
        [&testClass]() { testClass->OperatorNotEqualSpecifierSequence(); });

    return state;
}