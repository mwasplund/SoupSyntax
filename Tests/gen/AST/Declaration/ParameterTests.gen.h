#pragma once
#include "ParameterTests.h"
#include "../RunTest.h"

TestState RunParameterTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ParameterTests>();
    TestState state = { 0, 0 };

    std::cout << "Running ParameterTests:" << std::endl;

    std::cout << "InitializeSimple" << std::endl;
    state += RunTest([&testClass]() { testClass->InitializeSimple(); });

    std::cout << "GetChildren" << std::endl;
    state += RunTest([&testClass]() { testClass->GetChildren(); });

    std::cout << "OperatorEqual" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorEqual(); });

    std::cout << "OperatorNotEqualDeclarationSpecifier" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualDeclarationSpecifier(); });

    std::cout << "OperatorNotEqualDeclarator" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualDeclarator(); });

    return state;
}