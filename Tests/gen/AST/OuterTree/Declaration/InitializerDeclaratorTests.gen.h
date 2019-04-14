#pragma once
#include "AST/OuterTree/Declaration/InitializerDeclaratorTests.h"
#include "RunTest.h"

TestState RunOuterTreeInitializerDeclaratorTests()
{
    std::string className = "OuterTree::InitializerDeclaratorTests";
    auto testClass = std::make_unique<Soup::Syntax::OuterTree::UnitTests::InitializerDeclaratorTests>();
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