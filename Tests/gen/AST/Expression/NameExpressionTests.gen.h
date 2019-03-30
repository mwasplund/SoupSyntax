#pragma once
#include "NameExpressionTests.h"
#include "../RunTest.h"

TestState RunNameExpressionTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::NameExpressionTests>();
    TestState state = { 0, 0 };

    std::cout << "Running NameExpressionTests:" << std::endl;

    std::cout << "InitializeSimpleNameExpression" << std::endl;
    state += RunTest([&testClass]() { testClass->InitializeSimpleNameExpression(); });

    std::cout << "InitializeSingleQualifiedNameExpression" << std::endl;
    state += RunTest([&testClass]() { testClass->InitializeSingleQualifiedNameExpression(); });

    std::cout << "InitializeGlobalDoubleQualifiedNameExpression" << std::endl;
    state += RunTest([&testClass]() { testClass->InitializeGlobalDoubleQualifiedNameExpression(); });

    std::cout << "SimpleNameExpressionGetChildren" << std::endl;
    state += RunTest([&testClass]() { testClass->SimpleNameExpressionGetChildren(); });

    std::cout << "SimpleNameExpressionOperatorEqual" << std::endl;
    state += RunTest([&testClass]() { testClass->SimpleNameExpressionOperatorEqual(); });

    std::cout << "SimpleNameExpressionOperatorNotEqualIdentifier" << std::endl;
    state += RunTest([&testClass]() { testClass->SimpleNameExpressionOperatorNotEqualIdentifier(); });

    std::cout << "GlobalQualifiedNameExpressionGetChildren" << std::endl;
    state += RunTest([&testClass]() { testClass->GlobalQualifiedNameExpressionGetChildren(); });

    std::cout << "GlobalQualifiedNameExpressionEqual" << std::endl;
    state += RunTest([&testClass]() { testClass->GlobalQualifiedNameExpressionEqual(); });

    std::cout << "GlobalQualifiedNameExpressionNotEqualLeft" << std::endl;
    state += RunTest([&testClass]() { testClass->GlobalQualifiedNameExpressionNotEqualLeft(); });

    std::cout << "GlobalQualifiedNameExpressionNotEqualDoubleColonToken" << std::endl;
    state += RunTest([&testClass]() { testClass->GlobalQualifiedNameExpressionNotEqualDoubleColonToken(); });

    std::cout << "GlobalQualifiedNameExpressionNotEqualRight" << std::endl;
    state += RunTest([&testClass]() { testClass->GlobalQualifiedNameExpressionNotEqualRight(); });

    std::cout << "SingleQualifiedNameExpressionGetChildren" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleQualifiedNameExpressionGetChildren(); });

    std::cout << "SingleQualifiedNameExpressionEqual" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleQualifiedNameExpressionEqual(); });

    std::cout << "SingleQualifiedNameExpressionNotEqualLeft" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleQualifiedNameExpressionNotEqualLeft(); });

    std::cout << "SingleQualifiedNameExpressionNotEqualLeftGlobal" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleQualifiedNameExpressionNotEqualLeftGlobal(); });

    std::cout << "SingleQualifiedNameExpressionNotEqualDoubleColonToken" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleQualifiedNameExpressionNotEqualDoubleColonToken(); });

    std::cout << "SingleQualifiedNameExpressionNotEqualRight" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleQualifiedNameExpressionNotEqualRight(); });

    return state;
}