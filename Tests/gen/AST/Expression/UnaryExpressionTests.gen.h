#pragma once
#include "UnaryExpressionTests.h"
#include "../RunTest.h"

TestState RunUnaryExpressionTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::UnaryExpressionTests>();
    TestState state = { 0, 0 };

    std::cout << "Running UnaryExpressionTests:" << std::endl;

    std::cout << "InitializeSimple" << std::endl;
    state += RunTest([&testClass]() { testClass->InitializeSimple(); });

    std::cout << "PrefixOperatorGetChildren" << std::endl;
    state += RunTest([&testClass]() { testClass->PrefixOperatorGetChildren(); });

    std::cout << "PostfixOperatorGetChildren" << std::endl;
    state += RunTest([&testClass]() { testClass->PostfixOperatorGetChildren(); });

    std::cout << "OperatorEqual" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorEqual(); });

    std::cout << "OperatorNotEqualOperator" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualOperator(); });

    std::cout << "OperatorNotEqualOperand" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualOperand(); });

    std::cout << "OperatorNotEqualOperatorToken" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualOperatorToken(); });

    return state;
}