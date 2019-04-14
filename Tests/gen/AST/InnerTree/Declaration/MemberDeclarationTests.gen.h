#pragma once
#include "AST/InnerTree/Declaration/MemberDeclarationTests.h"
#include "RunTest.h"

TestState RunInnerTreeMemberDeclarationTests()
{
    std::string className = "InnerTree::MemberDeclarationTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::MemberDeclarationTests>();
    TestState state = { 0, 0 };

    state += RunTest(
        className,
        "InitializeSimple",
        [&testClass]() { testClass->InitializeSimple(); });
    state += RunTest(
        className,
        "OperatorEqual",
        [&testClass]() { testClass->OperatorEqual(); });
    state += RunTest(
        className,
        "OperatorNotEqualDeclarationSpecifier",
        [&testClass]() { testClass->OperatorNotEqualDeclarationSpecifier(); });
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