#pragma once
#include "DefaultFunctionBodyTests.h"
#include "../RunTest.h"

TestState RunDefaultFunctionBodyTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::DefaultFunctionBodyTests>();
    TestState state = { 0, 0 };

    std::cout << "Running DefaultFunctionBodyTests:" << std::endl;

    std::cout << "InitializeSimple" << std::endl;
    state += RunTest([&testClass]() { testClass->InitializeSimple(); });

    std::cout << "GetChildren" << std::endl;
    state += RunTest([&testClass]() { testClass->GetChildren(); });

    std::cout << "OperatorEqual" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorEqual(); });

    std::cout << "OperatorNotEqualEqualToken" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualEqualToken(); });

    std::cout << "OperatorNotEqualDefaultToken" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualDefaultToken(); });

    std::cout << "OperatorNotEqualSemicolonToken" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualSemicolonToken(); });

    return state;
}