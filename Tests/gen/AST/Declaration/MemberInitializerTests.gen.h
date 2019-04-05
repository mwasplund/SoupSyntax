#pragma once
#include "MemberInitializerTests.h"
#include "../RunTest.h"

TestState RunMemberInitializerTests()
{
    std::string className = "MemberInitializerTests";
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::MemberInitializerTests>();
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
        "OperatorNotEqualIdentifierToken",
        [&testClass]() { testClass->OperatorNotEqualIdentifierToken(); });
    state += RunTest(
        className,
        "OperatorNotEqualInitializer",
        [&testClass]() { testClass->OperatorNotEqualInitializer(); });

    return state;
}