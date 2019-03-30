#pragma once
#include "ExpressionStatementTests.h"
#include "../RunTest.h"

TestState RunExpressionStatementTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ExpressionStatementTests>();
    TestState state = { 0, 0 };

    std::cout << "Running ExpressionStatementTests:" << std::endl;

    std::cout << "InitializeSimple" << std::endl;
    state += RunTest([&testClass]() { testClass->InitializeSimple(); });

    std::cout << "GetChildren" << std::endl;
    state += RunTest([&testClass]() { testClass->GetChildren(); });

    std::cout << "OperatorEqual" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorEqual(); });

    std::cout << "OperatorNotEqualExpression" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualExpression(); });

    std::cout << "OperatorNotEqualSemicolonToken" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualSemicolonToken(); });

    return state;
}