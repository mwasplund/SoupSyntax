#pragma once
#include "MemberDeclarationTests.h"
#include "../RunTest.h"

TestState RunMemberDeclarationTests()
{
    std::string className = "MemberDeclarationTests";
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::MemberDeclarationTests>();
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