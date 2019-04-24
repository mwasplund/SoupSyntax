#pragma once
#include "AST/OuterTree/Declaration/MemberDeclarationTests.h"
#include "RunTest.h"

TestState RunOuterTreeMemberDeclarationTests()
{
    std::string className = "OuterTree::MemberDeclarationTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::OuterTreeMemberDeclarationTests>();
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
        "OperatorNotEqualDeclarationSpecifierSequence",
        [&testClass]() { testClass->OperatorNotEqualDeclarationSpecifierSequence(); });
    state += RunTest(
        className,
        "OperatorNotEqualMemberDeclaratorList",
        [&testClass]() { testClass->OperatorNotEqualMemberDeclaratorList(); });
    state += RunTest(
        className,
        "OperatorNotEqualSemicolonToken",
        [&testClass]() { testClass->OperatorNotEqualSemicolonToken(); });

    return state;
}