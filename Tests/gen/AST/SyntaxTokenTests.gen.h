#pragma once
#include "SyntaxTokenTests.h"
#include "../RunTest.h"

TestState RunSyntaxTokenTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::SyntaxTokenTests>();
    TestState state = { 0, 0 };

    std::cout << "Running SyntaxTokenTests:" << std::endl;

    std::cout << "InitializeSimple" << std::endl;
    state += RunTest([&testClass]() { testClass->InitializeSimple(); });

    std::cout << "OperatorEqual" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorEqual(); });

    std::cout << "OperatorNotEqualType" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualType(); });

    std::cout << "OperatorNotEqualValue" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualValue(); });

    return state;
}