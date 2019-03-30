#pragma once
#include "BinaryExpressionTests.h"
#include "../RunTest.h"

TestState RunBinaryExpressionTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::BinaryExpressionTests>();
    TestState state = { 0, 0 };

    std::cout << "Running BinaryExpressionTests:" << std::endl;

    std::cout << "InitializeSimple" << std::endl;
    state += RunTest([&testClass]() { testClass->InitializeSimple(); });

    std::cout << "GetChildren" << std::endl;
    state += RunTest([&testClass]() { testClass->GetChildren(); });

    std::cout << "OperatorEqual" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorEqual(); });

    std::cout << "OperatorNotEqualOperatorType" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualOperatorType(); });

    std::cout << "OperatorNotEqualLeft" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualLeft(); });

    std::cout << "OperatorNotEqualOperatorToken" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualOperatorToken(); });

    std::cout << "OperatorNotEqualRight" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualRight(); });

    return state;
}