#pragma once
#include "AST/OuterTree/Declaration/MemberDeclaratorTests.h"
#include "RunTest.h"

TestState RunOuterTreeMemberDeclaratorTests()
{
    std::string className = "OuterTree::MemberDeclaratorTests";
    auto testClass = std::make_unique<Soup::Syntax::OuterTree::UnitTests::MemberDeclaratorTests>();
    TestState state = { 0, 0 };

    state += RunTest(
        className,
        "InitializeSimpleNoInitializer",
        [&testClass]() { testClass->InitializeSimpleNoInitializer(); });
    state += RunTest(
        className,
        "InitializeSimpleWithInitializer",
        [&testClass]() { testClass->InitializeSimpleWithInitializer(); });
    state += RunTest(
        className,
        "GetChildrenNoInitializer",
        [&testClass]() { testClass->GetChildrenNoInitializer(); });
    state += RunTest(
        className,
        "GetChildrenWithInitializer" ,
        [&testClass]() { testClass->GetChildrenWithInitializer(); });
    state += RunTest(
        className,
        "OperatorEqualNoInitializer",
        [&testClass]() { testClass->OperatorEqualNoInitializer(); });
    state += RunTest(
        className,
        "OperatorEqualWithInitializer",
        [&testClass]() { testClass->OperatorEqualWithInitializer(); });
    state += RunTest(
        className,
        "OperatorNotEqualDeclarator",
        [&testClass]() { testClass->OperatorNotEqualDeclarator(); });
    state += RunTest(
        className,
        "OperatorNotEqualNoInitializer",
        [&testClass]() { testClass->OperatorNotEqualNoInitializer(); });
    state += RunTest(
        className,
        "OperatorNotEqualWithInitializer",
        [&testClass]() { testClass->OperatorNotEqualWithInitializer(); });

    return state;
}