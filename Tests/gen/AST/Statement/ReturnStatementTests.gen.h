#pragma once
#include "ReturnStatementTests.h"
#include "../RunTest.h"

TestState RunReturnStatementTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ReturnStatementTests>();
    TestState state = { 0, 0 };

    std::cout << "Running ReturnStatementTests:" << std::endl;

    std::cout << "InitializeNoExpression" << std::endl;
    state += RunTest([&testClass]() { testClass->InitializeNoExpression(); });

    std::cout << "InitializeWithExpression" << std::endl;
    state += RunTest([&testClass]() { testClass->InitializeWithExpression(); });

    std::cout << "GetChildrenNoExpression" << std::endl;
    state += RunTest([&testClass]() { testClass->GetChildrenNoExpression(); });

    std::cout << "GetChildrenWithExpression" << std::endl;
    state += RunTest([&testClass]() { testClass->GetChildrenWithExpression(); });

    std::cout << "OperatorEqualNoExpression" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorEqualNoExpression(); });

    std::cout << "OperatorEqualWithExpression" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorEqualWithExpression(); });

    std::cout << "OperatorNotEqualReturnToken" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualReturnToken(); });

    std::cout << "OperatorNotEqualNoExpression" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualNoExpression(); });

    std::cout << "OperatorNotEqualWithExpression" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualWithExpression(); });

    std::cout << "OperatorNotEqualSemicolonToken" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualSemicolonToken(); });

    return state;
}