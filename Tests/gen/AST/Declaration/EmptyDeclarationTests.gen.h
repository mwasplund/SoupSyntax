#pragma once
#include "EmptyDeclarationTests.h"
#include "../RunTest.h"

TestState RunEmptyDeclarationTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::EmptyDeclarationTests>();
    TestState state = { 0, 0 };

    std::cout << "Running EmptyDeclarationTests:" << std::endl;

    std::cout << "InitializeSimple" << std::endl;
    state += RunTest([&testClass]() { testClass->InitializeSimple(); });

    std::cout << "GetChildren" << std::endl;
    state += RunTest([&testClass]() { testClass->GetChildren(); });

    std::cout << "OperatorEqual" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorEqual(); });

    std::cout << "OperatorNotEqualSemicolonToken" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualSemicolonToken(); });

    return state;
}