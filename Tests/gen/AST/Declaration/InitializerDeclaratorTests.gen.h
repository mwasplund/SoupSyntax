#pragma once
#include "InitializerDeclaratorTests.h"
#include "../RunTest.h"

TestState RunInitializerDeclaratorTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::InitializerDeclaratorTests>();
    TestState state = { 0, 0 };

    std::cout << "Running InitializerDeclaratorTests:" << std::endl;

    state += RunTest(
        "InitializeSimpleNoInitializer",
        [&testClass]() { testClass->InitializeSimpleNoInitializer(); });

    state += RunTest(
        "InitializeSimpleWithInitializer",
        [&testClass]() { testClass->InitializeSimpleWithInitializer(); });

    state += RunTest(
        "GetChildrenNoInitializer",
        [&testClass]() { testClass->GetChildrenNoInitializer(); });

    state += RunTest(
        "GetChildrenWithInitializer" ,
        [&testClass]() { testClass->GetChildrenWithInitializer(); });

    state += RunTest(
        "OperatorEqualNoInitializer",
        [&testClass]() { testClass->OperatorEqualNoInitializer(); });

    state += RunTest(
        "OperatorEqualWithInitializer",
        [&testClass]() { testClass->OperatorEqualWithInitializer(); });

    state += RunTest(
        "OperatorNotEqualDeclarator",
        [&testClass]() { testClass->OperatorNotEqualDeclarator(); });

    state += RunTest(
        "OperatorNotEqualNoInitializer",
        [&testClass]() { testClass->OperatorNotEqualNoInitializer(); });

    state += RunTest(
        "OperatorNotEqualWithInitializer",
        [&testClass]() { testClass->OperatorNotEqualWithInitializer(); });

    return state;
}