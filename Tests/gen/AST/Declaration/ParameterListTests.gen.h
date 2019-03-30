#pragma once
#include "ParameterListTests.h"
#include "../RunTest.h"

TestState RunParameterListTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ParameterListTests>();
    TestState state = { 0, 0 };

    std::cout << "Running ParameterListTests:" << std::endl;

    std::cout << "InitializeSimple" << std::endl;
    state += RunTest([&testClass]() { testClass->InitializeSimple(); });

    std::cout << "GetChildren" << std::endl;
    state += RunTest([&testClass]() { testClass->GetChildren(); });

    std::cout << "OperatorEqual" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorEqual(); });

    std::cout << "OperatorNotEqualOpenParenthesisToken" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualOpenParenthesisToken(); });

    std::cout << "OperatorNotEqualParameters" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualParameters(); });

    std::cout << "OperatorNotEqualCloseParenthesisToken" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualCloseParenthesisToken(); });

    return state;
}