#pragma once
#include "AST/InnerTree/Declaration/MemberInitializerTests.h"
#include "RunTest.h"

TestState RunInnerTreeMemberInitializerTests()
{
    std::string className = "InnerTree::MemberInitializerTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::MemberInitializerTests>();
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
        "OperatorNotEqualIdentifierToken",
        [&testClass]() { testClass->OperatorNotEqualIdentifierToken(); });
    state += RunTest(
        className,
        "OperatorNotEqualInitializer",
        [&testClass]() { testClass->OperatorNotEqualInitializer(); });

    return state;
}