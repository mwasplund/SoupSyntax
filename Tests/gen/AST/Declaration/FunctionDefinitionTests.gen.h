#pragma once
#include "FunctionDefinitionTests.h"
#include "../RunTest.h"

TestState RunFunctionDefinitionTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::FunctionDefinitionTests>();
    TestState state = { 0, 0 };

    std::cout << "Running FunctionDefinitionTests:" << std::endl;

    std::cout << "InitializeSimple" << std::endl;
    state += RunTest([&testClass]() { testClass->InitializeSimple(); });

    std::cout << "GetChildren" << std::endl;
    state += RunTest([&testClass]() { testClass->GetChildren(); });

    std::cout << "OperatorEqual" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorEqual(); });

    std::cout << "OperatorNotEqualReturnType" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualReturnType(); });

    std::cout << "OperatorNotEqualIdentifier" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualIdentifier(); });

    std::cout << "OperatorNotEqualParameterList" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualParameterList(); });

    std::cout << "OperatorNotEqualBody" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualBody(); });

    return state;
}