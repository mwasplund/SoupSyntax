#pragma once
#include "LiteralExpressionTests.h"
#include "../RunTest.h"

TestState RunLiteralExpressionTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::LiteralExressionTests>();
    TestState state = { 0, 0 };

    std::cout << "Running LiteralExressionTests:" << std::endl;

    std::cout << "InitializeSimple" << std::endl;
    state += RunTest([&testClass]() { testClass->InitializeSimple(); });

    std::cout << "GetChildren" << std::endl;
    state += RunTest([&testClass]() { testClass->GetChildren(); });

    std::cout << "OperatorEqual" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorEqual(); });

    std::cout << "OperatorNotEqualType" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualType(); });

    std::cout << "OperatorNotEqualToken" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualToken(); });

    return state;
}