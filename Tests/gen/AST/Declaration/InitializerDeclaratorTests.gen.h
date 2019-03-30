#pragma once
#include "InitializerDeclaratorTests.h"
#include "../RunTest.h"

TestState RunInitializerDeclaratorTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::InitializerDeclaratorTests>();
    TestState state = { 0, 0 };

    std::cout << "Running InitializerDeclaratorTests:" << std::endl;

    std::cout << "InitializeSimpleNoInitializer" << std::endl;
    state += RunTest([&testClass]() { testClass->InitializeSimpleNoInitializer(); });

    std::cout << "InitializeSimpleWithInitializer" << std::endl;
    state += RunTest([&testClass]() { testClass->InitializeSimpleWithInitializer(); });

    std::cout << "GetChildrenNoInitializer" << std::endl;
    state += RunTest([&testClass]() { testClass->GetChildrenNoInitializer(); });

    std::cout << "GetChildrenWithInitializer" << std::endl;
    state += RunTest([&testClass]() { testClass->GetChildrenWithInitializer(); });

    std::cout << "OperatorEqualNoInitializer" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorEqualNoInitializer(); });

    std::cout << "OperatorEqualWithInitializer" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorEqualWithInitializer(); });

    std::cout << "OperatorNotEqualDeclarator" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualDeclarator(); });

    std::cout << "OperatorNotEqualNoInitializer" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualNoInitializer(); });

    std::cout << "OperatorNotEqualWithInitializer" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualWithInitializer(); });

    return state;
}