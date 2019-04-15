#pragma once
#include "AST/OuterTree/Declaration/MemberDeclaratorListTests.h"
#include "RunTest.h"

TestState RunOuterTreeMemberDeclaratorListTests()
{
    std::string className = "OuterTree::MemberDeclaratorListTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::OuterTreeMemberDeclaratorListTests>();
    TestState state = { 0, 0 };

    state += RunTest(
        className,
        "InitializeSimple",
        [&testClass]() { testClass->InitializeSimple(); });
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
        "OperatorNotEqualLessItems",
        [&testClass]() { testClass->OperatorNotEqualLessItems(); });
    state += RunTest(
        className,
        "OperatorNotEqualWithItems",
        [&testClass]() { testClass->OperatorNotEqualWithItems(); });

    return state;
}