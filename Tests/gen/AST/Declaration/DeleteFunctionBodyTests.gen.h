#pragma once
#include "DeleteFunctionBodyTests.h"
#include "../RunTest.h"

TestState RunDeleteFunctionBodyTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::DeleteFunctionBodyTests>();
    TestState state = { 0, 0 };

    std::cout << "Running DeleteFunctionBodyTests:" << std::endl;

    std::cout << "InitializeSimple" << std::endl;
    state += RunTest([&testClass]() { testClass->InitializeSimple(); });

    std::cout << "GetChildren" << std::endl;
    state += RunTest([&testClass]() { testClass->GetChildren(); });

    std::cout << "OperatorEqual" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorEqual(); });

    std::cout << "OperatorNotEqualEqualToken" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualEqualToken(); });

    std::cout << "OperatorNotEqualDeleteToken" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualDeleteToken(); });

    std::cout << "OperatorNotEqualSemicolonToken" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualSemicolonToken(); });

    return state;
}