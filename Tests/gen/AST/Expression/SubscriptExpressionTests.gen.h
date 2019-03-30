#pragma once
#include "SubscriptExpressionTests.h"
#include "../RunTest.h"

TestState RunSubscriptExpressionTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::SubscriptExpressionTests>();
    TestState state = { 0, 0 };

    std::cout << "Running SubscriptExpressionTests:" << std::endl;

    std::cout << "InitializeSimple" << std::endl;
    state += RunTest([&testClass]() { testClass->InitializeSimple(); });

    std::cout << "GetChildren" << std::endl;
    state += RunTest([&testClass]() { testClass->GetChildren(); });

    std::cout << "OperatorEqual" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorEqual(); });

    std::cout << "OperatorNotEqualLeft" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualLeft(); });

    std::cout << "OperatorNotEqualOpenBracket" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualOpenBracket(); });

    std::cout << "OperatorNotEqualRight" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualRight(); });

    std::cout << "OperatorNotEqualCloseBracket" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualCloseBracket(); });

    return state;
}